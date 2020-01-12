#pragma once

#include <vector>

/**
* Character class used for identify single character.
*/
class CharItem
{
public:
	CharItem();
	~CharItem() {};

	bool operator<(const CharItem& i) const {

		return hash < i.hash;
		/*if (hash != i.hash)
			return hash < i.hash;
		else {
			return bits < i.bits;
		}*/
	}

	operator bool() {
		return hash ? true : false;
	}

	/**
	* Return the width and height of character bitmap
	*/
	std::pair<int, int> GetWidthHeight() const { return std::make_pair(width, height); }

	/**
	* Set the width and height of character bitmap
	*/
	void SetWidthHeight(int x, int y) { width = x; height = y; }

	/**
	* 
	*/
	wchar_t GetChar() { return cha; }
	void SetChar(wchar_t cha) { this->cha = cha; }

	/**
	* A hash used to distinguish different characters.
	*/
	unsigned long long GetHash() { return hash; }
	void SetHash(unsigned long long hash) { this->hash = hash; }

	/**
	* Get bitmap name
	*/
	const std::string& GetPatternName() { return pattern_name; }

	/**
	* Set bitmap name
	*/
	void SetPatternName(const std::string& pattern_name) { this->pattern_name = pattern_name; }

	/**
	* Minimal bits set
	*/
	const std::vector<char>& GetBits() { return bits; }
	void SetBits(const std::vector<char>& bits) { this->bits = bits; CalculateHash();}

	// Encode and Decode to serve readibitliy and save memory
	const char* GetHashBits();
	void SetHashBits(const char* str);

private:
	void CalculateHash();

private:

	//
	wchar_t cha;					// 
	int width;
	int height;
	unsigned long long hash;
	std::string pattern_name;
	std::vector<char> bits;

	//
	std::string tmp_buf;
};