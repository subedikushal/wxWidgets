#include "button.h"

Button::Button (const wxString& title):wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 800))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"), wxPoint(0, 0));
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(Button::OnQuit));

    // button->SetFocus();
    Center();
}

void Button::OnQuit(wxCommandEvent & WXUNUSED(event)){
    Close(true);
}