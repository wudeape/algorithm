#include <iostream>
using namespace std;


/*
*  �㷨�� 
*		����������L��R�ֱ�ָ���������λ�����һλ���ã�L+R��/2��Ϊ֧��	
*		Ŀ������ߵ���С�ģ��ұߵ��Ǵ�� 
*		while��i<=j��ֻҪi��jû�д�����һֱѭ����
*		ֱ���ҵ�i�Ǳ߱�֧��������ֱ���ҵ�j�Ǳ߱�֧��С����
*		������ߺ��ұ� ������֧�����߾���С��֧��ģ��ұ߾��Ǵ���֧��� 
*		�ݹ���ھ��ǣ���L<j) (i<R)�ݹ���������������ұ����������� 
*/


 
void quicksort (int arr[],int L,int R)
{
	int i=L;//L��R�ֱ������������˺����Ҷ� 
	int j=R;
	int pivot =arr[(L+R)/2];
	
	while(i<=j)
	{
		while (arr[i]<pivot)//ֱ���ҵ���֧���ʱ����ֹͣ 
			i++;
		while (arr[j]>pivot)//ֱ���ҵ���֧��Сʱ����ֹͣ 
			j--;
		if(i<=j)//�ڴ�֮ǰ�Ž��н���	
		{
			int temp=arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	if(L<j)//�ݹ���� 
		quicksort(arr,L,j);//�ݹ� 
	if(i<R)
		quicksort(arr,i,R);
}

int main()
{
	int arr[]={1,4,5,67,2,7,8,6,9,44};
	quicksort(arr,0,9);
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
