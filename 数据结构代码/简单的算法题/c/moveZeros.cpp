#include <stdio.h>

/**
*��Ŀ����һ�������Ԫ�أ�������0�ģ������������� 
*�㷨�����������һ�Σ��������0����ôzero+1�� 
*  �����ǰ��Ԫ�ز�����0����ô�ѵ�ǰԪ����ǰ���ƣ��Ƶ�λ���պ���arr[i-zeros]
* ������������Ԫ�ظĳ�0 ��zero��С�йأ� 
*ʵ���Ͼ�������0֮�󣬾Ͱ������Ԫ����ǰ��
*������2��0������������ǰ���ƣ�������0��Ȼ�������Ԫ���ٶ���һλ���� 
*/

void moveZeros(int arr[], int n) {
	int zeros = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] != 0) {
			arr[i-zeros] = arr[i];
		}
		else {
			zeros++;
		}
	}
	
	i = n - zeros;
	while (i < n) {
		arr[i] = 0;
		i++;
	}
}

/**
*����һ���㷨���������Ϊ�����֣�j֮ǰ��û��0��j��i֮��Ķ���0��i����Ļ�û���� 
*���iָ���Ԫ�ز�����0����ô��iָ���Ԫ�غ�jָ���Ԫ�ؽ����� 
*���iָ���Ԫ�ص���0����ô������i��j�ķ�Χ��i++ 
*/

void moveZeros2(int arr[], int n) {
	int j = 0;
	int i;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
	}
}


int main() {
	int arr[8]={1,3,5,3,3,0,7,0};
	moveZeros2(arr, 8);
	int i;
	for(i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}




