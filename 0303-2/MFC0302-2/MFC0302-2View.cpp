
// MFC0302-2View.cpp : CMFC03022View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0302-2.h"
#endif

#include "MFC0302-2Doc.h"
#include "MFC0302-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC03022View

IMPLEMENT_DYNCREATE(CMFC03022View, CView)

BEGIN_MESSAGE_MAP(CMFC03022View, CView)
END_MESSAGE_MAP()

// CMFC03022View 构造/析构

CMFC03022View::CMFC03022View()
{
	// TODO: 在此处添加构造代码

}

CMFC03022View::~CMFC03022View()
{
}

BOOL CMFC03022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC03022View 绘制

void CMFC03022View::OnDraw(CDC* pDC)
{
	CMFC03022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	pDC->TextOutW(200, 200, pDoc->s);
	CString t;
	t.Format(_T("%d"), pDoc->a);
	pDC->TextOutW(200, 250, t);
}


// CMFC03022View 诊断

#ifdef _DEBUG
void CMFC03022View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC03022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC03022Doc* CMFC03022View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC03022Doc)));
	return (CMFC03022Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC03022View 消息处理程序
