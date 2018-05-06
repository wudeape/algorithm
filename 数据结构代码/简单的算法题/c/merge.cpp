#include <stdio.h>
#include <stdlib.h>
//������������ϲ��������γ�һ����˳������顣
//�㷨����i��j�ֱ�ָ����������ĵ�һ��Ԫ�أ�ֱ��iС�ڸ�����ĸ�����jС�ڸ�����ĸ������Ƚ�ָ��i��jԪ�صĴ�С��
//��С���Ǹ�Ԫ�طŽ�arr�����У��±�+1  �����ĸ�����ִ����һ�κ�kҪ+1
//�����ıȽ���֮������ĸ�����ʣ�µ�Ԫ��δ��д��arr���飬��ô��while���д��arr����
 

 
void merge(int* nums1,int m,int* nums2,int n){
	int *arr=(int *)malloc(sizeof(m+n));
	int i=0;
	int j=0;
	int k=0;
	while(i < m && j < n){
		if(nums1[i]<nums2[j]){
			arr[k]=nums1[i];
			i++;
		}
		else{
			arr[k]=nums2[j];
			j++;
		}
		k++;
	}
	while(i<m){
		arr[k]=nums1[i];
		i++;
		k++;
	}
	while(j<n){
		arr[k]=nums2[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++){
		nums1[i]=arr[i];
	}
}

void printfArray(int *nums1,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d   ",nums1[i]);
	}
	printf("\n");
}


int main(){
	int nums1[100]={3,5,6,7,44,66,99};
	int nums2[4]={1,4,8,9};
	
	merge(nums1,7,nums2,4);
	printfArray(nums1,11);
	
	return 0;
}




