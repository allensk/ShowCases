#pragma once

#include <string>

namespace genfunc {

/**
* Return exacutable file's path
*/
bool __declspec(dllexport) get_exe_path(wchar_t* buf);

/**
* Return path of a module such as a dll
*/
bool __declspec(dllexport) get_module_path(const wchar_t* name, wchar_t* buf);

/**
* Get executable file's name
*/
bool __declspec(dllexport) get_exe_name(wchar_t* buf);

void __declspec(dllexport) log(const wchar_t* szTypes, ...);

};