#include <iostream>
using namespace std;
/*
*˼·�� ����һ���ṹ�壬�������������ָ���� 
* 		ָ������ָ���Լ����ݽṹ���ָ�� 
*		Ϊ���ݸ�ֵ��ÿһ��ָ����ָ�������һ���ڵ�ĵ�ַ 
*		p=p->pNext ����ָ����һ���ڵ�ĵ�ַ 
*
*/


typedef struct node
{
	int num;//������ 
	struct node *next;//ָ���Լ����ݽṹ��ָ�� 
}NODE;


main()
{
	NODE n1,n2,n3;//Ϊ������ֵ 
	n1.num=5;
	n2.num=7;
	n3.num=9;
	
	n1.next=&n2;//next��ָ�����ͣ�����Ҫȡ��ַ�� 
	n2.next=&n3;
	n3.next=NULL;
	NODE *p=&n1;//����һ��ָ��ָ��n1 
	while (p!=NULL)
	{
		cout<<p->num<<endl;
		p=p->next;//ָ����һ��Ԫ�� 
	} 
	return 0; 
} 
 
