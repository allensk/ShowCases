#include "stdafx.h"

#include <windows.h>
#include <plog/Log.h>

#include "GenFunc.h"

namespace genfunc {

bool get_exe_path(wchar_t* buf)
{
	if (!buf)
		return false;

	std::wstring str;

	// Get executable file path
	wchar_t szFileName[MAX_PATH];
	DWORD ret = GetModuleFileName(NULL, szFileName, MAX_PATH);
	if (ret) {

		// Trim the file
		str = szFileName;
		size_t pos = str.rfind(L'\\');
		auto path = str.substr(0, pos);
		wcscpy_s(buf, MAX_PATH, path.c_str());

		return true;
	}
	
	return false;
}

bool get_exe_name(wchar_t* buf) {
	if (!buf)
		return false;

	std::wstring str;

	// Get executable file path
	wchar_t szFileName[MAX_PATH];
	DWORD ret = GetModuleFileName(NULL, szFileName, MAX_PATH);
	if (ret) {

		// Trim the file
		str = szFileName;
		size_t pos = str.rfind(L'\\');
		auto path = str.substr(pos + 1, str.length() - pos);
		wcscpy_s(buf, MAX_PATH, path.c_str());

		return true;
	}

	return false;
}

bool get_module_path(const wchar_t* name, wchar_t* buf)
{
	if (!buf)
		return false;

	std::wstring str;

	// Get executable file path
	wchar_t szFileName[MAX_PATH];
	if (HMODULE module = GetModuleHandle(name)) {
		DWORD ret = GetModuleFileName(module, szFileName, MAX_PATH);
		if (ret) {

			// Trim the file
			str = szFileName;
			size_t pos = str.rfind(L'\\');
			auto path = str.substr(0, pos);
			wcscpy_s(buf, MAX_PATH, path.c_str());

			return true;
		}
	}
	
	return false;
}

void log(const wchar_t* szTypes, ...)
{
	wchar_t buf[1024]{};

	va_list vl;
	va_start(vl, szTypes);
	vswprintf_s(buf, szTypes, vl);
	va_end(vl);

	PLOGI << buf;
}

};