#if !defined(AFX_SSCOMMAND_H__674A2582_0858_4BE7_B5BC_4133F6CF1D26__INCLUDED_)
#define AFX_SSCOMMAND_H__674A2582_0858_4BE7_B5BC_4133F6CF1D26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CSSCommand wrapper class

class CSSCommand : public CWnd
{
protected:
	DECLARE_DYNCREATE(CSSCommand)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xaad093b2, 0xf9ca, 0x11cf, { 0x9c, 0x85, 0x0, 0x0, 0xc0, 0x93, 0x0, 0xc4 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	short GetPictureAnimationDelay();
	void SetPictureAnimationDelay(short nNewValue);
	BOOL GetPictureAnimationEnabled();
	void SetPictureAnimationEnabled(BOOL bNewValue);
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	long GetBackStyle();
	void SetBackStyle(long nNewValue);
	long GetCaptionStyle();
	void SetCaptionStyle(long nNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	COleFont GetFont();
	void SetFont(LPDISPATCH newValue);
	void SetRefFont(LPDISPATCH newValue);
	long GetFont3D();
	void SetFont3D(long nNewValue);
	unsigned long GetForeColor();
	void SetForeColor(unsigned long newValue);
	long GetHWnd();
	short GetMarqueeDelay();
	void SetMarqueeDelay(short nNewValue);
	long GetMarqueeDirection();
	void SetMarqueeDirection(long nNewValue);
	short GetMarqueeScrollAmount();
	void SetMarqueeScrollAmount(short nNewValue);
	long GetMarqueeStyle();
	void SetMarqueeStyle(long nNewValue);
	CPicture GetMouseIcon();
	void SetMouseIcon(LPDISPATCH newValue);
	void SetRefMouseIcon(LPDISPATCH newValue);
	long GetMousePointer();
	void SetMousePointer(long nNewValue);
	long GetOLEDropMode();
	void SetOLEDropMode(long nNewValue);
	CPicture GetPicture();
	void SetPicture(LPDISPATCH newValue);
	void SetRefPicture(LPDISPATCH newValue);
	short GetPictureFrames();
	void SetPictureFrames(short nNewValue);
	unsigned long GetPictureMaskColor();
	void SetPictureMaskColor(unsigned long newValue);
	BOOL GetPictureUseMask();
	void SetPictureUseMask(BOOL bNewValue);
	VARIANT GetTagVariant();
	void SetTagVariant(const VARIANT& newValue);
	void Refresh();
	void PlaySoundFile(const VARIANT& SoundFile);
	void AboutBox();
	void OLEDrag();
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	BOOL GetValue();
	void SetValue(BOOL bNewValue);
	long GetAlignment();
	void SetAlignment(long nNewValue);
	long GetAutoSize();
	void SetAutoSize(long nNewValue);
	short GetBevelWidth();
	void SetBevelWidth(short nNewValue);
	long GetButtonStyle();
	void SetButtonStyle(long nNewValue);
	BOOL GetOutline();
	void SetOutline(BOOL bNewValue);
	long GetPictureAlignment();
	void SetPictureAlignment(long nNewValue);
	CPicture GetPictureDisabled();
	void SetPictureDisabled(LPDISPATCH newValue);
	void SetRefPictureDisabled(LPDISPATCH newValue);
	short GetPictureDisabledFrames();
	void SetPictureDisabledFrames(short nNewValue);
	CPicture GetPictureDn();
	void SetPictureDn(LPDISPATCH newValue);
	void SetRefPictureDn(LPDISPATCH newValue);
	short GetPictureDnFrames();
	void SetPictureDnFrames(short nNewValue);
	BOOL GetRoundedCorners();
	void SetRoundedCorners(BOOL bNewValue);
	BOOL GetAutoRepeat();
	void SetAutoRepeat(BOOL bNewValue);
	void DoClick();
	BOOL GetWindowless();
	void SetWindowless(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SSCOMMAND_H__674A2582_0858_4BE7_B5BC_4133F6CF1D26__INCLUDED_)
