#include <iostream>
#include <cstring>
using namespace std;
//���Ӻ��������Զ�ɾ������1ĩβ��'\0' 

int main() {
	char str1[100] ="Good moring!"; 
	char str2[100];
	cout<<"�������������֣�";
	cin>>str2;
	strcat(str1,str2);
	cout<<str1<<endl;
	
	
	return 0;
}
