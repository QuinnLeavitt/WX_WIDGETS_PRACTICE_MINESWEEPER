// Quinn Leavitt
// WXWidgets Practice Minesweeper Project

#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	
	//Code for a creating a button, txt, and a listbox
	//wxButton *m_btn1 = nullptr;
	//wxTextCtrl *m_txt1 = nullptr;
	//wxListBox *m_list1 = nullptr;

	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton **btn;

	int* nField = nullptr;
	bool bFirstClick = true;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

