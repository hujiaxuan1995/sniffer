#if !defined(AFX_EXPMOVAVGFUNCTION_H__2DD93019_08B6_431D_BF1E_4D8EC2C3E654__INCLUDED_)
#define AFX_EXPMOVAVGFUNCTION_H__2DD93019_08B6_431D_BF1E_4D8EC2C3E654__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CExpMovAvgFunction wrapper class

class CExpMovAvgFunction : public COleDispatchDriver
{
public:
	CExpMovAvgFunction() {}		// Calls COleDispatchDriver default constructor
	CExpMovAvgFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CExpMovAvgFunction(const CExpMovAvgFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetIgnoreNulls();
	void SetIgnoreNulls(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXPMOVAVGFUNCTION_H__2DD93019_08B6_431D_BF1E_4D8EC2C3E654__INCLUDED_)
