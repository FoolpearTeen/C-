#include<iostream>
#include<windows.h>
#include<ctime>
using namespace std;
int full_screen(){
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);
	LONG I_WinStyle = GetWindowLong(hwnd,GWL_STYLE);
	SetWindowLong(hwnd,GWL_STYLE,(I_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_BORDER);
	SetWindowPos(hwnd,HWND_TOP, 0, 0, cx, cy, 0);
}
int HideTheCursor(){
	CONSOLE_CURSOR_INFO cciCursor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if(GetConsoleCursorInfo(hStdOut, &cciCursor)){
		cciCursor.bVisible = FALSE;
		SetConsoleCursorInfo(hStdOut, &cciCursor);
	}
}
int main(){
	cout<<"系统启动中请稍后……"<<endl;
	system("mode 96,28");
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	HideTheCursor();
	CONSOLE_FONT_INFOEX cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 15;
	cfi.dwFontSize.Y = 30;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"MS Gothic");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	system("color 1f");
	RECT rect;
	HWND hwnd=GetForegroundWindow();
	GetWindowRect(hwnd,&rect);
	MoveWindow(hwnd,-40,-10,8700,1180,TRUE);
	full_screen();
	while(2>1){
		system("color 0a");
		cout<<"ROLL GO MDS (made by szl)  ";
		system("color 1a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 2a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 3a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 4a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 5a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 6a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 7a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 8a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color 9a");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color af");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color ba");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color ca");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color da");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color ea");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		system("color fa");
		system("color 0a");
		cout<<"ROLL GO MDS   ";
		cout<<"ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ROLL GO MDS   ";
	}
	return 0;
}
