
// MFC0302-1View.h : CMFC03021View 类的接口
//

#pragma once


class CMFC03021View : public CView
{
protected: // 仅从序列化创建
	CMFC03021View();
	DECLARE_DYNCREATE(CMFC03021View)

// 特性
public:
	CMFC03021Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC03021View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0302-1View.cpp 中的调试版本
inline CMFC03021Doc* CMFC03021View::GetDocument() const
   { return reinterpret_cast<CMFC03021Doc*>(m_pDocument); }
#endif

