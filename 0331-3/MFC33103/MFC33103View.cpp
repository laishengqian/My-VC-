
// MFC33103View.cpp : CMFC33103View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC33103.h"
#endif

#include "MFC33103Doc.h"
#include "MFC33103View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC33103View

IMPLEMENT_DYNCREATE(CMFC33103View, CView)

BEGIN_MESSAGE_MAP(CMFC33103View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC33103View 构造/析构

CMFC33103View::CMFC33103View()
{
	// TODO: 在此处添加构造代码

}

CMFC33103View::~CMFC33103View()
{
}

BOOL CMFC33103View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC33103View 绘制

void CMFC33103View::OnDraw(CDC* pDC)
{
	CMFC33103Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect cd(200, 200, 500, 400);
	pDC->Rectangle(cd);

	x = cd.left;
	y = cd.bottom;


	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC33103View 诊断

#ifdef _DEBUG
void CMFC33103View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC33103View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC33103Doc* CMFC33103View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC33103Doc)));
	return (CMFC33103Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC33103View 消息处理程序


void CMFC33103View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);
	CString A;


	int position;
	int flag;
	CRect Rect(200, 200, 500, 500);


	A.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200)
	{
		position = (x - 200) / 10 + (y - 200) / 20 * 30;

		c.Insert(position, nChar);

	}

	else
	{
		c.Append(A);
	}

	dc.DrawText(c, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);


	CView::OnChar(nChar, nRepCnt, nFlags);
}


void CMFC33103View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x = point.x;
	y = point.y;


	CView::OnLButtonDown(nFlags, point);
}
