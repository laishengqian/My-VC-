
// Dlg-0407-1View.h : CDlg04071View 类的接口
//

#pragma once


class CDlg04071View : public CView
{
protected: // 仅从序列化创建
	CDlg04071View();
	DECLARE_DYNCREATE(CDlg04071View)

// 特性
public:
	CDlg04071Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDlg04071View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // Dlg-0407-1View.cpp 中的调试版本
inline CDlg04071Doc* CDlg04071View::GetDocument() const
   { return reinterpret_cast<CDlg04071Doc*>(m_pDocument); }
#endif

