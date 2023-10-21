#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr,wxID_ANY,title) {
	wxPanel* panel = new wxPanel(this);
	
	wxButton* loginBtn = new wxButton(panel,wxID_ANY,"Login", wxPoint(200, 250), wxSize(150, 50));
	loginBtn->SetBackgroundColour(wxColor("#BF7540"));
	wxFont myFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	loginBtn->SetFont(wxFont(myFont));
	
	wxButton* registerBtn = new wxButton(panel,wxID_ANY,"Register", wxPoint(400, 250), wxSize(150, 50));
	registerBtn->SetBackgroundColour(wxColor("#4A7A76"));
	registerBtn->SetFont(wxFont(myFont));
	
	wxPNGHandler* handler = new wxPNGHandler;
	wxImage::AddHandler(handler);
	wxStaticBitmap* logo = new wxStaticBitmap(panel, wxID_ANY, wxBitmap("logo.png", wxBITMAP_TYPE_PNG), wxPoint(270, 50), wxSize(200,200));
	
}