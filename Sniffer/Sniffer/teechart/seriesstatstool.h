#if !defined(AFX_SERIESSTATSTOOL_H__D24A8D4A_11CA_4B64_BF9D_90076CB3DF4F__INCLUDED_)
#define AFX_SERIESSTATSTOOL_H__D24A8D4A_11CA_4B64_BF9D_90076CB3DF4F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CStrings;

/////////////////////////////////////////////////////////////////////////////
// CSeriesStatsTool wrapper class

class CSeriesStatsTool : public COleDispatchDriver
{
public:
	CSeriesStatsTool() {}		// Calls COleDispatchDriver default constructor
	CSeriesStatsTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSeriesStatsTool(const CSeriesStatsTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	CStrings GetStatistics();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERIESSTATSTOOL_H__D24A8D4A_11CA_4B64_BF9D_90076CB3DF4F__INCLUDED_)