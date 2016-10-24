#pragma once



ref class iWPF
{
public:
	iWPF();
};


//using namespace System;
//using namespace System::Windows;
//using namespace System::Windows::Controls;
//using namespace System::Windows::Media;
//using namespace System::Runtime;
//using namespace System::Runtime::InteropServices;
//using namespace System::Windows::Interop;
//
//
//ref class Globals {
//public:
//	static System::Windows::Interop::HwndSource^ gHwndSource;
//	static TuioInk::TuioInkCanvas^ inkCanvas;
//};


//HWND hwndWPF; //The hwnd associated with the hosted WPF page
//HWND GetHwnd(HWND parent, int x, int y, int width, int height)
//{
//	System::Windows::Interop::HwndSourceParameters^ sourceParams = gcnew System::Windows::Interop::HwndSourceParameters("TestMFCWPF");
//	sourceParams->PositionX = x;
//	sourceParams->PositionY = y;
//	sourceParams->Height = height;
//	sourceParams->Width = width;
//	sourceParams->ParentWindow = IntPtr(parent);
//	sourceParams->WindowStyle = WS_VISIBLE | WS_POPUP;
//	//sourceParams->ExtendedWindowStyle = (int)WS_EX_TRANSPARENT;
//	sourceParams->UsesPerPixelOpacity = true;
//	Globals::gHwndSource = gcnew System::Windows::Interop::HwndSource(*sourceParams);
//	Globals::inkCanvas = gcnew TuioInk::TuioInkCanvas();
//	//Globals::inkCanvas->Background = System::Windows::Media::Brushes::Transparent;
//	//Globals::gHwndSource->CompositionTarget->BackgroundColor = System::Windows::Media::Colors::Transparent;
//	FrameworkElement^ myPage = Globals::inkCanvas;
//	Globals::gHwndSource->RootVisual = myPage;
//	return (HWND)Globals::gHwndSource->Handle.ToPointer();
//}