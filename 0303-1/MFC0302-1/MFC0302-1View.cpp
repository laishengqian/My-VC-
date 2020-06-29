
// MFC0302-1View.cpp : CMFC03021View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0302-1.h"
#endif

#include "MFC0302-1Doc.h"
#include "MFC0302-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03021View

IMPLEMENT_DYNCREATE(CMFC03021View, CView)

BEGIN_MESSAGE_MAP(CMFC03021View, CView)
END_MESSAGE_MAP()

// CMFC03021View 构造/析构

CMFC03021View::CMFC03021View()
{
	// TODO: 在此处添加构造代码

}

CMFC03021View::~CMFC03021View()
{
}

BOOL CMFC03021View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03021View 绘制

void CMFC03021View::OnDraw(CDC* pDC)
{
	CMFC03021Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s = _T("我是赖盛钱");
	pDC->TextOutW(300, 250, s);
	int a = 115;
	CString t;
	t.Format(_T("%d"), a);
	pDC->TextOutW(300, 300, t);
}


// CMFC03021View 诊断

#ifdef _DEBUG
void CMFC03021View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03021View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03021Doc* CMFC03021View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03021Doc)));
	return (CMFC03021Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03021View 消息处理程序
