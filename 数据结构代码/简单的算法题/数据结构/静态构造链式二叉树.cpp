#include <stdio.h>
#include <malloc.h>

struct BTNode
{
	char data;
	struct BTNode* pLchild;//������ 
	struct BTNode* pRchild;//������ 
}; 

struct BTNode* CreateBTree();
void PreTraverseBTree(struct BTNode* pT);

int main()
{
	struct BTNode* pT=CreateBTree();
	PreTraverseBTree(pT);
	return 0; 
}


struct BTNode* CreateBTree()
{
	struct BTNode* pA=(struct BTNode*)malloc(sizeof(struct BTNode));
	struct BTNode* pB=(struct BTNode*)malloc(sizeof(struct BTNode));
	struct BTNode* pC=(struct BTNode*)malloc(sizeof(struct BTNode));
	struct BTNode* pD=(struct BTNode*)malloc(sizeof(struct BTNode));
	struct BTNode* pE=(struct BTNode*)malloc(sizeof(struct BTNode));
	
	pA->data='A';
	pB->data='B';
	pC->data='C';
	pD->data='D';
	pE->data='E';
	
	pA->pLchild=pB;
	pA->pRchild=pC;
	pB->pLchild=pB->pRchild=NULL;
	pC->pLchild=pD;
	pC->pRchild=NULL;
	pD->pLchild=NULL;
	pD->pRchild=pE;
	pE->pLchild=pE->pRchild=NULL;
	return pA; 
}
//������� 
void PreTraverseBTree(struct BTNode* pT)
{
	if(NULL!=pT)
	{
		printf("%c\n",pT->data);
			if(NULL!=pT->pLchild)//�Լ������Լ� 
			{
				PreTraverseBTree(pT->pLchild);
			}
			if(NULL!=pT->pRchild)
			{
				PreTraverseBTree(pT->pRchild);
			}
	}//����ͺ���ͬ��pT->pLchild���Դ������������� 
}
//����α�㷨��
		//���ȷ���������ڵ� 
		//���������������
		//���������������� 
//����������м���ʸ��ڵ㡿
//������(1)�������������
//      (2)�ٷ��ʸ��ڵ�
//      (3)���������������

//��������������ʸ��ڵ㡿
//������(1)���������������
//      (2)���������������
//      (3)�ٷ��ʸ��ڵ�
