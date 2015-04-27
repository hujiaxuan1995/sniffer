#if !defined(AFX_PDFEXPORT_H__23826B2F_5DAE_427E_8A8D_10786AF6763A__INCLUDED_)
#define AFX_PDFEXPORT_H__23826B2F_5DAE_427E_8A8D_10786AF6763A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CPDFExport wrapper class

class CPDFExport : public COleDispatchDriver
{
public:
	CPDFExport() {}		// Calls COleDispatchDriver default constructor
	CPDFExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPDFExport(const CPDFExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	void SaveToFile(LPCTSTR FileName);
	VARIANT SaveToStream();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PDFEXPORT_H__23826B2F_5DAE_427E_8A8D_10786AF6763A__INCLUDED_)
