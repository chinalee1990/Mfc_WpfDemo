
// MFC_WPFDemoDlg.h : ͷ�ļ�
//

#pragma once


// CMFC_WPFDemoDlg �Ի���
class CMFC_WPFDemoDlg : public CDialogEx
{
// ����
public:
	CMFC_WPFDemoDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFC_WPFDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	HWND m_hwndWPF;
public:
	afx_msg void OnBnClickedOk();
};
