#include <iostream>
using namespace std;

/*
*˼·����k��ֵ��i����i�ĺ���һ�����ǰ��һ�ʵ���Ͼ�����ǰ�ƣ�ֱ�������������� 
*���m��1���ɡ� 
*
*/

int main() {
	int const N = 10;
	int arr[N] = {2,6,9,12,32,45,54,57};
	int m = 8;
	int k;
	int i;
	
	cout<<"��������Ҫɾ����Ԫ���±�";
	cin>>k;
	
	for(i=k; i<N-1; i++) {
		arr[i] = arr[i+1];
	}
	m--;
	
	for (i=0; i<m; i++) {
		cout<<arr[i]<<"  ";
		
	}
	cout<<endl;
	
	
	
	return 0;
} 
