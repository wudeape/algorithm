#include <iostream>
using namespace std;

/*
*ð�������㷨��
*			 i��0��ʼ��i��i+1�Ƚϣ����i>i+1����ô�ͻ��� 
*			 i�������ӣ�ֱ��i<n-1��n������Ԫ�صĸ�����n-1���������һ��Ԫ�أ����i=n-1����ôi+1��û��Ԫ���ˣ� 
*			 һ������������������Ԫ�������ֵ�������������� 
*		     1�� ��n����ʼ��ÿ�ź�һ�����ֵ��i�ͼ�1��ֱ��ʣ��һ��Ԫ�� 
*			 2��ֱ�ӵݹ飬����L��R��������±꣩���ŵ�һ����i<=R-1���ݹ����bubble��L,R-1�� 
*/ 



void  bubble(int arr[],int n)
{
	int i;
	int temp;
	for (i=0;i<n-1;i++)//ֻ��Ҫn-1�ν����� 
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}

void bubbleSort (int arr[],int n)
{
	int i;
	for (i=n;i>=1;i--)//��n���ŵ���һ�� 
	{
		bubble(arr,i);
	}
}


//���ֱȽϺ���� 
void bubble(int arr[],int L,int R)
{
	if(L==R)
	;
	else
	{
		int i;
		for(i=L;i<=R-1;i++)//iֻ�ܵ���R-1 
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		bubble(arr,L,R-1);//��һ�����ź�R 
	}
}


int main()
{
	int arr[]={2,3,4,511,66,777,444,555,9999};
	bubbleSort(arr,8);
	for (int i=0;i<9;i++)
		cout<<arr[i]<<endl;
	return 0;
}
