#include <iostream>
using namespace std;
/*
��"1��+4��(2��ƽ��)+9��(3��ƽ��)��ֵ 
˼·������f1��������ƽ��ֵ��Ȼ����f2��������˻�
	  ��ƽ��ֵ����f2�У�������������ĳ˻������˻���ֵ���ظ�f1����,f1��ֵ�ٷ��ظ��������� 
	  ���������sum�ۼӼ��� 
	  
	 


*/

long f1(int p) {
	int k;
	long r;
	long f2(int );
	k = p * p;
	r = f2(k);
	return r;
	
} 

long f2 (int q) {
	long c = 1;
	int i;
	for (i=1; i<=q; i++) {
		c = c * i;
	}
	return c;
}

int main() {
	int i;
	long s = 0;
	for (i=1; i<=3; i++) {
		s = s + f1(i);
	}
	cout<<"1��+4��+9��="<<s<<endl;
	return 0;
}
