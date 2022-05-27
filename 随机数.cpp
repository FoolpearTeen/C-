#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
int main(){
	cout<<"【注意!Attention!】 输入0会卡BUG, 输入负数你会满脸问号, 输入过大的数字会芜湖起飞……"<<endl<<endl; 
	MessageBox(NULL,"输入0会卡BUG, 输入负数你会满脸问号, 输入过大的数字会芜湖起飞……","【注意!Attention!】",MB_OK|MB_ICONWARNING);
	while(2>1){
	long long a;
	cout<<"你想要0~多少的随机数--> :";
	cin>>a;
	cout<<endl<<"	随机数:";
	srand(time(0));
	cout<<rand()%a<<endl<<endl<<endl<<endl;
	}
	return 0;
}
/*
MDS(made by szl)
*/
