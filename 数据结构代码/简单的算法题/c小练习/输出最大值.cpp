#include <iostream>
using namespace std;

int main() {
	int max = 0;
	double average = 0;
	double sum = 0;
	int n;
	cout<<"������Ҫ����ĸ�����";
	cin>>n; 
	cout<<endl;
	cout<<"������ֵ��";
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	max = arr[0];
	for(int i=0; i<n; i++) {
		sum += arr[i];
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	average = sum / n;
	cout<<"����ƽ���ֵ��У�";
	for(int i=0; i<n; i++) {
		if(arr[i] < average) {
			cout<<arr[i]<<"    ";
		}
	}
	cout<<endl;
	
	cout<<"���ֵ�ǣ�"<<max;
	
	return 0;
}
