///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "stdafx.h"

#include <wx/msgdlg.h>
#include <wx/wxprec.h>
#include <ShellScalingApi.h>

#include "PickColorDialog.h"

///////////////////////////////////////////////////////////////////////////

PickColorDialog::PickColorDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(PickColorDialog::OnInit));
	this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(PickColorDialog::OnKeyDown));
	this->Connect(wxEVT_PAINT, wxPaintEventHandler(PickColorDialog::OnPaint));
	this->Connect(wxEVT_TIMER, wxTimerEventHandler(PickColorDialog::OnTimer));

	this->mouse_down = false;

	GetAsyncKeyState(VK_LBUTTON);
}

PickColorDialog::~PickColorDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(PickColorDialog::OnInit));
	this->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(PickColorDialog::OnKeyDown));
	this->Disconnect(wxEVT_PAINT, wxPaintEventHandler(PickColorDialog::OnPaint));
	this->Disconnect(wxEVT_TIMER, wxTimerEventHandler(PickColorDialog::OnTimer));
}

void PickColorDialog::OnInit(wxInitDialogEvent& event)
{
	// SaveScreenshot();
	timer.SetOwner(this, 100);
	timer.Start(100);
}

void PickColorDialog::OnTimer(wxTimerEvent& event)
{
	wxScreenDC dcScreen;
	wxBitmap screenshot(300, 300, -1);

	// Move window to prevent shelter
	wxPoint pt = wxGetMousePosition();
	if (pt.x <= 310 && pt.y <= 310) {
		Move(0, 310);
	}
	else {
		auto pos = GetPosition();
		if (pos.x != 0 || pos.y != 0) {
			Move(0, 0);
		}
	}

	wxClientDC dc(this);
	dc.StretchBlit(0, 0, 310, 310,
		&dcScreen,
		pt.x - 15, pt.y - 15, 31, 31);

	// Focus on the center
	dc.DrawLine(150, 0, 150, 310);
	dc.DrawLine(160, 0, 160, 310);
	dc.DrawLine(0, 150, 310, 150);
	dc.DrawLine(0, 160, 310, 160);

	if (GetAsyncKeyState(VK_LBUTTON) < 0)
	{
		dcScreen.GetPixel(pt, &pt_color);
		timer.Stop();
		EndModal(wxID_OK);
	}
}

void PickColorDialog::OnKeyDown(wxKeyEvent& event)
{
	wxPoint pt = wxGetMousePosition();

	switch (event.GetKeyCode()) {
	case WXK_LEFT:
		// Unwork, cause skipping
		// mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, pt.x - 1, pt.y, 0, NULL);
		// mouse_event(MOUSEEVENTF_MOVE, -1, 0, 0, NULL);
		SetCursorPos(pt.x - 1, pt.y);
		break;
	case WXK_RIGHT:
		SetCursorPos(pt.x + 1, pt.y);
		break;
	case WXK_UP:
		SetCursorPos(pt.x, pt.y - 1);
		break;
	case WXK_DOWN:
		SetCursorPos(pt.x, pt.y + 1);
		break;
	case WXK_F1:
		wxMessageBox("Uninject",
			"About Hello World", wxOK | wxICON_INFORMATION);
		break;
	case WXK_ESCAPE:
		EndModal(wxID_OK);
		break;
	// Pick point color
	case WXK_RETURN:
	{
		timer.Stop();
		wxScreenDC dcScreen;
		dcScreen.GetPixel(pt, &pt_color);
		EndModal(wxID_OK);
		break;
	}
	case 'Q':
	{
		break;
	}
	default:
		int code = event.GetKeyCode();
		break;
	}

	event.StopPropagation();
}

void PickColorDialog::OnPaint(wxPaintEvent& event)
{
	wxPaintDC dc(this);

	wxRect rect = GetUpdateClientRect();

	bool ret = dc.Blit(rect.x, //Copy to this X coordinate
		rect.y, //Copy to this Y coordinate
		rect.width, //Copy this width
		rect.height, //Copy this height
		&memory_dc, //From where do we copy?
		rect.x, //What's the X offset in the original DC?
		rect.y  //What's the Y offset in the original DC?
	);
}