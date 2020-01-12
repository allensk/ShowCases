#pragma once

#include <string>

namespace genfunc {

bool __declspec(dllexport) get_exe_path(wchar_t* buf);
bool __declspec(dllexport) get_module_path(const wchar_t* name, wchar_t* buf);
bool __declspec(dllexport) get_exe_name(wchar_t* buf);

void __declspec(dllexport) log(const wchar_t* szTypes, ...);

};