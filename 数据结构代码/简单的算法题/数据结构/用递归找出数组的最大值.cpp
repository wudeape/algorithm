#include <iostream>
using namespace std;



//�ܶ�ʱ����ǰ������Ϊ�����֣�Ȼ��ݹ�һ�󲿷ֵ����⣬�Ӷ��ҵ���� 
/* 
int findMax(int arr[],int n)
{
	if(n==0)
		return arr[0];
	if(findMax(arr,n-1)>arr[n])//findMax()����һֱѭ�� 
		return findMax(arr,n-1);//������������֣�һ����һֱѭ���ҳ����ֵ
								//һ���־���arr��n�� 
	else 
		return arr[n];
		
} 
*/                   //���ַ��� 
int findMax(int arr[], int L,int R)
{
	if(L==R)
		return arr[L];
	else
	{
		int a=arr[L];
		int b=findMax(arr,L+1,R);
		if (a>b)
			return a;
		else 
			return b;
	}
} 



	 
int main()
{
	int arr[9]={1,52,3,4,5,6,7,8,44};
	int g=findMax(arr,0,8);//8��������±� 
	cout<<g;
	return 0;
}
