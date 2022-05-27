#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	int x=GetSystemMetrics(SM_CXSCREEN);
	int y=GetSystemMetrics(SM_CXSCREEN);
	srand(time(NULL));
	while(1) SetCursorPos(rand()%x,rand()%y);
	return 0;
}
