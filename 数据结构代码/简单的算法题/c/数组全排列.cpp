#include <iostream>
using namespace std;


/*
* ȫ���о��ǽ������ܹ���ϵ�������������г��� 
*�㷨��    
*       �������ÿ�������䵱һ�ε�һλ��Ȼ��ݹ���ú��� ȫ����p+1��q
*		����ʱ��p����Զ��λ�ģ�i++.    i��p����    �ܹ�ʹ�����Ԫ�ض���һ����λ 
*		��Ϊ��ֹ�ظ�ȫ���У����Խ����ֵ������Ҫ�������� 
*		�ݹ���ھ��ǣ�ֻ��һ��Ԫ��ʱ��ȫ���о������Լ� 
*		
*/



void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
		
}

void printfArray(int arr[],int n)
{
	int i;
	for (i=0;i<n;i++)
		cout<<arr[i];
	cout<<endl;
} 

void perm(int arr[],int p,int q)
{
	if(q==p)
		printfArray(arr,q+1) ;
	else
	{
		int i;
		for(i=p;i<=q;i++)
		{
			swap(arr,p,i);
			perm(arr,p+1,q);
			swap(arr,i,p);
		}
	}	
}

int main()
{
	int arr[3]={1,2,3};
	perm(arr,0,2);
	return 0;
}
