#include <iostream>
using namespace std;
/*
*˼·��ת�þ���[i][j]��[j][i]ת�� 
*��Ϊ���ݵ�0��û��Ԫ��ת������1��ֻ��һ����ת�ã���2����������ת�ã����磺��һ���еĵ�0����Ҫת�� ���Դ�����
*����j<i�����j<=n��ô���м�������α�ת���� 
*/

void fun(int arr[][3],int n);


int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9,};
	fun(arr,3);	
	return 0;
}

void fun(int arr[][3],int n){
	int t;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			t=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=t;
	    }
	    
	}
	cout<<"����������飺"<<endl;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		printf("\n");
	}
	
		
}
 
