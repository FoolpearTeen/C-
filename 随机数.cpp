#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
int main(){
	cout<<"��ע��!Attention!�� ����0�ῨBUG, ���븺����������ʺ�, �����������ֻ��ߺ���ɡ���"<<endl<<endl; 
	MessageBox(NULL,"����0�ῨBUG, ���븺����������ʺ�, �����������ֻ��ߺ���ɡ���","��ע��!Attention!��",MB_OK|MB_ICONWARNING);
	while(2>1){
	long long a;
	cout<<"����Ҫ0~���ٵ������--> :";
	cin>>a;
	cout<<endl<<"	�����:";
	srand(time(0));
	cout<<rand()%a<<endl<<endl<<endl<<endl;
	}
	return 0;
}
/*
MDS(made by szl)
*/
