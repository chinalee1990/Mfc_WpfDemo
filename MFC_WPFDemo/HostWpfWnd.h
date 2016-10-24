#pragma once

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Interop;
using namespace System::Runtime;
using namespace WpfApplication1;
using namespace WpfControlLibrary1;

ref class CHostWpfWnd
{
public:
	CHostWpfWnd();
	~CHostWpfWnd(){};
protected:
	!CHostWpfWnd(){};

public:
	static WpfApplication1::MainWindow^ hostedWnd;
	static WpfControlLibrary1::UserControl1^ hostwnd1;
	static HWND hWnd;
	static HWND GetHwnd(HWND hwnd);
	//static HWND GetHwnd1(HWND hwnd);


};



ref class Globals
{

public:		static System::Windows::Interop::HwndSource^ gHwndSource;
			static WpfControlLibrary1::UserControl1^ hostwnd1;

			static HWND GetHwnd(HWND parent, int x, int y, int width, int height);
			static void SetWPFControl(CString strInfo);

		

};

