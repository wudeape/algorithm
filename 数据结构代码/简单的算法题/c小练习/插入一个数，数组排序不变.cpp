#include <iostream>
using namespace std;
/*
*��Ҫ˼·��Ҫ�����Ԫ��Ӧ�����������һ��Ѱ�ң�ֱ���ҵ�Ԫ�صĴ�С�ǱȲ����С 
*���ҵ�Ԫ�صĴ�С�ǱȲ����С ֮ǰ�����е�Ԫ�ض�Ӧ����������һλ��i���ϼ��٣� 
*���ҵ�Ԫ�صĴ�С�Ȳ����ֵСʱ�����ǾͰ�n���뵽arr��i+1������ 
*��Ϊi���������������Ԫ���в��ϱȽϵģ� 
*
*/


int main() {
	int const N = 10;
	int arr[N] = {2,6,9,12,32,45,54};
	int m = 7;
	int n;
	int i;
	cout<<"������Ҫ�����Ԫ��:";
	cin>>n;
	
	for (i=m-1; i>=0 && n<arr[i]; i--) {
		arr[i+1] = arr[i];

	}
	arr[i+1] = n;
	m++;
	for (i=0; i<m; i++) {
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
	
	
	
	
	return 0;
}
