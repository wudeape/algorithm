#include <iostream>
#include <cstring>
/*
*д��һ�γ��� ��������a+b����a-b֮��ģ��ܹ������ 
*�㷨��
*		�������һ���ַ���Ҫ���з��ţ��Ӻźͼ��ţ������֣��ķ��࣬��������������ַ�Ҫ�ı�Ϊ����������		    
*		�жϵ�ǰ���ǼӺŻ��Ǽ��� return  a+b����a-b 
*		�������㣬ʵ�ʾ��ǿ��ж��ٸ��������whileѭ����ֱ�������ȫ���ù� 
*		��һ��result���������0��Ԫ�أ����û���������ֱ�����result 
*
*/

int values[100];
char opts[100];
int countV=0;
int countO=0;

void tokenize(char buffer[])
{
	int i;
	int n=strlen(buffer);
	for(i=0;i<n;i++)
	{
		if(buffer[i]>='0'&&buffer[i]<='9')
		{
			values[countV]=buffer[i]-'0';
			countV++;
		}
		else
		{
			opts[countO]=buffer[i];
			countO++;
		}
	}
}

int calculate(int a,int b,char o)
{
	if(o=='+')
		return a+b;
	else
		return a-b;
}

int computeAll()
{
	int result=values[0];
	int i=1;
	int j=0;
	while(j<countO)
	{
		int a=result;
		int b=values[i];
		char o=opts[j];
		result=calculate(a,b,o);
		j++;
		i++;
	}
	return result;
}

int main()
{
	char buffer[1024];
	int i;
	scanf("%s",buffer);
	
	tokenize(buffer);
	int result=computeAll();
/*	for(int i=0;i<countV;i++) { 
		printf("%d\n",values[i]);
		
	}	
*/							
	//�����Ƿ���¼������			
/*		for(int i=0;i<countO;i++) { 
			printf("%c\n",opts[i]);
		}	
*/								
	//�����Ƿ���¼���ַ� 
	printf("%d\n",result);
	return 0;
}

