#if !defined(_AUTOCOMPLETECOMBOBOX_H_)
#define _AUTOCOMPLETECOMBOBOX_H_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CAutoCompleteComboBox window

class CAutoCompleteComboBox : public CComboBox
{
// Construction
public:
	CAutoCompleteComboBox();
	virtual ~CAutoCompleteComboBox();

	//{{AFX_VIRTUAL(CAutoCompleteComboBox)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//}}AFX_VIRTUAL

protected:
	BOOL m_bWorkOnText;
	//{{AFX_MSG(CAutoCompleteComboBox)
	afx_msg void OnEditUpdate();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif // !defined(_AUTOCOMPLETECOMBOBOX_H_)
