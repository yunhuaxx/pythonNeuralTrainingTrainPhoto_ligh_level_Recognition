#pragma once
#include "afxdialogex.h"


// DLG_MODE 对话框

class DLG_MODE : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_MODE)

public:
	DLG_MODE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DLG_MODE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_CHOICE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton2();
};
