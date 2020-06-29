
// Dlg-0407-1View.cpp : CDlg04071View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg-0407-1.h"
#endif

#include "Dlg-0407-1Doc.h"
#include "Dlg-0407-1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg04071View

IMPLEMENT_DYNCREATE(CDlg04071View, CView)

BEGIN_MESSAGE_MAP(CDlg04071View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg04071View::OnPopout)
END_MESSAGE_MAP()

// CDlg04071View 构造/析构

CDlg04071View::CDlg04071View()
{
	// TODO: 在此处添加构造代码

}

CDlg04071View::~CDlg04071View()
{
}

BOOL CDlg04071View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg04071View 绘制

void CDlg04071View::OnDraw(CDC* /*pDC*/)
{
	CDlg04071Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg04071View 打印

BOOL CDlg04071View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDlg04071View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDlg04071View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDlg04071View 诊断

#ifdef _DEBUG
void CDlg04071View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg04071View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg04071Doc* CDlg04071View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg04071Doc)));
	return (CDlg04071Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg04071View 消息处理程序


void CDlg04071View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		GetDC()->TextOutW(400, 300, _T("你已退出对话框"));
	}
}
