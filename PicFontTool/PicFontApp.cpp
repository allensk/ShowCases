#include "stdafx.h"
#include "PicFontApp.h"

#include <string>
#include <plog/Log.h>

#include "GenFunc.h"

#include "PicFontToolDialog.h"

using namespace std;
using namespace genfunc;

wxIMPLEMENT_APP(PicFontApp);

bool PicFontApp::OnInit()
{
	wchar_t buf[MAX_PATH];
	if (!get_exe_path(buf)) {
		return false;
	}

	wstring DirStr = buf;
	DirStr += L"\\Log.txt";
	plog::init(plog::info, DirStr.c_str(), 2000000, 1);

	PicFontToolDialog* dlg = new PicFontToolDialog(nullptr);
	dlg->Show(true);
	return true;
}