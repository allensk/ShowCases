#pragma once

#include <set>

#include "CharItem.h"

/**
* Character store class.
* CharItem container.
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

	/**
	* Find CharItem by character name
	* @return CharItem in the store
	*/
	CharItem SearchName(const std::string& name);
	
	/**
	* Remove CharItem from store by character name
	* @return CharItem in the store
	*/
	void RemoveItem(const std::string& name);

	/**
	* Remove CharItem from store by character
	*/
	void RemoveItem(wchar_t cha);

	/**
	* Operate directly on characters set
	*/
	std::set<CharItem>& GetChas() { return chas; };

	/**
	* @Return Dimension sets whick specify character matrix width and height.
	*/
	std::set<std::pair<int, int>> GetDimensions();

	/**
	* @brief Serialize data
	*/
	void SaveFile(const char* path);

	/**
	* @brief Unserialize data
	*/
	bool ReadFile(const char* path);

	/**
	* Tell whehter store contain any characters
	*/
	bool IsEmpty();

	/**
	* Empty store
	*/
	void Clear();

private:
	std::set<CharItem> chas;
};