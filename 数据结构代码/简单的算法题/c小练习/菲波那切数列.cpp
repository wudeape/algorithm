#include <iostream>
using namespace std;
//�Ʋ��������У�fn=fn-1+fn-2   f1 = 1; f2 = 1; 
int main() {
	double f1;
	double f2;
	int i;
	f1 = f2 = 1;
	for (i=1; i<=10; i++) {
		
		cout<<"     "<<f1<<"     "<<f2;
		f1 = f1 + f2;//�����f1ָ���ǵ��������� 
		f2 = f2 + f1;//�����f2ָ���ǵ��ĸ����� 
		//��������Եó���f1��f2�ǻ᲻�ϸı�ģ�����ֵ��һ·�������� 
		//����ÿ���4�����־ͻ���    
		if(i % 2 == 0) {
			cout<<endl;
		}
	}
	
	
	
	
	return 0;
}
