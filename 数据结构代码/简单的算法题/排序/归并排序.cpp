#include <stdio.h>


/*
*�㷨����һ�������Ϊ�����֣��õݹ��и��󲿷ֺ��Ҳ��֣�ֱ���ź�˳�� 
*		�ٽ�������˳�������ϲ���һ������ 
*
*/ 

void merge(int arr[],int L,int M,int R)
{
	int LEFT_SIZE=M-L;//��ߵĸ��� 
	int RIGHT_SIZE=R-M+1;//�ұߵĸ��� 
	int left[LEFT_SIZE];
	int right[RIGHT_SIZE];
	int i,j,k;
	
	for(i=L;i<M;i++)
		left[i-L]=arr[i];
	for(i=M;i<=R;i++)
		right[i-M]=arr[i];	 
	i=0; j=0; k=L;
	while(i<LEFT_SIZE&& j<RIGHT_SIZE)
	{
		if(left[i]<right[j])
		{
			arr[k]=left[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=right[j];
			j++;
			k++;
		}
	}
	while(i<LEFT_SIZE) //����ұߵ����Ѿ�ȫ������������ˣ�ʣ����ߵ�����������ӵ��������� 
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<RIGHT_SIZE)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int L,int R)
{
	if(L==R)
		return;//���ֻ��һ������ô�Ͳ��������� 
	else
	{
		int M=(L+R)/2;//ȡ�м���� 
		mergeSort(arr,L,M);//��߲��Ϸָ� 
		mergeSort(arr,M+1,R);//�ұ߲��Ϸָ� 
		merge(arr,L,M+1,R);//M+1 
	}	

}

int main()
{
	int arr[10]={4,6,2,557,8,4,7,5,9,};
	int L=0;
	int R=9;
	mergeSort(arr,L,R);
	int i;
	for(i=0;i<=R;i++)
		printf("%d  ",arr[i]);
	return 0;
	
}


