#include <iostream>
using namespace std;

//��һ�����ֵĸ�����λ�ϵ�����������ֱ��ֻʣ��һ��һλ��
//���Ⱦ��ǰ����ֲ��ϲ�һλ������%10�ķ�������ÿλ����ӵ�sum����ȥ��ֱ�������û�������
//Ȼ��sum����ʱ��sum�п����Ǵ���0�ģ�����ô��Ҫ�����жϣ���sum�� while(sum>=10)�жϣ�
//�������0�����ظ��ϸ����� 

int sumDigits(int num) {
	int sum = 0;
	
	while(num != 0){
		int d = num%10;
		sum = sum+d;
		num = num/10;
	}
	
	return sum;//������ǰ�һ�����ĸ�����λ�ϵ���������������sum 
}

//������������10����ô���ظ�ִ������ĺ����� 

int addDigits(int num){
	
	while( num >= 10){
		  num = sumDigits(num);
	}
	
	return num;
}

int main(){
	
	int num = addDigits(721);
	
	cout<<num;
	
	return 0;
}

/*
ֻҪ������Ǵ���10�ģ��ҾͰ����ֽ⣬��while��䣬���е�������һ����������
 
*/
