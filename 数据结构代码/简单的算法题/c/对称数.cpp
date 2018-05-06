#include <iostream>
#include <cstring>
using namespace std;
//��1995�������ĶԳ��� 
/**
*˼·�� ��һ�����ָı�ɶ����ƣ������Ƶ����ַ��������ַ����� ���ַ�����ĩβ��Ҫ'/0'��
*�ж����һ�����һ���Ƿ���ȣ��Դ����� ��ֱ��i<j 
*/
void dec2bin(int num,char result[])//ת�������� 
{
	int i=0;
	while(num>0)
	{
		int q=num/2;
		int r=num%2;
		result[i]=r+'0';
		i++;
		num=q;
	}
	result[i]='\0';
}

int is_symmetric(char input[])
{
	int n=strlen(input);
	int i=0;
	int j=n-1;
	while(i<j)
	{
		if(input[i]==input[j])
		{
			i++;
			j--;
		}
		else
			return 0;
	}
	return 1;
}

int main()
{
	int num;
	char result[20];
	for(num=1993;num>0; num--)
	{
		dec2bin(num,result);
		if(is_symmetric(result)==1)
		{
			printf("%d\n",num);
			printf("%s\n",result);			
			break;
		}
		
	}
	
	return 0;
	
}
 
