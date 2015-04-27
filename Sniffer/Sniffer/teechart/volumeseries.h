#if !defined(AFX_VOLUMESERIES_H__0994211C_1CF1_4C4D_B90F_24B01B52B2C4__INCLUDED_)
#define AFX_VOLUMESERIES_H__0994211C_1CF1_4C4D_B90F_24B01B52B2C4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CValueList;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CVolumeSeries wrapper class

class CVolumeSeries : public COleDispatchDriver
{
public:
	CVolumeSeries() {}		// Calls COleDispatchDriver default constructor
	CVolumeSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVolumeSeries(const CVolumeSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CValueList GetVolumeValues();
	CPen1 GetLinePen();
	BOOL GetUseYOrigin();
	void SetUseYOrigin(BOOL bNewValue);
	double GetYOrigin();
	void SetYOrigin(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VOLUMESERIES_H__0994211C_1CF1_4C4D_B90F_24B01B52B2C4__INCLUDED_)
