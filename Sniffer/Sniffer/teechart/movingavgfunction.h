#if !defined(AFX_MOVINGAVGFUNCTION_H__E8072AAF_C675_4B3B_A7D5_6313E47A8FFC__INCLUDED_)
#define AFX_MOVINGAVGFUNCTION_H__E8072AAF_C675_4B3B_A7D5_6313E47A8FFC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMovingAvgFunction wrapper class

class CMovingAvgFunction : public COleDispatchDriver
{
public:
	CMovingAvgFunction() {}		// Calls COleDispatchDriver default constructor
	CMovingAvgFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMovingAvgFunction(const CMovingAvgFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetWeighted();
	void SetWeighted(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOVINGAVGFUNCTION_H__E8072AAF_C675_4B3B_A7D5_6313E47A8FFC__INCLUDED_)
