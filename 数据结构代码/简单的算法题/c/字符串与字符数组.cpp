#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void sort(char** arr,int n)
{
	int i,j;
	for(i=n-1;i>0;i--)
		for(j=0;j<=1;j++)//ð������ 
			if(strcmp(arr[j],arr[j+1])>0)//�Ƚ��ַ�����Сֻ����strcmp 
				{
					char *temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
} 

int main()
{
	int count;
	int i;
	
	char** arr=(char **)malloc(sizeof(char*) * 3);//����һ���ַ������� 
	for(i=0;i<3;i++)                              //char *��һ���ַ��� 
	{											  //char **��һ���ַ�������  mallocǰ��ǿ��ת�� 
		arr[i]=(char *)malloc(sizeof(char)*10);   //Ϊ �ַ������ٿռ� 
		scanf("%s",arr[i]);
		
	}
	sort(arr,3);
	for(i=0;i<3;i++)
		printf("%s\n",arr[i]);
	
	return 0;
	
}
