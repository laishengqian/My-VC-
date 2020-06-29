
// MFC33102View.h : CMFC33102View 类的接口
//

#pragma once


class CMFC33102View : public CView
{
protected: // 仅从序列化创建
	CMFC33102View();
	DECLARE_DYNCREATE(CMFC33102View)

// 特性
public:
	CMFC33102Doc* GetDocument() const;

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
	virtual ~CMFC33102View();
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

#ifndef _DEBUG  // MFC33102View.cpp 中的调试版本
inline CMFC33102Doc* CMFC33102View::GetDocument() const
   { return reinterpret_cast<CMFC33102Doc*>(m_pDocument); }
#endif

