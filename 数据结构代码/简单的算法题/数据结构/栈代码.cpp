#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*
*ջʼ����ѭ���Ƚ������ԭ�� 
*�����ջ�ṹ�壬ʵ���Ͼ�������ָ�룬������ָ��ʱ��ָ��ڵ�ģ��ֱ�����ջ����ջβ 
*
*
*/ 



//���ﴴ��һ���ṹ�������������������ָ����
 
typedef struct Node
{
	int data;
	struct Node* pNext;
} NODE,*PNODE;
//���ﴴ��һ���ṹ��������Ƕ���Ϊָ��ջ����ջβ������ָ�� 
typedef struct Stack
{
	PNODE pTop;
	PNODE pBottom; 
}STACK, *PSTACK;

void traverse(PSTACK pS);
void push(PSTACK pS,int val);
void init(PSTACK pS); 
bool empty(PSTACK pS);
bool pop(PSTACK pS,int* pVal);
void clear(PSTACK pS);

int main(void)
{
	int pVal;
	STACK S;
	init(&S);
	push(&S,2);
	push(&S,6);
	push(&S,7);
	push(&S,8);
	push(&S,9);
	traverse(&S);
	pop(&S,&pVal);
	traverse(&S);
	return 0;
}
//��ʼ��
//����һ��ͷ��㣬��pTop��һ��ָ��ṹ���ָ�룩ָ��ͷ��� 
//��������ֵ���ײ�����������ָ��������ΪNULL 
void init(PSTACK pS)
{
	pS->pTop=(PNODE)malloc(sizeof(NODE));
	if(pS->pTop==NULL)
	{
		printf("��̬�ڴ����ʧ�ܣ�\n");
		exit(-1); 
	}
	else
	{
		pS->pBottom=pS->pTop;
		pS->pTop->pNext=NULL;//ps->topָ����ǿսڵ㣬Ps->pTop->next��ʾ����ָ��սڵ���Ǹ�ָ���� 
	}
}
//ѹջ
//˼·��
//		����һ���½ڵ㣬��ֵ���½ڵ㣬���½ڵ�ָ�����洴���Ŀսڵ㣬Ȼ����ָ��ջ����ָ��ָ���½ڵ� 
// 		pNew->pNext= ps->pTop��ʾ�����½ڵ��ָ������ջ���ĵ�ַ���ܹ���ջ������ָ��ĵط���pNewָ�� 
//      ��������ջ��ָ����Ԫ�� 
void push(PSTACK pS,int val)
{
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	
	pNew->data=val;
	pNew->pNext=pS->pTop;
	pS->pTop=pNew;
	
	return;
}
//������
//		����һ��ָ���ջ����ʼ��ֻҪָ�벻��ջβ����һֱ���ѭ�� 
void traverse(PSTACK pS)
{
	PNODE p=pS->pTop;
	
	while(p!=pS->pBottom)
	{
		printf("%d  ",p->data);
		p=p->pNext;
	}
	printf("\n");
	return;
}
//ֻҪջ����ջβ��ָ������ͬ�ģ���ô���ջ�ǿյ� 
bool empty(PSTACK pS)
{
	if(pS->pTop==pS->pBottom)
		return true;
	else
		return false;
}

//��pS��ָ�� ջ��ջһ�Σ����ѳ�ջ��Ԫ�ش���pVal�β���ָ��ı����У��ɹ�����true��ʧ�ܷ���false 
//��ջʵ�ʾ���ջ����������һλ 
//˼·��  ���ȶ���һ��ָ��rָ��ջ����Ȼ��ջ�������ݴ洢����
//		��r��ָ����ֵ��ָ��ջ����ָ�루ʵ�ʾ���ջ����������һλ������ջ�ˡ� 
bool pop(PSTACK pS,int* pVal)
{
	if(empty(pS))
		return false;
	else
	{
		PNODE r=pS->pTop;
		*pVal=r->data;
		pS->pTop=r->pNext;
		free(r);
		r=NULL;
	}
		return true; 
}

//�������ջ
//˼·����pָ�����һ���ڵ㸳ֵ��q��Ȼ�����p���ڴ棬�ٽ�q���¸�ֵ��p������ѭ����ֱ��pָ����ջβ 
// 		���ջ����ջβ��ָ���ָ��սڵ� 
void clear(PSTACK pS)
{
	if(empty(pS))
		return;
	else
	{
		PNODE p=pS->pTop;
		PNODE q=NULL;
		
		while (p!=pS->pBottom)
		{
			q=p->pNext;
			free(p);
			p=q;
		}
		pS->pTop=pS->pBottom;
	}
}



