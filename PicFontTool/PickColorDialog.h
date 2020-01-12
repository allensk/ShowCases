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
/// Class PickColorDialog
///////////////////////////////////////////////////////////////////////////////
class PickColorDialog : public wxDialog
{
private:

protected:
	// Virtual event handlers, overide them in your derived class
	void OnKeyDown(wxKeyEvent& event);
	void OnPaint(wxPaintEvent& event);
	void OnInit(wxInitDialogEvent& event);
	void OnTimer(wxTimerEvent& event);

public:

	PickColorDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(310, 310), long style = 0 | wxBORDER_NONE | wxWANTS_CHARS | wxSTAY_ON_TOP);
	~PickColorDialog();

	/**
	* Get the pixel color under the mouse after left click
	*/
	wxColor GetPickedColor() { return pt_color; }

private:
	bool mouse_down;
	wxMemoryDC memory_dc;	/**< Temporary dc for reuse */
	wxTimer timer;
	wxColor pt_color;		
};