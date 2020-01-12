///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/dialog.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ScreenShotDialog
///////////////////////////////////////////////////////////////////////////////
class ScreenshotDialog : public wxDialog
{
private:
	void SaveScreenshot();

protected:
	// Virtual event handlers, overide them in your derived class
	void OnKeyDown(wxKeyEvent& event);
	void OnPaint(wxPaintEvent& event);
	void OnInit(wxInitDialogEvent& event);
	void OnMouseEvent(wxMouseEvent& event);

public:

	ScreenshotDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(403, 305), long style = 0 | wxBORDER_NONE | wxWANTS_CHARS);
	~ScreenshotDialog();

	/**
	* Get the bitmap clipped
	*/
	wxBitmap GetClippedBitmap();

	/**
	* Get the clipped area coordinates
	*/
	wxRect GetClippedRect();

private:
	bool mouse_down;
	wxMemoryDC memory_dc;	/**< Temporary dc */
	wxPoint pt1;			/**< Mouse drag point */
	wxPoint pt2;			/**< Mouse drop point */
	wxRect clip_rect;		/**< Clip bitmap rectangle zone */
};