
// MFCMoonPdfTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCMoonPdfTestApp: 
// �йش����ʵ�֣������ MFCMoonPdfTest.cpp
//

class CMFCMoonPdfTestApp : public CWinApp
{
public:
	CMFCMoonPdfTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCMoonPdfTestApp theApp;