#include <iostream>
#include <cstring>
using namespace std;
//��������ʾ'\0'Ҳ��һͬ�������ڶ��������������ַ������� 
int main() {
	char str1[100];
	char str2[100];
	char str3[] = "c++���";
	strcpy(str1,str3);
	strcpy(str2,"C++��̺���Ȥ");
	cout<<"str1="<<str1<<endl;
	cout<<"str2="<<str2<<endl;
	
	
	
	return 0;
} 
