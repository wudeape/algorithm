#include <iostream>
using namespace std;

/*
*˼·��ÿһ���ҵ��������Ԫ�ص��±꣬Ȼ�������һ��Ԫ�ؽ��� 
*		��while��n>1��ѭ��  n-- 
*
*
*
*/


int findMaxPos(int arr[],int n)
{
	int max=arr[0];
	int pos=0;//��¼���ֵ�ı��� 
	for (int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			pos=i;//��ȡ�����ֵ��λ�� 
		}
	}
	return pos;
}

void selectionSort(int arr[],int n)
{
	while (n>1)//ֱ��nΪ1ʱ����ֹͣ���� 
	{
		int pos=findMaxPos(arr,n);
		int temp=arr[pos];//λ�ò��Ͻ��� 
		arr[pos]=arr[n-1];
		arr[n-1]=temp;
		n--;//
	}
}

int main()
{
	int arr[]={5,32,7,89,2,3,4,8,9}; 
	selectionSort(arr,9);
	for (int i=0;i<9;i++)
	cout<<arr[i]<<endl; 
}
