// DLG_CHOICE.cpp: 实现文件
//

#include "pch.h"
#include "lesson8.h"
#include "afxdialogex.h"
#include "DLG_CHOICE.h"


// DLG_CHOICE 对话框

IMPLEMENT_DYNAMIC(DLG_CHOICE, CDialogEx)

DLG_CHOICE::DLG_CHOICE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LESSON8_DIALOG, pParent)
{

}

DLG_CHOICE::~DLG_CHOICE()
{
}

void DLG_CHOICE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DLG_CHOICE, CDialogEx)
END_MESSAGE_MAP()


// DLG_CHOICE 消息处理程序
