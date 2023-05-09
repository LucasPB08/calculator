//
// Created by Lucas on 07/05/2023.
//
#include <wx/wx.h>
#include "MyApp.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MainFrame* mainFrame = new MainFrame("My Calculator");
    mainFrame -> Show();
    return true;
}

