#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
����һ������Ϊn�����飬������һ�����ֳ��ֵĴ�������Ϊn/2���ҳ��������
��ʵ����һ�����ֳ��ֵĴ�����������һ��ĳ��ȣ� 
�㷨���������ݽṹ�е�ѹջ�ͳ�ջ�ķ��������ʣ�µ�Ԫ�ؾ��ǳ��ֵĴ�������Ϊn/2�� 
���ջ�ǿյģ���ô�Ȱ����ݴ��ȥ��Ȼ������������������ݣ�ֻҪ����ջ�е����ݺͱ����е����ݲ�һ����
��ô�ͳ�ջ�� �������ͬ�ģ���ô��top+1
��ʵ����׽ס���ֳ��ֵĴ�����������һ��ĳ����������֡� 
�����������ֵĴ����Ǵ���������鳤�ȵ�2/1����ô������µĿ϶��������

 
*/
int majorityElement(int* nums, int numsSize){
	int* stack = (int*)malloc(sizeof(numsSize));
	int top = -1;
	for(int i=0; i<numsSize; i++){
		if(top == -1){
			stack[++top] = nums[i];
		}
		else if(stack[top] == nums[i]){
			stack[++top] = nums[i];
		}
		else{
			top--;
		}
	}
	return stack[0];
}





//��ʵ��û�б�Ҫ������ջ���洢�����Ԫ�صģ���Ϊջ��ŵ�Ԫ�ض���һ���ģ�
//���Կ���ֻ��count����ʾ����ջ ��cand��ʾ�洢��ջ��Ԫ�� 
//count��ʾ������ջ������ֶ��ٴ� 
//�Ż��ռ临�Ӷȣ�
int majorityElement(int *nums, int numsSize){
	int cand;
	int count=0;
	int i;
	for(i=0;i<numsSize;i++){
		if(count == 0){
			cand = nums[i];
			count++;
		}
		else if(cand==nums[i]){
			count++;
		}
		else{
			count--;
		}
	}
	return cand;
} 




int main() {
	int nums[]={1,3,3,3,2,3,4};
	int result=majorityElement(nums,7);
	printf("%d\n",result);
	return 0;
}
