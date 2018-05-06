#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int num;
	struct node* next;
}NODE, *PNODE;
//����һ�����ɽڵ�ĺ��������������û�����ģ�ָ������ָ��NULL 
PNODE new_node(int num) {
	PNODE n=(PNODE)malloc(sizeof(NODE));
	n->num = num;
	n->next = NULL;
	return n;
}
//��һ������ת�������� 
int main() {
	
	int A[5] = {2, 5, 4, 7, 8};
	int i;
	PNODE head = new_node(A[0]);
	PNODE p = head;
	for (i=1; i<5; i++) {
		PNODE n = new_node(A[i]);
		p->next = n;
		p = p->next;
	}
	//����ڵ�
	//n1->next = p->next;     ��������ԭ��pָ���ָ��ı��n1ָ�� �ܹ���pԭ��ָ��Ľڵ�����Ķϵ� 
	//p->next = n1;           pָ��n1 
	p = head;         	 //����p��λ���Ѿ����ˣ�����Ҫ���� 
	while (p->num != 4) {
		p = p->next;
	}
	PNODE n1 = new_node(6);
	n1->next = p->next;
	p->next = n1;
	
	//ɾ���ڵ�
	//Ҫ�ҵ�ɾ��Ԫ��ֵ��ǰһ��λ�� 
	p = head;			//����p��λ���Ѿ����ˣ�����Ҫ���� 
	NODE* pr;
	while (p->next->num != 8) {
		p = p->next;
	} 
	pr = p->next;
	p->next = p->next->next;
	free(pr);
	
	
	p= head;
	while (p != NULL) {
		printf("%d\n", p->num);
		p = p->next;
	}
	
	return 0;
}
