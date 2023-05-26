// DLG_MODE.cpp: 实现文件
//

#include "pch.h"
#include "lesson8.h"
#include "afxdialogex.h"
#include "DLG_MODE.h"
#include "lesson8Dlg.h"
#include <string>
#include "TaskManager.h"

CFont m_oFont;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
using namespace std;
// DLG_MODE 对话框

IMPLEMENT_DYNAMIC(DLG_MODE, CDialogEx)

DLG_MODE::DLG_MODE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_CHOICE, pParent)
{

}

DLG_MODE::~DLG_MODE()
{
}

void DLG_MODE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG_MODE, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &DLG_MODE::OnBnClickedButton3)
	ON_EN_CHANGE(IDC_EDIT5, &DLG_MODE::OnEnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTON1, &DLG_MODE::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &DLG_MODE::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &DLG_MODE::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON4, &DLG_MODE::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON7, &DLG_MODE::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON2, &DLG_MODE::OnBnClickedButton2)
END_MESSAGE_MAP()


// DLG_MODE 消息处理程序

//目录图像分类
void DLG_MODE::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szBuffer[MAX_PATH] = { 0 };
	BROWSEINFO bi;
	ZeroMemory(&bi, sizeof(BROWSEINFO));
	bi.hwndOwner = NULL;
	bi.pszDisplayName = szBuffer;
	bi.lpszTitle = _T("从下面选文件夹目录:");
	bi.ulFlags = BIF_RETURNFSANCESTORS; //BIF_BROWSEINCLUDEFILES
	LPITEMIDLIST idl = SHBrowseForFolder(&bi);
	if (NULL == idl)
	{
		return;
	}
	SHGetPathFromIDList(idl, szBuffer);
	if (szBuffer)
	{
		std::wstring strFilePath = szBuffer;

		//文本框写入
		CEdit* pEditSourceFileDir = (CEdit*)GetDlgItem(IDC_EDIT3);
		if (pEditSourceFileDir)
		{
			pEditSourceFileDir->SetWindowText(szBuffer);
			pEditSourceFileDir->SetFont(&m_oFont);
		}
	}


}


void DLG_MODE::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

//单一图片分类
void DLG_MODE::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString OpenFilter = _T("图片文件(*.*)|*.*|");

	CFileDialog FileOpen(TRUE, NULL, NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, OpenFilter);
	if (IDOK == FileOpen.DoModal())
	{
		CString PathName = FileOpen.GetPathName();
		GetDlgItem(IDC_EDIT1)->SetWindowTextW(PathName);
		GetDlgItem(IDC_EDIT1)->SetFont(&m_oFont);
	}

}


void DLG_MODE::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void DLG_MODE::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

//开始分类
void DLG_MODE::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CString  strSourceFile;
	CEdit* pEditSourceFile = (CEdit*)GetDlgItem(IDC_EDIT1);
	if (pEditSourceFile)
	{
		pEditSourceFile->GetWindowText(strSourceFile);
	}

	//分类
	TaskManager* pManager = new TaskManager;
	IMAGE_TYPE type = pManager->AddTask(strSourceFile.GetBuffer());

	CEdit* pEditResult = (CEdit*)GetDlgItem(IDC_EDIT2);
	if (type == NORMAL_IMAGE)
	{
		pEditResult->SetWindowText(L"正常");
	}
	else if (type == AG_IMAGE)
	{
		pEditResult->SetWindowText(L"暗光");
	}
	else if (type == NG_IMAGE)
	{
		pEditResult->SetWindowText(L"逆光");
	}
	else if (type == FG_IMAGE)
	{
		pEditResult->SetWindowText(L"反光");
	}
}

//目录图像开始分类
void DLG_MODE::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	CString  strSourceDir;
	CEdit* pEditSourceDir = (CEdit*)GetDlgItem(IDC_EDIT3);
	if (pEditSourceDir)
	{
		pEditSourceDir->GetWindowText(strSourceDir);
	}
	//分类
	TaskManager* pManager = new TaskManager;
	pManager->AddTask(strSourceDir.GetBuffer());
}

//返回
void DLG_MODE::OnBnClickedButton2()
{
// TODO: 在此添加控件通知处理程序代码


}
