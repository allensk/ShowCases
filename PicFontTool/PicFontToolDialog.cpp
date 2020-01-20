///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "stdafx.h"

#include <wx/wxprec.h>
#include <wx/fontenum.h>

#include <wx/msw/dib.h>
#include <plog/Log.h>

#include "PicFontToolDialog.h"
#include "ScreenshotDialog.h"
#include "PickColorDialog.h"

#include <cmath>
#include <chrono>

using namespace std;

///////////////////////////////////////////////////////////////////////////

PicFontToolDialog::PicFontToolDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxHORIZONTAL);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizerScreen;
	bSizerScreen = new wxBoxSizer(wxVERTICAL);

	m_staticTextScreenCopy = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
	m_staticTextScreenCopy->Wrap(-1);
	bSizerScreen->Add(m_staticTextScreenCopy, 1, wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer(wxVERTICAL);

	des_static = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	des_static->Wrap(-1);
	bSizer22->Add(des_static, 0, wxALL | wxEXPAND, 5);


	bSizerScreen->Add(bSizer22, 0, wxEXPAND, 5);

	wxBoxSizer* bSizerShot;
	bSizerShot = new wxBoxSizer(wxHORIZONTAL);


	bSizerShot->Add(0, 0, 1, wxEXPAND, 5);

	choose_wnd = new wxButton(m_panel1, wxID_ANY, wxT("CW"), wxDefaultPosition, wxSize(30, 30), 0);
	choose_wnd->SetToolTip(wxT("Choose Window"));

	bSizerShot->Add(choose_wnd, 0, wxALL | wxEXPAND, 1);

	bind_wnd = new wxButton(m_panel1, wxID_ANY, wxT("BW"), wxDefaultPosition, wxSize(30, 30), 0);
	bind_wnd->SetToolTip(wxT("Bind Window"));

	bSizerShot->Add(bind_wnd, 0, wxALL, 1);

	screenshot = new wxButton(m_panel1, wxID_ANY, wxT("Ss"), wxDefaultPosition, wxSize(30, 30), 0);
	screenshot->SetToolTip(wxT("Screenshot"));

	bSizerShot->Add(screenshot, 0, wxALL, 1);

	save_pic = new wxButton(m_panel1, wxID_ANY, wxT("SP"), wxDefaultPosition, wxSize(30, 30), 0);
	save_pic->SetToolTip(wxT("SavePic"));

	bSizerShot->Add(save_pic, 0, wxALL, 1);


	bSizerScreen->Add(bSizerShot, 0, wxEXPAND, 5);


	bSizer33->Add(bSizerScreen, 1, wxEXPAND, 5);


	bSizer21->Add(bSizer33, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer(wxHORIZONTAL);

	color0 = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(30, 0), 0 | wxBORDER_SIMPLE);
	color0->Wrap(-1);
	bSizer10->Add(color0, 0, wxALL | wxEXPAND, 5);

	text0 = new wxTextCtrl(m_panel1, wxID_ANY, wxT("000000-000000"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	bSizer10->Add(text0, 1, wxALL | wxEXPAND, 5);

	offset0 = new wxTextCtrl(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(60, -1), wxTE_PROCESS_ENTER);
#ifdef __WXGTK__
	if (!offset0->HasFlag(wxTE_MULTILINE))
	{
		offset0->SetMaxLength(6);
	}
#else
	offset0->SetMaxLength(6);
#endif
	bSizer10->Add(offset0, 0, wxALL, 5);

	checkbox0 = new wxCheckBox(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer10->Add(checkbox0, 0, wxALL | wxEXPAND, 5);


	bSizer21->Add(bSizer10, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer(wxHORIZONTAL);

	color1 = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(30, -1), 0 | wxBORDER_SIMPLE);
	color1->Wrap(-1);
	bSizer11->Add(color1, 0, wxALL | wxEXPAND, 5);

	text1 = new wxTextCtrl(m_panel1, wxID_ANY, wxT("000000-000000"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	bSizer11->Add(text1, 1, wxALL | wxEXPAND, 5);

	offset1 = new wxTextCtrl(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(60, -1), wxTE_PROCESS_ENTER);
#ifdef __WXGTK__
	if (!offset1->HasFlag(wxTE_MULTILINE))
	{
		offset1->SetMaxLength(6);
	}
#else
	offset1->SetMaxLength(6);
#endif
	bSizer11->Add(offset1, 0, wxALL, 5);

	checkbox1 = new wxCheckBox(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer11->Add(checkbox1, 0, wxALL | wxEXPAND, 5);


	bSizer21->Add(bSizer11, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer(wxHORIZONTAL);

	color2 = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(30, -1), 0 | wxBORDER_SIMPLE);
	color2->Wrap(-1);
	bSizer12->Add(color2, 0, wxALL | wxEXPAND, 5);

	text2 = new wxTextCtrl(m_panel1, wxID_ANY, wxT("000000-000000"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	bSizer12->Add(text2, 1, wxALL | wxEXPAND, 5);

	offset2 = new wxTextCtrl(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(60, -1), wxTE_PROCESS_ENTER);
#ifdef __WXGTK__
	if (!offset2->HasFlag(wxTE_MULTILINE))
	{
		offset2->SetMaxLength(6);
	}
#else
	offset2->SetMaxLength(6);
#endif
	bSizer12->Add(offset2, 0, wxALL, 5);

	checkbox2 = new wxCheckBox(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer12->Add(checkbox2, 0, wxALL | wxEXPAND, 5);


	bSizer21->Add(bSizer12, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer(wxHORIZONTAL);

	color3 = new wxStaticText(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(30, -1), 0 | wxBORDER_SIMPLE);
	color3->Wrap(-1);
	bSizer13->Add(color3, 0, wxALL, 5);

	text3 = new wxTextCtrl(m_panel1, wxID_ANY, wxT("000000-000000"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	bSizer13->Add(text3, 1, wxALL, 5);

	offset3 = new wxTextCtrl(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(60, -1), wxTE_PROCESS_ENTER);
#ifdef __WXGTK__
	if (!offset3->HasFlag(wxTE_MULTILINE))
	{
		offset3->SetMaxLength(6);
	}
#else
	offset3->SetMaxLength(6);
#endif
	bSizer13->Add(offset3, 0, wxALL, 5);

	checkbox3 = new wxCheckBox(m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer13->Add(checkbox3, 0, wxALL, 5);


	bSizer21->Add(bSizer13, 1, wxEXPAND, 5);


	m_panel1->SetSizer(bSizer21);
	m_panel1->Layout();
	bSizer21->Fit(m_panel1);
	bSizer2->Add(m_panel1, 1, wxEXPAND | wxALL, 5);

	m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer(wxVERTICAL);

	reverse_color = new wxCheckBox(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	reverse_color->SetToolTip(wxT("Reverse"));

	bSizer25->Add(reverse_color, 0, wxALL, 5);

	c2 = new wxCheckBox(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer25->Add(c2, 0, wxALL, 5);

	c3 = new wxCheckBox(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer25->Add(c3, 0, wxALL, 5);


	bSizer24->Add(bSizer25, 0, wxEXPAND, 5);

	grey_zone = new wxStaticText(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
	grey_zone->Wrap(-1);
	grey_zone->SetMinSize(wxSize(-1, 150));

	bSizer24->Add(grey_zone, 1, wxALL, 5);

	wxBoxSizer* bSizer261;
	bSizer261 = new wxBoxSizer(wxVERTICAL);

	gen_fonts = new wxButton(m_panel2, wxID_ANY, wxT("GB"), wxDefaultPosition, wxSize(30, 30), 0);
	gen_fonts->SetToolTip(wxT("Generates Pattern"));

	bSizer261->Add(gen_fonts, 1, wxALL | wxEXPAND, 1);

	gen_fonts1 = new wxButton(m_panel2, wxID_ANY, wxT("GS"), wxDefaultPosition, wxSize(30, 30), 0);
	gen_fonts1->SetToolTip(wxT("Generates Pattern"));

	bSizer261->Add(gen_fonts1, 1, wxALL | wxEXPAND, 1);

	ocr = new wxButton(m_panel2, wxID_ANY, wxT("O"), wxDefaultPosition, wxSize(30, 30), 0);
	ocr->SetToolTip(wxT("OCR"));

	bSizer261->Add(ocr, 0, wxALL, 1);


	bSizer24->Add(bSizer261, 0, 0, 1);


	bSizer15->Add(bSizer24, 1, wxEXPAND, 5);


	bSizer111->Add(bSizer15, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText15 = new wxStaticText(m_panel2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText15->Wrap(-1);
	bSizer16->Add(m_staticText15, 0, wxALL | wxEXPAND, 5);


	bSizer16->Add(0, 0, 1, wxEXPAND, 5);


	bSizer111->Add(bSizer16, 0, wxEXPAND, 5);


	bSizer26->Add(bSizer111, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer(wxVERTICAL);


	bSizer121->Add(bSizer131, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer(wxVERTICAL);

	identified_fonts = new wxStaticText(m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	identified_fonts->Wrap(-1);
	bSizer14->Add(identified_fonts, 1, wxALL | wxEXPAND, 5);


	bSizer121->Add(bSizer14, 1, wxEXPAND, 5);


	bSizer26->Add(bSizer121, 1, wxEXPAND, 5);


	m_panel2->SetSizer(bSizer26);
	m_panel2->Layout();
	bSizer26->Fit(m_panel2);
	bSizer2->Add(m_panel2, 1, wxEXPAND | wxALL, 5);

	m_panel3 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer(wxVERTICAL);

	m_staticText16 = new wxStaticText(m_panel3, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText16->Wrap(-1);
	bSizer18->Add(m_staticText16, 0, wxALL, 5);


	bSizer17->Add(bSizer18, 0, 0, 5);

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer(wxHORIZONTAL);

	m_staticText18 = new wxStaticText(m_panel3, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText18->Wrap(-1);
	bSizer20->Add(m_staticText18, 0, wxALL, 5);

	test_input = new wxTextCtrl(m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer20->Add(test_input, 0, wxALL, 5);

	test = new wxButton(m_panel3, wxID_ANY, wxT("Test"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer20->Add(test, 0, wxALL, 5);


	bSizer19->Add(bSizer20, 0, 0, 5);

	wxBoxSizer* bSizer201;
	bSizer201 = new wxBoxSizer(wxHORIZONTAL);

	generate_fonts = new wxButton(m_panel3, wxID_ANY, wxT("GenFonts"), wxDefaultPosition, wxDefaultSize, 0);
	generate_fonts->SetToolTip(wxT("Generat fonts"));

	bSizer201->Add(generate_fonts, 0, wxALL, 5);

	read_fonts = new wxButton(m_panel3, wxID_ANY, wxT("ReadFonts"), wxDefaultPosition, wxDefaultSize, 0);
	read_fonts->SetToolTip(wxT("Read fonts"));

	bSizer201->Add(read_fonts, 0, wxALL, 5);

	write_fonts = new wxButton(m_panel3, wxID_ANY, wxT("SaveFonts"), wxDefaultPosition, wxDefaultSize, 0);
	write_fonts->SetToolTip(wxT("Save fonts"));

	bSizer201->Add(write_fonts, 0, wxALL, 5);


	bSizer19->Add(bSizer201, 0, wxEXPAND, 5);

	wxBoxSizer* bSizer211;
	bSizer211 = new wxBoxSizer(wxVERTICAL);

	font_list = new wxListBox(m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 | wxVSCROLL);
	bSizer211->Add(font_list, 1, wxALL | wxEXPAND, 5);


	bSizer19->Add(bSizer211, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer(wxVERTICAL);

	pattern_matrix = new wxStaticText(m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1, -1), 0 | wxBORDER_SIMPLE);
	pattern_matrix->Wrap(-1);
	pattern_matrix->SetMinSize(wxSize(-1, 150));

	bSizer23->Add(pattern_matrix, 1, wxALL | wxEXPAND, 5);


	bSizer19->Add(bSizer23, 0, wxEXPAND, 5);


	bSizer17->Add(bSizer19, 1, wxEXPAND, 5);


	m_panel3->SetSizer(bSizer17);
	m_panel3->Layout();
	bSizer17->Fit(m_panel3);
	bSizer2->Add(m_panel3, 1, wxEXPAND | wxALL, 5);


	this->SetSizer(bSizer2);
	this->Layout();

	this->Centre(wxBOTH);


	ConstructorInit();
}

void PicFontToolDialog::ConstructorInit()
{
	hwnd_bound = nullptr;

	color_pics.push_back(color0);
	color_pics.push_back(color1);
	color_pics.push_back(color2);
	color_pics.push_back(color3);
	color_texts.push_back(text0);
	color_texts.push_back(text1);
	color_texts.push_back(text2);
	color_texts.push_back(text3);
	color_offsets.push_back(offset0);
	color_offsets.push_back(offset1);
	color_offsets.push_back(offset2);
	color_offsets.push_back(offset3);
	color_checkboxes.push_back(checkbox0);
	color_checkboxes.push_back(checkbox1);
	color_checkboxes.push_back(checkbox2);
	color_checkboxes.push_back(checkbox3);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(PicFontToolDialog::OnInit));
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(PicFontToolDialog::OnClose));
	screenshot->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnScreenshot), NULL, this);
	save_pic->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnSavePic), NULL, this);
	test->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnTest), NULL, this);
	font_list->Connect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(PicFontToolDialog::DClickCha), NULL, this);
	choose_wnd->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::ChooseWnd), NULL, this);
	bind_wnd->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnBindWnd), NULL, this);
	reverse_color->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnReverseColor), NULL, this);
	ocr->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnOCR), NULL, this);

	generate_fonts->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnGenerateFonts), NULL, this);
	read_fonts->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnReadFonts), NULL, this);
	write_fonts->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnSaveFonts), NULL, this);

	for (auto x : color_pics)
		x->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(PicFontToolDialog::OnColorClick), NULL, this);
	for (auto x : color_offsets)
		x->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(PicFontToolDialog::OnColorOffsetChange), NULL, this);
	for (auto x : color_checkboxes)
		x->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnColorCheck), NULL, this);

	wxFont font(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	font_list->SetFont(font);
	// myWindow->SetFont(myFont);
}

PicFontToolDialog::~PicFontToolDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(PicFontToolDialog::OnInit));
	this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(PicFontToolDialog::OnClose));
	screenshot->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnScreenshot), NULL, this);
	save_pic->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnSavePic), NULL, this);
	test->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnTest), NULL, this);
	choose_wnd->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::ChooseWnd), NULL, this);
	bind_wnd->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnBindWnd), NULL, this);
	reverse_color->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnReverseColor), NULL, this);
	ocr->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnOCR), NULL, this);

	generate_fonts->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnGenerateFonts), NULL, this);
	read_fonts->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnReadFonts), NULL, this);
	write_fonts->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnSaveFonts), NULL, this);

	for (auto x : color_pics)
		x->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(PicFontToolDialog::OnColorClick), NULL, this);
	for (auto x : color_offsets)
		x->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(PicFontToolDialog::OnColorOffsetChange), NULL, this);
	for (auto x : color_checkboxes)
		x->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(PicFontToolDialog::OnColorCheck), NULL, this);
}

void PicFontToolDialog::OnInit(wxInitDialogEvent& event)
{
	config = new wxFileConfig("PicFontTool", "Allen", "localconf.cfg", "", wxCONFIG_USE_LOCAL_FILE);

	for (size_t i = 0; i < color_texts.size(); ++i) {
		wxString str;
		str.Printf("%s%d", "color_texts", i);
		if (config->HasEntry(str)) {
			color_texts[i]->SetLabelText(config->Read(str));
			str.Printf("%s%d", "color_offsets", i);
			color_offsets[i]->SetLabelText(config->Read(str));
		}
	}

	for (auto x : color_pics)
		x->SetBackgroundColour("black");
}

void PicFontToolDialog::OnClose(wxCloseEvent& event)
{
	for (size_t i = 0; i < color_texts.size(); ++i) {
		wxString str;
		str.Printf("%s%d", "color_texts", i);
		config->Write(str, color_texts[i]->GetLineText(0));
		str.Printf("%s%d", "color_offsets", i);
		config->Write(str, color_offsets[i]->GetLineText(0));
	}
	
	delete config;
	wxApp::GetInstance()->ExitMainLoop();
}

void PicFontToolDialog::ChooseWnd(wxCommandEvent& event)
{
	wxString label = choose_wnd->GetLabel();

	for (auto i = 0; i < 3; ++i) {
		Sleep(500);

		wxPoint pt = wxGetMousePosition();
		POINT wpt = { pt.x, pt.y };
		HWND hwnd = ::WindowFromPoint(wpt);
		hwnd = GetAncestor(hwnd, GA_ROOT);
		WINDOWINFO wi;
		GetWindowInfo(hwnd, &wi);
		wxString title;

		wchar_t text[MAX_PATH] = {};
		GetWindowText(hwnd, text, MAX_PATH);
		
		title.Printf("%s (l:%d, t:%d, r:%d, b:%d)",
			text,
			wi.rcClient.left, wi.rcClient.top, wi.rcClient.right, wi.rcClient.bottom);

		wxScreenDC screendc;
		screendc.Clear();
		screendc.SetPen(wxPen("green", 3));
		screendc.SetBrush(*wxTRANSPARENT_BRUSH);
		screendc.DrawRectangle(wi.rcClient.left, wi.rcClient.top,
			wi.rcClient.right - wi.rcClient.left,
			wi.rcClient.bottom - wi.rcClient.top);

		SetLabel(title);

		hwnd_pointed = hwnd;
	}
}

void PicFontToolDialog::OnBindWnd(wxCommandEvent& event)
{
	hwnd_bound = hwnd_bound ? nullptr : hwnd_pointed;
	if (hwnd_bound) {

		WINDOWINFO wi;
		GetWindowInfo(hwnd_bound, &wi);

		wxString tooltip;
		tooltip.Printf("Bind Window\nhwnd:%08X(%d)\nClient rect:(%d, %d, %d, %d)",
			(int)hwnd_bound, (int)hwnd_bound,
			wi.rcClient.left, wi.rcClient.top, wi.rcClient.right, wi.rcClient.bottom);
		bind_wnd->SetToolTip(tooltip);
		
		wxScreenDC screendc;
		screendc.SetPen(wxPen("red", 3));
		screendc.SetBrush(*wxTRANSPARENT_BRUSH);
		screendc.DrawRectangle(wi.rcClient.left, wi.rcClient.top,
			wi.rcClient.right - wi.rcClient.left,
			wi.rcClient.bottom - wi.rcClient.top);
	}
	else {
		bind_wnd->SetToolTip("Bind Window\n"
			"Unbound\n");
	}
}

std::vector<std::pair<int, int>> PicFontToolDialog::GetCheckedColors()
{
	std::vector<std::pair<int, int>> colors;
	for (size_t i = 0; i < color_checkboxes.size(); ++i) {
		if (color_checkboxes[i]->IsChecked()) {
			
			wxString str = color_texts[i]->GetLineText(0);
			wxString color_str = str.Mid(0, 6);
			wxString offset_str = str.Mid(7, 6);
			long color, offset;
			color_str.ToLong(&color, 16);
			offset_str.ToLong(&offset, 16);

			colors.push_back(std::make_pair(color, offset));
		}
	}

	return colors;
}

HBITMAP ConvertRGBBmptoMonochrome(HBITMAP hbitmap, void* pbits)
{
	DIBSECTION mc_ds{};
	wxMemoryDC dc;
	wxBitmap mc_bmp(33, 33, -1);
	dc.SelectObject(mc_bmp);
	wxRect rect(0, 0, 33, 33);
	wxBitmap bmp = dc.GetAsBitmap(&rect);
	if (::GetObject(bmp.GetHandle(), sizeof(DIBSECTION), &mc_ds) == sizeof(DIBSECTION) &&
		mc_ds.dsBm.bmBits) {
		int a = 0;
	}

	return 0;
}

void PicFontToolDialog::RefreshGreyZone()
{
	// Bmp is not ready
	if (!origin_bmp.IsOk())
		return;

	std::vector<std::pair<int, int>> colors = GetCheckedColors();
	if (!colors.size()) {
		wxClientDC dc(grey_zone);
		dc.Clear();
		return;
	}
		
	bool reverse = reverse_color->IsChecked() ? true : false;
	WXHANDLE hbitmap = origin_bmp.GetHandle();
	DIBSECTION ds;
	if (::GetObject(hbitmap, sizeof(DIBSECTION), &ds) == sizeof(DIBSECTION) &&
		ds.dsBm.bmBits) {

		int size = ds.dsBm.bmWidthBytes * ds.dsBm.bmHeight;
		int* pbuf = new int[size / 4];
		memcpy_s(pbuf, size, ds.dsBm.bmBits, size);
		
		int* ptr = (int *)pbuf;
		int num = 0;
		while (ptr) {
			int color = *ptr & 0xffffff;

			bool in = false;
			for (auto& x : colors) {
				if (color < x.first + x.second &&
					color > x.first - x.second) {
					in = true; break;
				}
			}

			// Within checked colors
			if (!reverse) {
				// Translate to white and black
				if (in) *ptr = 0xff000000;
				else *ptr = 0xffffffff;
			}
			else {
				if (in) *ptr = 0xffffffff;
				else *ptr = 0xff000000;
			}

			++ptr;
			num += 4;

			if (num == ds.dsBm.bmWidthBytes * ds.dsBm.bmHeight)
				break;
		}

		BITMAPINFO bmp_info = {};
		bmp_info.bmiHeader = ds.dsBmih;

		wxClientDC dc(grey_zone);

		wxMemoryDC mem_dc(&dc);
		HBITMAP newbitmap = wxDIB::ConvertToBitmap(&bmp_info, dc.GetHDC(), pbuf);
		auto ret = ::SelectObject(mem_dc.GetHDC(), newbitmap);

		/*wxDIB dib(newbitmap);
		auto img = dib.ConvertToImage();
		wxBitmap bm(img);

		wxClientDC dc(grey_zone);
		dc.SetBackground(*wxWHITE_BRUSH);
		dc.Clear();
		dc.DrawBitmap(bm, 0, 0);*/

		DeleteObject(newbitmap);
		delete[] pbuf;

		int width = ds.dsBm.bmWidth;
		int height = ds.dsBm.bmHeight;
		int scale = 1;
		dc.SetBackground(*wxWHITE_BRUSH);
		dc.Clear();
		dc.StretchBlit(0, 0, width * scale, height * scale,
			&mem_dc,
			0, 0, width, height, wxCOPY);
	}
}

void PicFontToolDialog::OnScreenshot(wxCommandEvent& event)
{
	ScreenshotDialog screenshot_dlg(this);
	screenshot_dlg.Move(wxPoint(0, 0));
	screenshot_dlg.SetFocus();
	int ret = screenshot_dlg.ShowModal();
	if (ret == wxID_OK) {
		wxBitmap bitmap = screenshot_dlg.GetClippedBitmap();

		bool ok = bitmap.IsOk();
		origin_bmp = bitmap;

		wxClientDC dc(m_staticTextScreenCopy);
		dc.Clear();
		dc.DrawBitmap(bitmap, 0, 0);

		if (hwnd_bound) {
			wxRect clip_rect = screenshot_dlg.GetClippedRect();

			WINDOWINFO wi;
			GetWindowInfo(hwnd_bound, &wi);
			clip_rect.Offset(-wi.rcClient.left, -wi.rcClient.top);

			wxString label;
			label.Printf("C:(%d, %d, %d, %d)",
				clip_rect.GetLeft(),
				clip_rect.GetTop(),
				clip_rect.GetRight(),
				clip_rect.GetBottom());
			des_static->SetLabel(label);
		}
	}
}

void PicFontToolDialog::OnSavePic(wxCommandEvent& event)
{
	if (origin_bmp.IsOk()) {

		wxFileDialog  save_dlg(this,
			_("Save bmp"),
			"", "tmp.bmp", "",
			wxFD_SAVE);

		if (save_dlg.ShowModal() == wxID_CANCEL)
			return;

		wxString path = save_dlg.GetPath();
		wxFileName file_name(path);

		int i = 1;
		while (file_name.FileExists()) {
			wxString name = file_name.GetName();
			name += to_string(1);
			file_name.SetName(name);
		}

		origin_bmp.SaveFile(file_name.GetFullPath(), wxBITMAP_TYPE_BMP);
	}
}

void PicFontToolDialog::OnReverseColor(wxCommandEvent& event)
{
	RefreshGreyZone();
}

void PicFontToolDialog::OnColorClick(wxMouseEvent& event)
{
	wxObject* obj = event.GetEventObject();
	wxStaticText* text = dynamic_cast<wxStaticText*>(obj);
	if (text) {

		PickColorDialog pick_dlg(this);
		pick_dlg.Move(wxPoint(0, 0));
		pick_dlg.SetFocus();
		int ret = pick_dlg.ShowModal();
		if (ret != wxID_OK)
			return;

		for (size_t i = 0; i < color_pics.size(); ++i) {
			if (color_pics[i] == text) {
				wxColor color = pick_dlg.GetPickedColor();
				auto color_num = color.GetRGB();
				color_pics[i]->SetBackgroundColour(color_num);
				color_pics[i]->Refresh();
				RefreshColorText(i);
				break;
			}
		}
	}
}

void PicFontToolDialog::RefreshColorText(int i)
{
	wxString label = color_offsets[i]->GetLineText(0);
	unsigned long offset = 0xffffffff;
	label.ToULong(&offset, 16);
	if (offset > 0xffffff) {
		offset = 0;
	}

	wxColor color = color_pics[i]->GetBackgroundColour();
	auto color_num = color.GetRGB();
	wxString color_str;
	color_str.Printf("%06X-%06X", color_num, offset);
	color_texts[i]->SetLabelText(color_str);
}

void PicFontToolDialog::OnColorOffsetChange(wxCommandEvent& event)
{
	wxObject* obj = event.GetEventObject();
	wxTextCtrl* text = dynamic_cast<wxTextCtrl*>(obj);
	if (text) {
		for (size_t i = 0; i < color_offsets.size(); ++i) {
			if (color_offsets[i] == text) {
				RefreshColorText(i);
				break;
			}
		}
	}

	RefreshGreyZone();
}

void PicFontToolDialog::OnColorCheck(wxCommandEvent& event)
{
	wxObject* obj = event.GetEventObject();
	wxCheckBox* checkbox = dynamic_cast<wxCheckBox*>(obj);
	if (checkbox) {
		for (size_t i = 0; i < color_checkboxes.size(); ++i) {
			if (color_checkboxes[i] == checkbox) {
				RefreshColorText(i);
				break;
			}
		}
	}
	
	RefreshGreyZone();
}

void PicFontToolDialog::DClickCha(wxCommandEvent& event)
{
	int index = event.GetSelection();
	wxString name = font_list->GetString(index);
	name = name[0];
	CharItem item = store.SearchName(name.ToStdString());
	if (item) {
		auto pair = item.GetWidthHeight();

		wxMemoryDC mem_dc;
		wxBitmap mem_bitmap(pair.first, pair.second, -1);
		mem_dc.SelectObject(mem_bitmap);

		BITMAPINFO bmp_info = {};
		bmp_info.bmiHeader.biSize = sizeof(bmp_info.bmiHeader);
		bmp_info.bmiHeader.biBitCount = 24;
		bmp_info.bmiHeader.biCompression = BI_RGB;
		bmp_info.bmiHeader.biWidth = pair.first;
		bmp_info.bmiHeader.biHeight = pair.second; // Up-bottom bitmap
		bmp_info.bmiHeader.biPlanes = 1;
		bmp_info.bmiHeader.biClrUsed = 0;

		HBITMAP hbitmap = wxDIB::ConvertToBitmap(&bmp_info, mem_dc.GetHDC(),
			(void *)item.GetBits().data());
		::SelectObject(mem_dc.GetHDC(), hbitmap);
		
		int scale = 5;
		wxClientDC dc(pattern_matrix);
		dc.Clear();
		dc.StretchBlit(0, 0, pair.first * scale, pair.second * scale,
			&mem_dc,
			0, 0, pair.first, pair.second);

		// Vertical line
		for (int i = 0; i <= pair.first; ++i) {
			dc.DrawLine(i * scale, 0, i * scale, pair.second * scale);
		}

		// Horizental line
		for (int i = 0; i <= pair.second; ++i) {
			dc.DrawLine(0, i * scale, pair.first * scale, i * scale);
		}
		
		DeleteObject(hbitmap);
	}
}

void PicFontToolDialog::RefreshStore()
{
	for (auto& x : store.GetChas()) {
		wxString trans;
		CharItem item = const_cast<CharItem&>(x);
		trans.Printf("%s|%d:%d", item.GetPatternName().c_str(),
			item.GetWidthHeight().first, item.GetWidthHeight().second);
		font_list->Append(trans);
	}
}

char* PicFontToolDialog::ClipZone(int width, int height, const char* pbuf)
{
	return nullptr;
}

void print_bits_bitmap(int weight, int height, vector<char> cha)
{
	int cha_row_byte_count = ((weight * 24 + 31) & ~31) >> 3;

	std::string str;
	char* p = nullptr;
	for (int j = 0; j < height; ++j) {
		p = cha.data() + cha_row_byte_count * j;
		for (int i = 0; i < weight; ++i) {
			unsigned char c = *(p);
			unsigned char d = *(p + 1);
			unsigned char e = *(p + 2);
			char buf[10];
			sprintf(buf, "%02X%02X%02X ", c, d, e);
			str += buf;

			p = p + 3;
		}

		str += '\n';
	}
	wxLogDebug("%s", str.c_str());
}

void print_bits_matrix(int weight, int height, vector<char> cha)
{
	int cha_row_byte_count = ((weight * 24 + 31) & ~31) >> 3;

	std::string str;
	char* p = nullptr;
	for (int j = 0; j < height; ++j) {
		p = cha.data() + weight * j * 3;
		for (int i = 0; i < weight; ++i) {
			unsigned char c = *(p);
			unsigned char d = *(p + 1);
			unsigned char e = *(p + 2);
			char buf[10];
			sprintf(buf, "%02X%02X%02X ", c, d, e);
			str += buf;

			p = p + 3;
		}

		str += '\n';
	}
	wxLogDebug("%s", str.c_str());
}


void PicFontToolDialog::GenerateSystemFonts(wxString fonts, wxString font_interface, int font_size)
{
	wxFont font(font_size, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL,
		false, font_interface);

	// Override anti-aliasing quality
	// Origin des "1; 10; -17; 0; 0; 0; 400; 0; 0; 0; 1; 0; 0; 2; 32; 宋体"
	// the 2; is the text quality parameter
	/*wxString des = font.GetNativeFontInfoDesc();
	auto last_pos1 = des.find_last_of(';');
	if (last_pos1 != wxNOT_FOUND) {
		auto last_pos2 = des.find_last_of(';', last_pos1 - 1);
		if (last_pos2 != wxNOT_FOUND) {
			auto last_pos3 = des.find_last_of(';', last_pos2 - 1);
			if (last_pos3 != wxNOT_FOUND) {
				des.replace(last_pos3, last_pos2 - last_pos3, ";3");
			}
		}
	}*/

	/*font.SetNativeFontInfo(des);
	if (!font.IsOk())
		return;*/

	wxMemoryDC mem_dc;
	wxBitmap mem_bitmap(100, 100, -1);
	mem_dc.SelectObject(mem_bitmap);
	mem_dc.SetFont(font);
	
	HDC hdc = mem_dc.GetHDC();
	HBITMAP hbitmap = (HBITMAP)mem_bitmap.GetHandle();

	for (auto c : fonts) {
		wchar_t x = c;
		mem_dc.Clear();
		mem_dc.DrawText(x, wxPoint(0, 0));

		wxSize cha_size = mem_dc.GetTextExtent(x);
		int bmp_width = cha_size.GetWidth();
		int bmp_height = cha_size.GetHeight();
		BITMAPINFO bmp_info = {};
		bmp_info.bmiHeader.biSize = sizeof(bmp_info.bmiHeader);
		bmp_info.bmiHeader.biBitCount = 24;
		bmp_info.bmiHeader.biCompression = BI_RGB;
		bmp_info.bmiHeader.biWidth = bmp_width;
		bmp_info.bmiHeader.biHeight = bmp_height; // Up-bottom bitmap
		bmp_info.bmiHeader.biPlanes = 1;
		bmp_info.bmiHeader.biClrUsed = 0;

		int row_byte_count = ((bmp_width * bmp_info.bmiHeader.biBitCount + 31) & ~31) >> 3;
		int byte_count = bmp_height * row_byte_count;
		char* pbuf = new char[byte_count] {0};
		int n = GetDIBits(hdc, (HBITMAP)hbitmap, 0, bmp_height, pbuf, &bmp_info, DIB_RGB_COLORS);

		// Reclip the bitmap remove space on vertical direction

		int area_top = 0;
		int area_bottom = 0;

		for (int i = 0; i < bmp_height; ++i) {
			char* ptmp = nullptr;
			ptmp = pbuf + i * row_byte_count;

			bool contain_spot = false;
			for (int j = 0; j < bmp_width; ++j) {
				int* pint = (int*)(ptmp + 3 * j);
				if (!(*pint & 0xffffff))
					contain_spot = true;
			}

			if (contain_spot && !area_bottom) {
				area_bottom = i + 1;
			}
			else if (contain_spot) {
				area_top = i + 1;
			}
		}
	
		// Since the bitmap is a bottom-up DIB and its origin is the lower-left corner
		// the bottom position is below top position
		int v_cell_span = -(area_bottom - area_top) + 1;

		CharItem item;
		wxString name;
		name = x;
		item.SetPatternName(name.ToStdString());
		item.SetChar(x);
		item.SetWidthHeight(bmp_width, v_cell_span);
		vector<char> bits;
		bits.resize(v_cell_span * row_byte_count);
		memcpy_s(bits.data(),
			v_cell_span * row_byte_count,
			pbuf + (area_bottom - 1) * row_byte_count,
			v_cell_span * row_byte_count);
		item.SetBits(bits);

		//print_bits_bitmap(bmp_width, v_cell_span, bits);
		
		store.AddItem(item);
		delete[] pbuf;
	}

	RefreshStore();
}

void PicFontToolDialog::OnOCR(wxCommandEvent& event)
{
	// Get bmp size
	if (!origin_bmp.IsOk())
		return;

	using namespace std::chrono;
	steady_clock::time_point tp1 = steady_clock::now();

	wxClientDC dc(grey_zone);
	int zone_width = origin_bmp.GetSize().x;
	int zone_height = origin_bmp.GetSize().y;
	wxBitmap zone(zone_width, zone_height, -1);
	wxMemoryDC mem_dc(zone);

	// Copy bits into memory dc
	bool ret = mem_dc.Blit(0, //Copy to this X coordinate
		0, //Copy to this Y coordinate
		zone_width, //Copy this width
		zone_height, //Copy this height
		&dc, //From where do we copy?
		0, //What's the X offset in the original DC?
		0  //What's the Y offset in the original DC?
	);

	// Extract zone bit matrix
	BITMAPINFO bmp_info = {};
	bmp_info.bmiHeader.biSize = sizeof(bmp_info.bmiHeader);
	bmp_info.bmiHeader.biBitCount = 24;
	bmp_info.bmiHeader.biCompression = BI_RGB;
	bmp_info.bmiHeader.biWidth = zone_width;
	bmp_info.bmiHeader.biHeight = zone_height; // Up-bottom bitmap
	bmp_info.bmiHeader.biPlanes = 1;
	bmp_info.bmiHeader.biClrUsed = 0;

	int row_byte_count = ((bmp_info.bmiHeader.biWidth * bmp_info.bmiHeader.biBitCount + 31) & ~31) >> 3;
	int byte_count = bmp_info.bmiHeader.biHeight * row_byte_count;
	char* pbuf = new char[byte_count] {0};
	HDC hdc = mem_dc.GetHDC();
	HBITMAP hbitmap = (HBITMAP)zone.GetHandle();
	int n = GetDIBits(hdc, (HBITMAP)hbitmap, 0, bmp_info.bmiHeader.biHeight, pbuf, &bmp_info, DIB_RGB_COLORS);

	// Define a three dimensional array
	std::vector<std::vector<char>> zone_matrix;
	char* ptmp = pbuf;
	for (int j = 0; j < zone_height; ++j) {
		std::vector<char> row(zone_width * 3);
		ptmp = pbuf + j * row_byte_count;
		memcpy_s(row.data(), zone_width * 3, ptmp, zone_width * 3);
		zone_matrix.push_back(row);
	}

	std::vector<wchar_t> detected_chas;

	// For each dimension in fonts store, computer matrix hashes,
	// and find text.
	auto dimensions = store.GetDimensions();
	for (auto d : dimensions) {
		int cha_width = d.first;
		int cha_height = d.second;

		int cha_row_byte_count = ((cha_width * bmp_info.bmiHeader.biBitCount + 31) & ~31) >> 3;
		int byte_append_num = cha_row_byte_count - cha_width * 3;

		std::vector<std::vector<char>> chas;
		for (int j = 0; j < zone_height - cha_height + 1; ++j) {
			for (int i = 0; i < zone_width - cha_width + 1; ++i) {
				
				// Construct block array
				std::vector<char> cha(cha_row_byte_count * cha_height, 0);
				
				char* ptmp2 = nullptr;
				for (int y = 0; y < cha_height; ++y) {
					ptmp2 = &zone_matrix[j + y][i * 3];
					cha.resize(cha_row_byte_count * cha_height);
					memcpy_s(cha.data() + cha_row_byte_count * y, cha_width * 3, ptmp2, cha_width * 3);
				}

				chas.push_back(cha);
			}
		}


		CharItem item;
		for (auto& x : chas) {
			item.SetBits(x);
			CharItem* pout = nullptr;
			if (store.DetectFont(item, &pout)) {
				detected_chas.push_back(pout->GetChar());
			}
		}
	}

	delete[] pbuf;

	wxString show;
	for (auto x : detected_chas) {
		show += x;
	}

	steady_clock::time_point tp2 = steady_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(tp2 - tp1);
	show += "\n";
	show += std::to_string(time_span.count());
	identified_fonts->SetLabelText(show);
}

void PicFontToolDialog::OnGenerateFonts(wxCommandEvent& event)
{
	wxString input = test_input->GetLineText(0);
	if (input.empty()) {
		input = "10";
	}

	GenerateSystemFonts("我在测试", "宋体", 10);
}

void PicFontToolDialog::OnReadFonts(wxCommandEvent& event)
{
	wxFileDialog file_dialog(this, _("Read fonts in"), "", "",
		"fonts store files (*.fts)|*.fts", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
	if (file_dialog.ShowModal() == wxID_OK) {
		store.Clear();
		store.ReadFile(file_dialog.GetPath());
		RefreshStore();
	}
}

void PicFontToolDialog::OnSaveFonts(wxCommandEvent& event)
{
	if (store.IsEmpty()) {
		wxMessageBox("Fonts store is empty", "Error");
		return;
	}

	wxFileDialog file_dialog(this, _("Write fonts out"), "", "",
			"fonts store files (*.fts)|*.fts", wxFD_OPEN);

	if (file_dialog.ShowModal() == wxID_OK) {
		store.SaveFile(file_dialog.GetPath());
	}
}

void PicFontToolDialog::OnTest(wxCommandEvent& event)
{
	
}