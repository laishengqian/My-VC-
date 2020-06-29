
// MFC0225-2View.cpp : CMFC02252View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0225-2.h"
#endif

#include "MFC0225-2Doc.h"
#include "MFC0225-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC02252View

IMPLEMENT_DYNCREATE(CMFC02252View, CView)

BEGIN_MESSAGE_MAP(CMFC02252View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC02252View 构造/析构

CMFC02252View::CMFC02252View()
{
	// TODO: 在此处添加构造代码

}

CMFC02252View::~CMFC02252View()
{
}

BOOL CMFC02252View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC02252View 绘制

void CMFC02252View::OnDraw(CDC* /*pDC*/)
{
	CMFC02252Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC02252View 诊断

#ifdef _DEBUG
void CMFC02252View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC02252View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC02252Doc* CMFC02252View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC02252Doc)));
	return (CMFC02252Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC02252View 消息处理程序


void CMFC02252View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认
    CMFC02252Doc* pDoc = GetDocument();
	pDoc->count += 1;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC02252View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC02252Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("%d"), pDoc->count);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
