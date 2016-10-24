#include "stdafx.h"
#include "HostWpfWnd.h"


CHostWpfWnd::CHostWpfWnd()
{
}

HWND CHostWpfWnd::GetHwnd(HWND hwnd)
{
	CHostWpfWnd::hostedWnd = gcnew MainWindow();

	WindowInteropHelper^ wih = gcnew WindowInteropHelper(CHostWpfWnd::hostedWnd);
	wih->Owner = IntPtr(hwnd);
	CHostWpfWnd::hWnd = (HWND)wih->Handle.ToPointer();

	return CHostWpfWnd::hWnd;
}

//HWND CHostWpfWnd::GetHwnd1(HWND hwnd)
//{
//	CHostWpfWnd::hostwnd1 = gcnew UserControl1();
//	WindowInteropHelper^ wih = gcnew WindowInteropHelper(CHostWpfWnd::hostwnd1);
//	wih->Owner = IntPtr(hwnd);
//	CHostWpfWnd::hWnd = (HWND)wih->Handle.ToPointer();
//
//	return CHostWpfWnd::hWnd;
//}


HWND Globals::GetHwnd(HWND parent, int x, int y, int width, int height)
{

	System::Windows::Interop::HwndSourceParameters^ sourceParams = gcnew System::Windows::Interop::HwndSourceParameters
		(
		"MFC_WPFDemo"
		);

	sourceParams->PositionX = x;
	sourceParams->PositionY = y;
	sourceParams->Height = height;
	sourceParams->Width = width;
	sourceParams->ParentWindow = IntPtr(parent);
	sourceParams->WindowStyle = WS_VISIBLE | WS_CHILD;

	Globals::gHwndSource = gcnew System::Windows::Interop::HwndSource(*sourceParams);

	Globals::hostwnd1 = gcnew WpfControlLibrary1::UserControl1();

	FrameworkElement^ myPage = Globals::hostwnd1;

	Globals::gHwndSource->RootVisual = myPage;

	return (HWND)Globals::gHwndSource->Handle.ToPointer();

}


void Globals::SetWPFControl(CString strInfo)
{

	FrameworkElement^ page;
	DateTime tm = DateTime::Now;
	String ^strInfo1 = gcnew String(strInfo);
	Globals::hostwnd1->SetInfo(strInfo1);
	page = Globals::hostwnd1;
	Globals::gHwndSource->RootVisual =	page;
	return;
}