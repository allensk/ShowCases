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

#include "ScreenshotDialog.h"

///////////////////////////////////////////////////////////////////////////

ScreenshotDialog::ScreenshotDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(ScreenshotDialog::OnInit));
	this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(ScreenshotDialog::OnKeyDown));
	this->Connect(wxEVT_PAINT, wxPaintEventHandler(ScreenshotDialog::OnPaint));

	this->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));
	this->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));
	this->Connect(wxEVT_MOTION, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));

	this->mouse_down = false;
}

ScreenshotDialog::~ScreenshotDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(ScreenshotDialog::OnInit));
	this->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(ScreenshotDialog::OnKeyDown));
	this->Disconnect(wxEVT_PAINT, wxPaintEventHandler(ScreenshotDialog::OnPaint));

	this->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));
	this->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));
	this->Disconnect(wxEVT_MOTION, wxMouseEventHandler(ScreenshotDialog::OnMouseEvent));
}

void ScreenshotDialog::OnInit(wxInitDialogEvent& event)
{
	DEVMODE mode;
	EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &mode);
	SetSize(mode.dmPelsWidth, mode.dmPelsHeight);
	SaveScreenshot();
}

void ScreenshotDialog::SaveScreenshot()
{
	////Create a DC for the whole screen area
	wxScreenDC dcScreen;

	// When enable system font scales, the value is wrong.
	////Get the size of the screen/DC
	//wxCoord screenWidth, screenHeight;
	//dcScreen.GetSize(&screenWidth, &screenHeight);
	//screenWidth = 1960;
	//screenHeight = 1080;

	DEVMODE mode;
	EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &mode);

	int a = GetSystemMetrics(SM_CXSCREEN);

	//Create a Bitmap that will later on hold the screenshot image
	//Note that the Bitmap must have a size big enough to hold the screenshot
	//-1 means using the current default colour depth
	wxBitmap screenshot(mode.dmPelsWidth, mode.dmPelsHeight, -1);

	//Create a memory DC that will be used for actually taking the screenshot
	wxMemoryDC& memDC = memory_dc;
	//Tell the memory DC to use our Bitmap
	//all drawing action on the memory DC will go to the Bitmap now
	memDC.SelectObject(screenshot);
	//Blit (in this case copy) the actual screen on the memory DC
	//and thus the Bitmap
	memDC.Blit(0, //Copy to this X coordinate
		0, //Copy to this Y coordinate
		mode.dmPelsWidth, //Copy this width
		mode.dmPelsHeight, //Copy this height
		&dcScreen, //From where do we copy?
		0, //What's the X offset in the original DC?
		0  //What's the Y offset in the original DC?
	);

	// Dim area out of clipping
	//memDC.SelectObject(wxNullBitmap);
	//screenshot = screenshot.ConvertToDisabled(90);
	//memDC.SelectObject(screenshot);

	//Select the Bitmap out of the memory DC by selecting a new
	//uninitialized Bitmap
	// memDC.SelectObject(wxNullBitmap);

	//Our Bitmap now has the screenshot, so let's save it :-)
	//screenshot.SaveFile("screenshot.bmp", wxBITMAP_TYPE_BMP);
}

wxBitmap ScreenshotDialog::GetClippedBitmap()
{
	return memory_dc.GetAsBitmap(&clip_rect);
}

wxRect ScreenshotDialog::GetClippedRect()
{
	return clip_rect;
}

void ScreenshotDialog::OnKeyDown(wxKeyEvent& event)
{
	switch (event.GetKeyCode()) {
	case WXK_LEFT:
	case WXK_RIGHT:
		break;
	case WXK_F1:
		wxMessageBox("Uninject",
			"About Hello World", wxOK | wxICON_INFORMATION);
		break;
	case WXK_ESCAPE:
		EndModal(wxID_CANCEL);
		break;
	case WXK_RETURN:
		EndModal(wxID_OK);
		break;
	case 'Q': 
	{
		break;
	}
	default:
		int code = event.GetKeyCode();
		break;
		
	}
}

void ScreenshotDialog::OnPaint(wxPaintEvent& event)
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

void ScreenshotDialog::OnMouseEvent(wxMouseEvent& event)
{
	if (event.LeftDown()) {
		pt1 = wxGetMousePosition();
		mouse_down = true;

		return;
	}

	if (event.LeftUp()) {
		pt2 = wxGetMousePosition();
		mouse_down = false;
		UpdateWindow(this->GetHWND());
		return;
	}

	//if (event.Moving()) {

	//	wxClientDC dc(this);
	//	
	//	wxRect rect = this->GetRect();
	//	bool ret = dc.Blit(rect.x, //Copy to this X coordinate
	//		rect.y, //Copy to this Y coordinate
	//		rect.width, //Copy this width
	//		rect.height, //Copy this height
	//		&memory_dc, //From where do we copy?
	//		rect.x, //What's the X offset in the original DC?
	//		rect.y  //What's the Y offset in the original DC?
	//	);

	//	wxPoint pt = event.GetPosition();
	//	dc.DrawLine(wxPoint(0, pt.y), wxPoint(rect.width, pt.y));
	//	dc.DrawLine(wxPoint(pt.x, 0), wxPoint(pt.x, rect.height));

	//	return;
	//}

	if (event.Dragging()) {

		wxClientDC dc(this);
		wxPoint pt = event.GetPosition();
		
		wxRect window_rect = GetRect();
		wxRect pre_rect(pt1, pt);

		wxRegion rgn(window_rect);
		rgn.Subtract(pre_rect);

		wxBitmap bitmap(window_rect.width, window_rect.height);
		wxMemoryDC memdc(&dc);
		memdc.SelectObject(bitmap);

		wxRect rect = this->GetRect();
		bool ret = memdc.Blit(0, //Copy to this X coordinate
			0, //Copy to this Y coordinate
			rect.width, //Copy this width
			rect.height, //Copy this height
			&memory_dc, //From where do we copy?
			0, //What's the X offset in the original DC?
			0  //What's the Y offset in the original DC?
		);

		memdc.SetBrush(*wxTRANSPARENT_BRUSH);
		memdc.SetPen(*wxRED_PEN);
		memdc.DrawRectangle(pt1.x, pt1.y, pt.x - pt1.x, pt.y - pt1.y);

		clip_rect = wxRect(pt1, pt);

		// Copy to client dc
		ret = dc.Blit(0, //Copy to this X coordinate
			0, //Copy to this Y coordinate
			rect.width, //Copy this width
			rect.height, //Copy this height
			&memdc, //From where do we copy?
			0, //What's the X offset in the original DC?
			0  //What's the Y offset in the original DC?
		);

		return;
	}
	
}