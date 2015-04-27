#if !defined(AFX_COLORLINETOOL_H__722CB6D4_2639_40B0_A3C9_B821BE5CD2EB__INCLUDED_)
#define AFX_COLORLINETOOL_H__722CB6D4_2639_40B0_A3C9_B821BE5CD2EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CColorLineTool wrapper class

class CColorLineTool : public COleDispatchDriver
{
public:
	CColorLineTool() {}		// Calls COleDispatchDriver default constructor
	CColorLineTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CColorLineTool(const CColorLineTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetAxis();
	void SetAxis(const VARIANT& newValue);
	CPen1 GetPen();
	double GetValue();
	void SetValue(double newValue);
	BOOL GetAllowDrag();
	void SetAllowDrag(BOOL bNewValue);
	BOOL Clicked(long X, long Y);
	BOOL GetDragRepaint();
	void SetDragRepaint(BOOL bNewValue);
	BOOL GetNoLimitDrag();
	void SetNoLimitDrag(BOOL bNewValue);
	BOOL GetDraw3D();
	void SetDraw3D(BOOL bNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	BOOL GetDrawBehind();
	void SetDrawBehind(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COLORLINETOOL_H__722CB6D4_2639_40B0_A3C9_B821BE5CD2EB__INCLUDED_)
