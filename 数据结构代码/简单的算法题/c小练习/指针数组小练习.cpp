#include <iostream>
using namespace std;

int main() {
	int arr[100] = {0};
	int len;
	int average;
	int sum = 0;
	int *p;
	int *q;
		
	cout<<"���볤�ȣ�";
	cin>>len;
	
	for (int i=0; i<len; i++) {
		cin>>arr[i];
	}
	
	for (int i=0; i<len; i++) {
		sum = sum + arr[i];
	}
	p = arr;
	q = arr;
	average = sum / len;
	for(int i=0; i<len; i++) {
		if(*p < arr[i]) {
			p = arr+i;
		}
		if(*q > arr[i]) {
			q = arr+i; 
		}
	}



	cout<<"���ֵ��"<<*p<<endl;
	cout<<"��Сֵ��"<<*q<<endl;
	cout<<"ƽ��ֵ��"<<average<<endl;
	
	
	return 0;
} 
