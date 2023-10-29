#pragma once
#include <wx/wx.h>


class RegisterPage : public wxFrame
{
public:
	RegisterPage(const wxString& title);
private:
	void BackButtonClick(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};

