#include <iostream>
using namespace std;




/**
*���������㷨�� 
*	��һ������Ԫ�ز���һ���Ѿ��ź�˳������� 
*	��i��nָ���Ԫ�أ���������ֵ������key��
*   �ø�Ԫ����ǰ���ź�˳����������Ƚϣ����ǰ���Ԫ�رȸ�key����ôǰ���Ԫ�����󸲸�
*   arr[i]=arr[i-1];i--��  ��ʱi�Ѿ���i-1��λ������ 
*   i���ϼ��٣�ֱ������ǰ���Ԫ�ر�keyС������i�Ѿ�����0���޷���ǰ��������Ƚϣ�
*	���ֻ��Ҫ��key��ֵ��arr[i]��	 
*/
 
void insert(int arr[],int n)
{
	int key=arr[n];
	int i=n;
	while(arr[i-1]>key)
	{
		arr[i]=arr[i-1];
		i--;
		if(i==0)
		break;
	}
	arr[i]=key;
}

void insertionSort(int arr[],int n)
{
	int i;
	for (i=1;i<n;i++)
	{
		insert(arr,i);
	} 
}

//���õݹ��
void InsertSortArray(int arr[],int n)
{
	for(int i=1;i<n;i++)// ѭ���ӵڶ�������Ԫ�ؿ�ʼ 
	{
		int temp=arr[i];//temp���Ϊδ����ĵ�һ��Ԫ�� 
		while(i>=0&&arr[i-1]>temp)//��temp��������Ԫ�شӴ�С�Ƚϣ�Ѱ��tempӦ�����Ԫ�� 
		{
			arr[i]=arr[i-1];
			i--;
		}
		arr[i]=temp;
	}
		
} 

//�������Ϊ 
main()
{
	int arr[]={99,2,3,1,22,88,7,77,54};
	int i;
	insertionSort(arr,9);
	for(int i=0;i<9;i++)
		cout<<arr[i]<<endl;
	return 0;
} 
