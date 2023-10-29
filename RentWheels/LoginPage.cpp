#include "LoginPage.h"
#include "MainFrame.h"
#include <wx/wx.h>

enum ID {
	LOGIN_BTN = 1,
	BACK_BTN = 2
};

wxBEGIN_EVENT_TABLE(LoginPage, wxFrame)
	EVT_BUTTON(BACK_BTN, LoginPage::BackButtonClick)
wxEND_EVENT_TABLE()

LoginPage::LoginPage(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {

	wxPanel* panel = new wxPanel(this);
	wxFont displayFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	wxFont fieldFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	wxFont buttonFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	
	wxStaticText* loginPageTextDisplay = new wxStaticText(panel,wxID_ANY, "Log In", wxPoint(50, 20));
	loginPageTextDisplay->SetFont(displayFont);

	wxButton* backBtn = new wxButton(panel, BACK_BTN, "<-", wxPoint(10, 20), wxSize(30, 30));
	backBtn->SetBackgroundColour(wxColor("#fc0730"));

	wxStaticText* UsernameTextDisplay = new wxStaticText(panel, wxID_ANY, "Username", wxPoint(200, 70));
	wxTextCtrl* username = new wxTextCtrl(panel, wxID_ANY,"",wxPoint(200,100),wxSize(400,30));
	UsernameTextDisplay->SetFont(fieldFont);
	username->SetFont(fieldFont);


	wxStaticText* PasswordTextDisplay = new wxStaticText(panel, wxID_ANY, "Password", wxPoint(200, 140));
	wxTextCtrl* password = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(200, 170), wxSize(400, 30), wxTE_PASSWORD);
	PasswordTextDisplay->SetFont(fieldFont);
	password->SetFont(fieldFont);

	wxButton* loginBtn = new wxButton(panel, LOGIN_BTN, "Login", wxPoint(250, 230), wxSize(300, 50));
	loginBtn->SetBackgroundColour(wxColor("#BF7540"));
	loginBtn->SetFont(wxFont(buttonFont));

}

void LoginPage::BackButtonClick(wxCommandEvent& event) {
	MainFrame* mainFrame = new MainFrame("Rent Wheels");
	mainFrame->SetClientSize(800, 400);
	mainFrame->EnableMaximizeButton(false);
	mainFrame->Center();
	mainFrame->Show();

	this->Close();
}
