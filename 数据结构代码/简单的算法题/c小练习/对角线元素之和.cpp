#include <iostream>
using namespace std;

int main() {
	int arr[4][4];
	int i;
	int j;
	int sum;
	cout<<"���������һ�еڶ��е����е����е�ֵ��"<<endl;
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			cin>>arr[i][j];
		}
	}
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			if(i == j) {
				sum += arr[i][j];
			}
		}
	}
	cout<<"�Խ��ߵ�Ԫ��֮��Ϊ:"<<sum;
	
	
	return 0;
}
