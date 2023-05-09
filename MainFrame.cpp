
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
    evt.GetClientObject();
}

//void MainFrame::createButtons() {
//    wxButton* button1 = new wxButton(mainPanel, wxID_ANY, "1", wxPoint(100,100), wxSize(40,40));
//    wxButton* button2 = new wxButton(mainPanel, wxID_ANY, "2", wxPoint(140, 100));
//    wxButton* button3 = new wxButton(mainPanel, wxID_ANY, "3");
//    wxButton* button4 = new wxButton(mainPanel, wxID_ANY, "4");
//    wxButton* button5 = new wxButton(mainPanel, wxID_ANY, "5");
//    wxButton* button6 = new wxButton(mainPanel, wxID_ANY, "6");
//    wxButton* button7 = new wxButton(mainPanel, wxID_ANY, "7");
//    wxButton* button8 = new wxButton(mainPanel, wxID_ANY, "8");
//    wxButton* button9 = new wxButton(mainPanel, wxID_ANY, "9");
//}
