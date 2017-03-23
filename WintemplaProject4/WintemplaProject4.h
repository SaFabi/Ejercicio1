#pragma once  //______________________________________ WintemplaProject4.h  
#include "Resource.h"
class WintemplaProject4 : public Win::Window
{
public:
	WintemplaProject4()
	{
	}
	~WintemplaProject4()
	{
	}
	const wchar_t * GetClassName() { return L"WintemplaProject4"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Com::Container ie1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WintemplaProject4";
		ie1.CreateX(WS_EX_CLIENTEDGE, L"Shell.Explorer.2", WS_CHILD | WS_VISIBLE, 0.15875, 0.23813, 16.53646, 10.39813, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		ie1.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_BORDER);
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
