#include <iostream>
using namespace std;

typedef struct library {
	char name[20];
	char autor[20];
	char adress[20];
	double price;
}book;

void show(book book2[]) {
	for (int i=0; i<2; i++) {
		cout<<"��"<<i<<"����ļ۸���"<<book2[i].price<<endl;
		cout<<"��"<<i<<"�����������"<<book2[i].name<<endl;
		cout<<"��"<<i<<"����ĳ�������"<<book2[i].adress<<endl;
		cout<<"��"<<i<<"�����������"<<book2[i].autor<<endl;
		cout<<endl;
		cout<<endl;
			

	}
}

int main() {
	book book2[5];
	double sum = 0;
	int arr[5];
	for (int i=0; i<2; i++) {
		cout<<"������������ƣ�";
		cin>>book2[i].adress;
		cout<<"��������:";
		cin>>book2[i].autor;
		cout<<"����۸�";
		cin>>book2[i].price;
		cout<<"�����������";
		cin>>book2[i].name;
		sum+=book2[i].price;
		cout<<endl;
		cout<<endl;
	}
	cout<<"2�����ƽ���۸�"<<sum/2<<endl<<endl;
	show(book2);

	
	return 0;
}
