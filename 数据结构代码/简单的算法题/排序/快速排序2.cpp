#include <stdio.h>


/**
*�㷨����һ����������ұ�һ������Ϊ֧�㣬��i��j��0��ʼ�������������Ԫ�ر�֧��С����ôi��j������ʵ��û�б任�� 
*���Ԫ�ر�֧�����ôi��+1 
*��ʱi����j��ǰ�棬�ж�iָ���Ԫ�ش�С 
*Ŀ�ľ��Ǳ�֤j����߱�֧��С��i���ұ߱�֧��� 
*���֧���jָ���Ԫ�أ���i������֮�󣩻���  
*������һ�¿��������� 
*/

int partition(int arr[], int L, int R) {
	int pivot = arr[R];
	int i;
	int j = L;
	for (i = L; i < R; i++) {
		if (arr[i] < pivot) {
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			j++;
		}
	}
	int temp = arr[j];
	arr[j] = arr[R];
	arr[R] = temp;
	return j;
}

void quickSort(int arr[], int L, int R) {
	if(L < R) {
		int M = partition(arr, L, R);
		quickSort(arr, L, M-1);
		quickSort(arr, M+1,R);
	}
}


int main() {
	int arr[] = {3,6,8,1,4,5};
	quickSort(arr, 0, 5);
	 
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);		
	}
	printf("\n");
	return 0;
}
