
// MFCApplication1View.cpp : CMFCApplication1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCApplication1View 构造/析构

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View 绘制

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: 在此处为本机数据添加绘制代码
	//pDC->Ellipse(pDoc->m_crlRect);
	pDC->Rectangle(pDoc->m_tagRec);
}


// CMFCApplication1View 诊断

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View 消息处理程序


void CMFCApplication1View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1Doc*pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_tagRec.left > 0)
		{
			pDoc->m_tagRec.left -= 10;
			pDoc->m_tagRec.right -= 10;
		}
		break;
	case VK_RIGHT:
		if(pDoc->m_tagRec.right<=(clientRec.right-clientRec.left))
		{
			pDoc->m_tagRec.left += 10;
			pDoc->m_tagRec.right += 10;
		}
		break;
	case VK_UP:
		if (pDoc->m_tagRec.top > 0)
		{
			pDoc->m_tagRec.top -= 10;
			pDoc->m_tagRec.bottom -= 10;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_tagRec.bottom <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_tagRec.top += 10;
			pDoc->m_tagRec.bottom += 10;
		}
		break;
	case VK_HOME:
		{
			pDoc->m_tagRec.top -= 10;
			pDoc->m_tagRec.left -= 10;
		}
		break;
	case VK_END:
	{
		pDoc->m_tagRec.bottom += 5;
		pDoc->m_tagRec.right += 5;
	}
	break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMFCApplication1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCApplication1Doc*pDoc = GetDocument();
	if (nFlags)
	{
		pDoc->m_tagRec.left = 500;
		pDoc->m_tagRec.top = 250;
		pDoc->m_tagRec.right = 700;
		pDoc->m_tagRec.bottom = 400;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
