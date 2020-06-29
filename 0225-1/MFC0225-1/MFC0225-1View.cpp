
// MFC0225-1View.cpp : CMFC02251View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0225-1.h"
#endif

#include "MFC0225-1Doc.h"
#include "MFC0225-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02251View

IMPLEMENT_DYNCREATE(CMFC02251View, CView)

BEGIN_MESSAGE_MAP(CMFC02251View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02251View 构造/析构

CMFC02251View::CMFC02251View()
{
	// TODO: 在此处添加构造代码

}

CMFC02251View::~CMFC02251View()
{
}

BOOL CMFC02251View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC02251View 绘制

void CMFC02251View::OnDraw(CDC* /*pDC*/)
{
	CMFC02251Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC02251View 诊断

#ifdef _DEBUG
void CMFC02251View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02251View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02251Doc* CMFC02251View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02251Doc)));
	return (CMFC02251Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02251View 消息处理程序


void CMFC02251View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CString s = _T("赖盛钱");
	dc.TextOutW(400, 280, s);

	CView::OnLButtonDown(nFlags, point);
}
