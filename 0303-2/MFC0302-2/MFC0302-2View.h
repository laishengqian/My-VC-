
// MFC0302-2View.h : CMFC03022View 类的接口
//

#pragma once


class CMFC03022View : public CView
{
protected: // 仅从序列化创建
	CMFC03022View();
	DECLARE_DYNCREATE(CMFC03022View)

// 特性
public:
	CMFC03022Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC03022View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0302-2View.cpp 中的调试版本
inline CMFC03022Doc* CMFC03022View::GetDocument() const
   { return reinterpret_cast<CMFC03022Doc*>(m_pDocument); }
#endif

