
// MFC33102.h : MFC33102 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC33102App:
// 有关此类的实现，请参阅 MFC33102.cpp
//

class CMFC33102App : public CWinApp
{
public:
	CMFC33102App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC33102App theApp;
