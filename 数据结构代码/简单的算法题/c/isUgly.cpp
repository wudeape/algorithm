#include <iostream>
using namespace std;

//�ж�һ�������ǲ���ugly number���ֽ������������ֻ��2��3��5��3�����֣�
//�������2,3,5��ɵģ���ô��������ϳ���2,3,5�����ó�����1����������Ǵ�����2,3,5��ɵ�
 



//��������ֵ��0�Ļ�����ô��������ͻ���ѭ����

 
bool isUgly(int num){
	if(num<=0){
		return false;
	}
	else{
		while(num%2==0){
			num=num/2;
		}
		while(num%3==0){
			num=num/3;
		}
		while(num%5==0){
			num=num/5;
		}
		if(num==1){
			return true;
		}
		else{
			return false;
		}
	}
}
//���һ����%2��%3��%5����ֵ��1�Ļ�����ô������������ɸ�2,3,5���ɵġ��� 
int main(){
	if( isUgly(30) ){
		cout<<"�������Ugly num";	
	}
	else{
		cout<<"���������Ugly num";
	}
	return 0;
	
}
