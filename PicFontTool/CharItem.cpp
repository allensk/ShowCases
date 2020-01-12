#include "stdafx.h"

#include <assert.h>

#include "CharItem.h"
#include "Algorithms.h"
#include "xxhash.h"

CharItem::CharItem()
{
	this->cha = 0;
	this->width = 0;
	this->height = 0;
	this->hash = 0;
}

void CharItem::CalculateHash()
{
	hash = XXH64(bits.data(), bits.size(), 0);
}

const char* CharItem::GetHashBits()
{
	tmp_buf = base64_encode((const unsigned char*)bits.data(), bits.size());
	return tmp_buf.c_str();
}

void CharItem::SetHashBits(const char* str)
{
	bits.clear();
	std::string a = base64_decode(str);
	bits.resize(a.size());
	memcpy_s(bits.data(), a.size(), a.c_str(), a.size());
	CalculateHash();
}