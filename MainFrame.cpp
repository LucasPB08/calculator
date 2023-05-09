
#include <wx/wx.h>
#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(600, 500)){
    this->mainPanel = new wxPanel(this, wxID_ANY);
    CreateStatusBar();
    createButtons();
}

void MainFrame::createButtons() {
    int x = 100;
    int y = 100;
    int size = 70;
    for(int i = 0; i < 9; i++){
        if(i % 3 == 0 && i != 0) {
            y += size;
            x = 100;
        }
        wxString title = wxString::Format(wxT("%i"), i+1);
        wxButton* button = new wxButton(mainPanel, wxID_ANY, title , wxPoint(x,y), wxSize(size, size));
        button -> Bind(wxEVT_BUTTON, &MainFrame::handleButtonClick, this);
        x += size;
    }
}

void MainFrame::handleButtonClick(wxCommandEvent &evt) {
    wxButton* button = (wxButton*) evt.GetEventObject();
    wxString label = button->GetLabel();
    long val;
    label.ToLong(&val);
    wxLogStatus("%i", val);
}

