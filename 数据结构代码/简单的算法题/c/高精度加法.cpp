#include <stdio.h>
#include <iostream>
#include <string.h> 
using namespace std;

/*
*�����ܴ�ܴ������ӣ�int֮�����Ӳ������� 
*������װ��һ���ַ����飬����ַ�����ĳ��ȣ�����������һλ���������������һλ���� num[j] = num[n-i]��ֱ����n������ 
*Ȼ������ǰ�����ȫ�����ַ�0 
*����ַ�����ת��Ϊ���� 
*��λ���⣺�������������Ǵ���0�ģ���ôǰһλnum��i-1���ͼ���num/10 ����ǰnum��ȡnum%10�� 
*/ 



 
void move_num(char num[])
{
	int n=strlen(num);//������ַ����ĳ��� 
	int j=100;
	int i;
	for(i=1; i<=n; i++)//����֪�������һλ�����鳤���е����һλ������ 
	{
		num[j] = num[n-i];
		j--;
	}
	while (j>=0)//������ǰ����������ַ�0 
	{
		num[j]='0';
		j--;
	}
}

void conv_num(char num[])//���ַ�ת��Ϊ���� 
{
	int i;
	for(int i=0;i<=100;i++)
		num[i]=num[i]-'0';
}

void add(char num1[],char num2[] )
{
	int i;
	int sum;
	for(i=100;i>0;i--){ 
		num1[i] = num1[i] + num2[i];//��λ��Ӽ� 
		if(num1[i] >= 10){
			num1[i-1] += num1[i]/10;//��λʱ����� 
			num1[i] = num1[i]%10;
		}
	} 
}

void printfNum(char num[])
{
	int i;
	while(num[i]==0)
		i++;
	for(;i<=100;i++)
		printf("%d",num[i]);//��ӡ�������� 
}

int main()
{
	char num1[101];
	char num2[101];
	scanf("%s",num1);
	scanf("%s",num2);
	move_num(num1);
	move_num(num2);
	conv_num(num1);
	conv_num(num2);
	add(num1,num2);	
	printfNum(num1);
	return 0;
}
