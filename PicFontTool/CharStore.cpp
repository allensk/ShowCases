#include "stdafx.h"

#include <map>
#include <fstream>
#include <filesystem>
#include <assert.h>
#include <sstream>

#include "CharStore.h"

using namespace std;

CharStore::CharStore()
{

}

CharStore::~CharStore()
{

}

void CharStore::AddItem(const CharItem& item)
{
	chas.insert(item);
}

bool CharStore::Find(const CharItem& item)
{
	auto p = chas.find(item);
	if (p != chas.end()) {
		return true;
	}

	return false;
}

bool CharStore::DetectFont(const CharItem& in, CharItem** out)
{
	auto p = chas.find(in);
	if (p != chas.end()) {
		*out = const_cast<CharItem*>(&(*p));
		return true;
	}

	return false;
}

CharItem CharStore::SearchName(const std::string& name)
{
	for (auto& x : chas) {
		if (const_cast<CharItem&>(x).GetPatternName() == name)
			return x;
	}

	return CharItem();
}

void CharStore::RemoveItem(const std::string& name)
{

}

void CharStore::RemoveItem(wchar_t cha)
{

}

static bool is_file_exist(const char *fileName)
{
	std::ifstream infile(fileName);
	return infile.good();
}

void CharStore::SaveFile(const char* path)
{
	/*string path_str = path;
	auto pos = path_str.find(".txt");

	assert(pos == path_str.npos);

	if (is_file_exist(path)) {
		auto substr = path_str.substr(0, pos);
		substr += "_copy.txt";
		path_str = 
	}*/

	ofstream of(path);

	map<wchar_t, CharItem> char_map;
	for (auto x : chas) {
		char_map[x.GetChar()] = x;
	}

	for (auto x : char_map) {
		int a = 0;
		CharItem& item = x.second;
		of << item.GetPatternName() << ';' << x.first << ';' << item.GetWidthHeight().first << ';'
			<< item.GetWidthHeight().second << ';' << item.GetHash() << ';';
		of << item.GetHashBits() << endl;
	}
}

bool CharStore::ReadFile(const char* path)
{
	ifstream inf(path);
	if (!inf.is_open())
		return false;

	std::stringstream file_buffer;
	file_buffer << inf.rdbuf();

	std::string line;
	while (getline(file_buffer, line)) {
		std::stringstream buf(line);

		// Read info from line which is seperated by ;
		string str;
		int i = 0;
		CharItem item;
		int width;
		std::vector<bool> bits;
		
		while (getline(buf, str, ';')) {
			switch (i) {
			case 0:
				item.SetPatternName(str);
				break;
			case 1:
				item.SetChar(str[0]);
				break;
			case 2:
				width = stol(str);
				break;
			case 3:
				item.SetWidthHeight(width, stol(str));
				break;
			case 4:
				item.SetHash(stoull(str));
				break;
			case 5:
				item.SetHashBits(str.c_str());
				break;
			}

			i++;
		}

		chas.insert(item);
	}

	return true;
}

bool CharStore::IsEmpty()
{
	return chas.size() ? false : true;
}

void CharStore::Clear()
{
	chas.clear();
}

std::set<std::pair<int, int>> CharStore::GetDimensions()
{
	std::set<std::pair<int, int>> dimensions;

	for (auto& x : chas) {
		dimensions.insert(x.GetWidthHeight());
	}

	return dimensions;
}