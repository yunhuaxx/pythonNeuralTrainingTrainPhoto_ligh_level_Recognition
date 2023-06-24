
// ImageClassificationDlg.h: 头文件
//

#pragma once
#include <map>
#include <string>

using namespace std;
// ImageClassificationDlg 对话框
class CImageClassifyDlg : public CDialogEx
{
// 构造
public:
	CImageClassifyDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMAGECLASSIFY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonSingle();
	afx_msg void OnBnClickedButtonStartSingle();
	afx_msg void OnBnClickedButtonDir();
	afx_msg void OnBnClickedButtonStartDir();
	CBrush m_bgBrush;
	CFont m_ButtonFont;
	//CButton m_btnYourButton//按键透明
private:
	CFont m_oFont;
public:
	afx_msg void OnEnChangeEditNormallightDir();
	afx_msg LRESULT OnImageClassifyFinished(WPARAM wParam, LPARAM lParam);
private:
	std::map<std::string, int> m_mapClassNums;
public:
	afx_msg void OnEnChangeEditReflectiveNums();
	afx_msg void OnEnChangeEditDir();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnStnClickedStaticDir();
	afx_msg void OnStnClickedStaticSingle();
	afx_msg void OnEnChangeEditDarkNums();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEditNormalNums();
	afx_msg void OnEnChangeEditBacklinghtingNums();
	afx_msg void OnEnChangeEditDimlightDir();
	afx_msg void OnBnClickedtc();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg LRESULT OnNcHitTest(CPoint point);
	afx_msg void OnEnChangeEditSingle();
};
