#include <iostream>
using namespace std;
//�㷨:
//     ��һ���������Լ�����������������ֱ࣬������Ϊ0�����������Ϊ0�����ó������������࣬
//     ����������Ϊ0����ô��ǰ�ĳ����������Լ�� 
//     �������Ĵ�С�������  ���磺5��35   5%35=5����� 35%5=0��  ���Լ��Ϊ5 
int gcd(int a,int b)
{
	int r=a%b;//������Ϊ��ʱ��b�������Լ�� 
	if(r==0)
		return b;
	else 
		return gcd(b,r);//ʵ���Ͼ���b��r���� 
} 

int main()
{
	int a, b;
	cin>>a>>b;
	int g=gcd(a,b);
	cout<<g<<endl;
	return 0;
	 
}
