#pragma once
#include "afxdialogex.h"


// DLG_CHOICE 对话框

class DLG_CHOICE : public CDialogEx
{
	DECLARE_DYNAMIC(DLG_CHOICE)

public:
	DLG_CHOICE(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DLG_CHOICE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LESSON8_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
