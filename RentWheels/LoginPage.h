#pragma once
#include <wx/wx.h>


class LoginPage : public wxFrame
{
public:
	LoginPage(const wxString& title);
private:
	void BackButtonClick(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};

