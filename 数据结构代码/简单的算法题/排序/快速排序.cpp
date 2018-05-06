#include <stdio.h>

/*
*�㷨�� �ѵ�һ��Ԫ����Ϊ֧�㣬�ҵ�low����֧��ģ�highС��֧��ģ�Ȼ�󽻻� 
*		���ѵ�һ��Ԫ�ط���low���棬����low��ֵ 
*		�ݹ���ú������������ߣ�low��pos-1��pos+1��high 
*
*
*
*/ 




void QuickSort(int* arr,int low,int high);
int FindPos(int* arr,int low,int high);


int main()
{
	int arr[6]={5,3,-88,77,44,-1};
	int i;
	QuickSort(arr,0,5);
	for(i=0;i<6;i++)
		printf("%d   ",arr[i]);
	printf("\n");
	return 0;
}

int FindPos(int* arr,int low,int high)
{
	int val=arr[low];
	
	while(low<high)
	{
		while(low<high&&arr[high]>=val)
			--high;
		arr[low]=arr[high];
		while(low<high&&arr[low]<=val)
			++low;
		arr[high]=arr[low];
	}
		arr[low]=val;
	return low;
}



void QuickSort(int arr[],int low,int high)
{
	int pos;
	if(low<high)
	{		
		pos=FindPos(arr,low,high);
		QuickSort(arr,low,pos-1);//�����룬��� 
		QuickSort(arr,pos+1,high); //�ұ� 
	}
	return;
} 



