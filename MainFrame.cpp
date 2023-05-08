
#include <wx/wx.h>
#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title){
    this->mainPanel = new wxPanel(this, wxID_ANY);
}
