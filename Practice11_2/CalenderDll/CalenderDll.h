// CalenderDll.h : CalenderDll DLL의 기본 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'stdafx.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.


// CCalenderDllApp
// 이 클래스의 구현을 보려면 CalenderDll.cpp를 참조하십시오.
//

class CCalenderDllApp : public CWinApp
{
public:
	CCalenderDllApp();

// 재정의입니다.
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
