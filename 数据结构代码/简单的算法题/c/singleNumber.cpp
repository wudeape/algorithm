#include <stdio.h>

/**
*����һ�����飬��������һ�������⣬�������ֶ����������Ρ�
������ֻ����һ�ε������ҳ�����
*�㷨�����������Ԫ�س��ֵĴ��� ����arr[�ڼ�����]�������������һ�飬�������Ƿ����Σ����ֻ����һ�Σ���ô���������singlenumber 
*@n n��ʾ��������ĳ��ȣ�
*@k k��ʾ�������������������ֵĴ��� 
*/

int countLetter(int* arr, int n, int k) {
	int i;
	int c=0;
	for (i = 0; i < n ; i++) {
		if(arr[i] == k) {
			c++;
		}
	}
	return c;
}

int singleNumber (int* nums, int numsSize) {
	int i;
	for (i = 0 ; i < numsSize; i++) {
		int count = countLetter(nums, numsSize ,nums[i]);
		if (count == 1){
			return nums[i];
		}
		
	}
	return 0;
}
/**
*�㷨�Ż���
*ʹ����������������ԭ�������������ȣ�ʹ��^���������ô���Ϊ0
*�㷨�����������һ�飬i��1��ʼ���������Ԫ��ȫ��^��ʣ�µ�������ֻ����һ�ε�
*/

int singleNumber(int* nums, int numsSize) {
	int k = nums[0];
	int i;
	for (int i = 1; i < numsSize; i++) {
		k = (k ^ nums[i]);
	}
	return k;
}
 

int main() {
	int arr[7]={5,7,4,4,7,8,8};
	int r = singleNumber(arr, 7);
	printf("%d\n", r);
	return 0;
	
}
