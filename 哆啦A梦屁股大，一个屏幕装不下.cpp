#include<iostream>
#include<windows.h>
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
	cout<<":("<<endl;
	cout<<"The problem has been detected and the window has been closed to prevent damage to your computer.  "<<endl<<"DRIVER_IROL NOT_LESS_OR_EQUAL [mds]If this is the first time you've seen this stop error screen, restart your computer.  "<<endl<<"If the screen appears again, follow these steps: Check to ensure that any new hardware or software has been installed correctly.  "<<endl<<"If this is a new installation, ask your hardware or software manufacturer for any Windows updates you may need.  "<<endl<<"If the problem continues.  Disable or remove any newly installed hardware or software.  Disable BIOS memory options, such as caching or shading.  "<<endl<<" "<<endl<<"If you need NSU safe mode to remove or disable components, restart your computer, press F8 to select advanced startup options, and then select Safe Mode. "<<endl<<" "<<endl<<" "<<endl<<" 'STOP: Ox00000050 (OxFD3094c2, 0x00000001, OxFBFE7617, 0x00000000) "<<endl<<" Sys-address FBFE7617 base at FBFE5000, date stamp 3D6DD67C  "<<endl;
	while(2>1){
		HideTheCursor();
		Sleep(1000);
	}
	return 0;
}
