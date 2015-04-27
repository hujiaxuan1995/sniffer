#if !defined(AFX_NEARESTTOOL_H__778ED0FA_33C9_402A_8833_74282F94C052__INCLUDED_)
#define AFX_NEARESTTOOL_H__778ED0FA_33C9_402A_8833_74282F94C052__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CNearestTool wrapper class

class CNearestTool : public COleDispatchDriver
{
public:
	CNearestTool() {}		// Calls COleDispatchDriver default constructor
	CNearestTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CNearestTool(const CNearestTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	CBrush1 GetBrush();
	BOOL GetDrawLine();
	void SetDrawLine(BOOL bNewValue);
	BOOL GetFullRepaint();
	void SetFullRepaint(BOOL bNewValue);
	CPen1 GetPen();
	long GetSize();
	void SetSize(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetPoint();
	void SetPoint(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEARESTTOOL_H__778ED0FA_33C9_402A_8833_74282F94C052__INCLUDED_)
