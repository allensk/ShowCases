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
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/checkbox.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/dialog.h>
#include <wx/fileconf.h>

#include <vector>
#include "CharStore.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class PicFontToolDialog
///////////////////////////////////////////////////////////////////////////////
class PicFontToolDialog : public wxDialog
{
private:

protected:
	wxPanel* m_panel1;
	wxStaticText* m_staticTextScreenCopy;
	wxStaticText* des_static;
	wxButton* choose_wnd;
	wxButton* bind_wnd;
	wxButton* screenshot;
	wxButton* save_pic;
	wxStaticText* color0;
	wxTextCtrl* text0;
	wxTextCtrl* offset0;
	wxCheckBox* checkbox0;
	wxStaticText* color1;
	wxTextCtrl* text1;
	wxTextCtrl* offset1;
	wxCheckBox* checkbox1;
	wxStaticText* color2;
	wxTextCtrl* text2;
	wxTextCtrl* offset2;
	wxCheckBox* checkbox2;
	wxStaticText* color3;
	wxTextCtrl* text3;
	wxTextCtrl* offset3;
	wxCheckBox* checkbox3;
	wxPanel* m_panel2;
	wxCheckBox* reverse_color;
	wxCheckBox* c2;
	wxCheckBox* c3;
	wxStaticText* grey_zone;
	wxButton* gen_fonts;
	wxButton* gen_fonts1;
	wxButton* ocr;
	wxStaticText* m_staticText15;
	wxStaticText* identified_fonts;
	wxPanel* m_panel3;
	wxStaticText* m_staticText16;
	wxStaticText* m_staticText18;
	wxTextCtrl* test_input;
	wxButton* test;
	wxButton* generate_fonts;
	wxButton* read_fonts;
	wxButton* write_fonts;
	wxListBox* font_list;
	wxStaticText* pattern_matrix;

	// Virtual event handlers, overide them in your derived class
	virtual void OnInit(wxInitDialogEvent& event);
	virtual void OnClose(wxCloseEvent& event);
	virtual void ChooseWnd(wxCommandEvent& event);
	virtual void OnBindWnd(wxCommandEvent& event);
	virtual void OnColorClick(wxMouseEvent& event);
	virtual void OnScreenshot(wxCommandEvent& event);
	virtual void OnReverseColor(wxCommandEvent& event);
	virtual void OnColorOffsetChange(wxCommandEvent& event);
	virtual void OnColorCheck(wxCommandEvent& event);
	virtual void OnTest(wxCommandEvent& event);
	virtual void OnSavePic(wxCommandEvent& event);
	virtual void DClickCha(wxCommandEvent& event);
	virtual void OnOCR(wxCommandEvent& event);
	virtual void OnGenerateFonts(wxCommandEvent& event);
	virtual void OnReadFonts(wxCommandEvent& event);
	virtual void OnSaveFonts(wxCommandEvent& event);

	void ConstructorInit();
	void RefreshStore();
	void RefreshGreyZone();
	void RefreshColorText(int i);

	/**
	* Multiple colors can be selected to grey the zone.
	*/
	std::vector<std::pair<int, int>> GetCheckedColors();
	
	/**
	* Generating font store by font interface.
	*/
	void GenerateSystemFonts(wxString fonts, wxString font_interface, int font_size = 10);

	/**
	* Remove empty cell and retidy bitmap.
	*/
	char* ClipZone(int width, int height, const char* pbuf);

public:

	PicFontToolDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("PicFontTool"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(987, 605), long style = wxDEFAULT_DIALOG_STYLE);
	~PicFontToolDialog();

private:
	// Control lists
	std::vector<wxStaticText*> color_pics;
	std::vector<wxTextCtrl*> color_texts;
	std::vector<wxTextCtrl*> color_offsets;
	std::vector<wxCheckBox*> color_checkboxes;
	CharStore store;
	wxBitmap origin_bmp;
	HWND hwnd_pointed;
	HWND hwnd_bound;
	wxFileConfig* config = nullptr;
};