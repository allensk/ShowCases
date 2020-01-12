#pragma once

#include <set>

#include "CharItem.h"

/**
* 
*/
class CharStore
{
public:
	CharStore();
	~CharStore();

	void AddItem(const CharItem& item);
	bool Find(const CharItem& item);

	/**
	* Detect if the character passed is in store
	*/
	bool DetectFont(const CharItem& in, CharItem** out);
	CharItem SearchName(const std::string& name);
	
	void RemoveItem(const std::string& name);
	void RemoveItem(wchar_t cha);

	/**
	*
	*/
	std::set<std::pair<int, int>> GetDimensions();

	/**
	@brief Specify a name with .txt extension.
	*/
	void SaveFile(const char* path);
	bool ReadFile(const char* path);
	void Sort();
	bool IsEmpty();
	void Clear();

	std::set<CharItem> chas;
};