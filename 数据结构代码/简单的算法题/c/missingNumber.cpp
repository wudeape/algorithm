#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
*����һ������{0, 1, 2, 3 .., n}��������һ������ȱʧ�� ��������ȱʧ�������ҳ���
*�㷨��������Ԫ�س��ֵĴ�����ա�Ȼ��������飬�����ֵ��������һ�������У���������Ϊ������±�д�����顣
//����Ÿ����ѳ��� 
*@numsSize �����4�����ֵĻ���ʵ�ʵ�����5������Ϊȱʧ��һ������ô������±��Ӧ�õ�arr��5���� 
* +1���ǰ����еı���һ�飨����missing�Ǹ��������ڶ���forѭ��û�м�һ������Ϊ����ֻ��4������ȱ��һ���ģ� 
*/
int missingNumber(int* nums,int numsSize) {
	int* arr = (int*)malloc(sizeof( numsSize+1 ));
	int i;
	for (i = 0; i < numsSize+1; i++) {
		arr[i] = false;
	}
	for (i = 0; i < numsSize; i++) {
		int index = nums[i];
		arr[index] = true;
	}
	for (i = 0;i < numsSize+1; i++) {
		if (arr[i] == false) {
			return i;
		}
	}
	return 0;
}


/**
*�㷨�Ż����ռ临�Ӷ� 
*���õȲ���͹�ʽ�������Ԫ�����������Ȼ��������Ԫ��һ��һ����ȥ��ʣ�µľ���missing��ֵ 
*
*/ 

//int missingNumber(int* nums, int numsSize) {
//	int sum = numsSize * (numsSize + 1) / 2;
//	int i;
//	for (i = 0; i < numsSize; i++ ) {
//		sum = sum - nums[i];
//	} 
//	return sum;
//}



int main() {
	int arr[4] = {1,0,2,4};
	int r = missingNumber(arr,4);
	printf("%d\n",r);
	return 0;
} 
