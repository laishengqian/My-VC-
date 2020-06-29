
// MFC33101View.h : CMFC33101View 类的接口
//

#pragma once


class CMFC33101View : public CView
{
protected: // 仅从序列化创建
	CMFC33101View();
	DECLARE_DYNCREATE(CMFC33101View)

// 特性
public:
	CMFC33101Doc* GetDocument() const;

// 操作
public:
	int x, y;
	CPoint m_ptOrigin;
	CString c;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC33101View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC33101View.cpp 中的调试版本
inline CMFC33101Doc* CMFC33101View::GetDocument() const
   { return reinterpret_cast<CMFC33101Doc*>(m_pDocument); }
#endif

