#include <stdio.h>
#include <stdbool.h>
//�ж�һ�����ǲ���2��ĳ�η� 
//�㷨�������2��ĳ�η�����ôһֱȡ�࣬�������1 
//���n==0������ô�ͻ���ѭ��

 
bool isPowerOfTwo(int n){
	if(n==0){
		return false;
	}

	while(n % 2 == 0){
		n=n/2;
	}
	if(n == 1){
		return true;
	}
	else{
		return false;
	}
}
//����һ���߼������������
//�㷨�� 2��n�η�����һ���ص㣬�����ƶ���1000000
// ��� 2��n�η��Ķ�����-1��2��n�η�����������λ�����㣬��ô�ó��Ľ���϶���0 
//�����������������2��ƽ�����ص㡣�� 

bool isPowerOfTwo(int n) {
	if(n <= 0){
		return false;
	}
	else if(n == 1){
		return true;
	}
	else{
		if( (n & (n-1) ) == 0){
			return true;
		}
		else{
			return false;
		}
	}
}

int main() {
	printf("%d\n",isPowerOfTwo(16));
	return 0;
}
