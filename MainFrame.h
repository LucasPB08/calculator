#include <wx/wx.h>

#ifndef SUDOKU_GAME_MAINFRAME_H
#define SUDOKU_GAME_MAINFRAME_H


class MainFrame : public wxFrame {
private:
    wxPanel* mainPanel;
public:
    MainFrame(const wxString& title);
};


#endif //SUDOKU_GAME_MAINFRAME_H
