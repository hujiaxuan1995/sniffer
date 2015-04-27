#if !defined(AFX_CROPFILTER_H__6785852F_027F_4853_B7DC_6F01DCFD4031__INCLUDED_)
#define AFX_CROPFILTER_H__6785852F_027F_4853_B7DC_6F01DCFD4031__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCropFilter wrapper class

class CCropFilter : public COleDispatchDriver
{
public:
	CCropFilter() {}		// Calls COleDispatchDriver default constructor
	CCropFilter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCropFilter(const CCropFilter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CROPFILTER_H__6785852F_027F_4853_B7DC_6F01DCFD4031__INCLUDED_)
