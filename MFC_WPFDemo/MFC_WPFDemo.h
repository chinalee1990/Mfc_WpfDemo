
// MFC_WPFDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_WPFDemoApp: 
// �йش����ʵ�֣������ MFC_WPFDemo.cpp
//

class CMFC_WPFDemoApp : public CWinApp
{
public:
	CMFC_WPFDemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_WPFDemoApp theApp;