#include <iostream>
#include <cstring>
using namespace std;

/*
����һ���ַ�����������浥�ʵĸ���������֮���ÿո���� ,һ���ո�������ʹ�����һ�������� 
˼·��
	���ȼ�����ַ����ĳ��ȣ����ַ�����һ��
	�ۼ��ɿո�ת��Ϊ�ǿո񴮵Ĵ������������ǵ��ʵĸ��� 
	����һ����־�Ա���flag��0��ʾ���ǿո�״̬��1��ʾ���Ƿǿո�״̬
	�ַ���ֻ�пո�״̬�ͷǿո�״̬������if(�����ǿո�״̬)�����ܽ���else if(flag==0)�϶����Ƿǿո�״̬��
	��else ��else if ������else�Ǽ������ĸ�ĸ�����ֻҪ���ַ����ǿո���ĸ������+1 
	��else if����flag==0������˵����ǰ���ַ����ǿո���flag��Ϊ1����ô���ʾͲ�+1 



*/
int main() {
	char arr[40];
	int i = 0;
	int number = 0;
	int flag = 0;
	cout<<"������һ���ַ���";
	cin.getline(arr,39);
	for (i=0; i<strlen(arr); i++) {
		if (arr[i] == ' ') {
			flag = 0;
		}
		else if (flag == 0) {
			number++;
			flag = 1;
		}
	}
	cout<<"���ʵĸ����ǣ�"<<number;
	return 0;
} 
