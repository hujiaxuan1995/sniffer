#if !defined(AFX_CALENDARCELLUPPER_H__F2E6E460_847E_4DFA_830D_D9ACD7C5B6EC__INCLUDED_)
#define AFX_CALENDARCELLUPPER_H__F2E6E460_847E_4DFA_830D_D9ACD7C5B6EC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeFont;
class CGradient;
class CTeeRect;
class CTeeShadow;
class CPen1;
class CBackImage;

/////////////////////////////////////////////////////////////////////////////
// CCalendarCellUpper wrapper class

class CCalendarCellUpper : public COleDispatchDriver
{
public:
	CCalendarCellUpper() {}		// Calls COleDispatchDriver default constructor
	CCalendarCellUpper(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCalendarCellUpper(const CCalendarCellUpper& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CTeeFont GetFont();
	CGradient GetGradient();
	long GetShadowSize();
	void SetShadowSize(long nNewValue);
	unsigned long GetShadowColor();
	void SetShadowColor(unsigned long newValue);
	BOOL GetTransparent();
	void SetTransparent(BOOL bNewValue);
	long GetShapeStyle();
	void SetShapeStyle(long nNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeRect GetShapeBounds();
	long GetBevel();
	void SetBevel(long nNewValue);
	long GetBevelWidth();
	void SetBevelWidth(long nNewValue);
	void ShowEditorShape();
	CTeeShadow GetShadow();
	long GetRoundSize();
	void SetRoundSize(long nNewValue);
	CPen1 GetPen();
	CBackImage GetPicture();
	void Show();
	void Hide();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString GetFormat();
	void SetFormat(LPCTSTR lpszNewValue);
	BOOL GetUpperCase();
	void SetUpperCase(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDARCELLUPPER_H__F2E6E460_847E_4DFA_830D_D9ACD7C5B6EC__INCLUDED_)
