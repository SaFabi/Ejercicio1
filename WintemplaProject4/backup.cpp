#include "stdafx.h"  //________________________________________ WintemplaProject4.cpp
#include "WintemplaProject4.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	WintemplaProject4 app;
	app.CreateMainWindow(L"WintemplaProject4", cmdShow, IDI_WintemplaProject4, NULL, (HBRUSH)(COLOR_WINDOW + 1), hInstance);
	return app.MessageLoop(IDC_WintemplaProject4);
}

void WintemplaProject4::Window_Open(Win::Event& e)
{
	//________________________________________________________ ie1
	try
	{
		ie1.Activate();
		//Methods and Properties: Visual Studio > View > Object Browser > Browse ... > COM Tab (Select the Activex)
		_variant_t empty;
		IWebBrowser2Ptr webBrowser2(ie1.unknown);
		webBrowser2->put_Silent(VARIANT_TRUE);
		//		webBrowser2->Navigate2(&_variant_t(L"file:C:\\MyDocuments\\MikeResume.pdf"), &empty, &empty, &empty, &empty);
		webBrowser2->Navigate2(&_variant_t(L"www.yahoo.com"), &empty, &empty, &empty, &empty);
		//ie1.UpdateSize();
	}
	catch (Com::Exception cex)
	{
		wchar_t text[512];
		cex.GetErrorText(text, 512);
		this->MessageBox(text, L"COM Error", MB_OK | MB_ICONERROR);
	}
	catch (_com_error & e)
	{
		this->MessageBox(e.ErrorMessage(), L"COM Error", MB_OK | MB_ICONERROR);
	}
}

