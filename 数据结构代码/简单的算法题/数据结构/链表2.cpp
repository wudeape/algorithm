#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* pNext;
}NODE,*PNODE;//����һ���ṹ����� 

PNODE create_list(void);
void traverse_list(PNODE pHead); 
bool is_empty(PNODE pHead);
bool insert_list(PNODE,int,int);
int length_list(PNODE);
bool delete_list(PNODE,int,int*);//���ĸ��ڵ��ɾ���� 
void sort_list(PNODE); 

int main(void)
{
	PNODE pHead =NULL;//���� һ���ṹ�����pHead 
	pHead=create_list();//����һ������������pHead��ֵ 
	traverse_list(pHead);
	int val;
	if( delete_list(pHead,2,&val) )
		printf("ɾ���ɹ���Ԫ����:%d\n",val);
	else
		printf("ɾ��ʧ��\n");
	traverse_list(pHead);
	return 0;
}
/*
*˼·�� ����һ����������ݵ�ͷ��� 
*		PNODE pTail=pHead;//����ڵ�ֻ��һ������ôpTailҲ��β�ڵ�
*		�����û�������ٸ��ڵ㲢����ֵ����̬�����ڵ�Ŀռ� 
*		�������ɵĽڵ�ҵ�pHead���档��ʱ������Ҫһ����Զָ��Null��ָ�루Ҳ������ĵڶ��У� 
*		����pNew��ֵ������pTail->next=pNew  �������ɵĽڵ����βָ�����    
*		pNew->next->NULL�������ɵĽڵ�ָ��� 
*		�ٰ�pNew��ֵ��pTail���������ܹ�ʹpTail��Զָ��NULL�� 
*/ 

PNODE create_list(void)
{
	int len;
	int i;
	int val;
	//����һ���������Ч���ݵ�ͷ��� 
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	if(pHead==NULL)
	{
		printf("����ʧ�ܣ�������ֹ��");
		exit(-1); 
	}
	PNODE pTail=pHead;//����ڵ�ֻ��һ������ôpTailҲ��β�ڵ� 
	pTail->pNext=NULL;//��Զָ��β�ڵ� 
	printf("����������Ҫ���ɵ�����ڵ�ĸ���:len=");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		printf("�������%d���ڵ��ֵ",i+1);
		scanf("%d",&val);
		PNODE pNew=(PNODE)malloc(sizeof(NODE)); 
		if(pNew==NULL)
		{
			printf("����ʧ�ܣ�������ֹ��\n");
			exit(-1);
		}
		pNew->data=val;//�ڵ����������val 
		pTail->pNext=pNew;//pTailָ��pNew 
		pNew->pNext=NULL;//pNewָ��NULL 
		pTail=pNew;//��pNew����pTail            ʹpTail��Զָ��β�ڵ� 
	}
	return pHead;
}

void traverse_list(PNODE pHead)
{
	PNODE p=pHead->pNext;//����һ��ָ���һ����Ч���ݽڵ��ָ�� 
	while(p!=NULL)
	{
		printf("%d	",p->data);
		p=p->pNext;
	} 
	printf("\n");
	return; 
}

bool is_empty(PNODE pHead)
{
	if(pHead->pNext==NULL)//�ж������Ƿ�Ϊ�� 
		return true;
	else
		return false; 
} 
//���������ĳ��� 
int length_list(PNODE pHead)
{
	int cnt=0;
	PNODE p=pHead->pNext; 
	while(p!=NULL)
	{
		cnt++;
		p=p->pNext;
	}
	return cnt;
}

void sort_list(PNODE pHead)
{
	int i,j,temp;
	int len= length_list(pHead);//����Ҫ֪������ĳ��� 
	PNODE p,q;
	for(i=0,p=pHead->pNext;i<len-1;++i,p=p->pNext)//ð������ 
		for(j=i+1,q=p->pNext;j<len;++j,q=q->pNext) 
				if(p->data>q->data)
				{
					temp=p->data;
					p->data=q->data;
					q->data=temp;
				}
				
} 



/*
*  ������ĵ�pos���ڵ��ǰ�����һ���µĽڵ� ���ýڵ��ֵ��val������pos��1��ʼ
*  ˼·��Ҫ�����һ���ڵ㣬����ֱ������ڵ��ǰһ���ڵ� 
*	@pos���Ƕ���pos����֪��ǰ��һ���ڵ㣬���磨ֻ��3���ڵ㣬��Ĳ���λ�ò��ܳ���4��	
*	@i    p��ʼ����ָ��phead�ģ�i=0���Կ�����phead��ͷ��㣩��λ�ã�i<pos-1����
*	���pos��ֵ��2,��ôp->next�ͻ��ƶ����׽ڵ��ϣ�Ҳ��������ĵ�1����Чֵ��Ҳ��Ҫ����λ�õ�ǰһ���ڵ� 
*   ���û�м�һ��Ҳ��pos=2Ϊ��������ѭ�����Σ���ʱp��ָ��pos��λ���ϣ�Ҳ��������ĵڶ�λ 
*	p ��= NULL��ȷ��p���ᳬ����������ڵ������  i< pos-1���ҳ�Ҫ����ڵ�λ�õ�ǰһ���ڵ㣩 
*	�ඨ��һ����ʱ����q�����Ȱ�p��ָ����ֵ��q��q���p��ָ���򣩣�q=p->pNext
*	Ȼ��pNew�ĵ�ַ��ֵ��p��ָ����pָ��pNew��                   p->pNext=pNew
*	q�ٴ��pNew�ĵ�ַ ��pNewָ��q��                                pNew->pNext=q
*	�������ǾͿ���ʹpָ��pNew��pNew��ָ����ָ��q 
	�ڶ��֣�													pNew->pNext = p->PNext 
																p->pNext = pNew 
*/ 
bool insert_list(PNODE pHead,int pos,int val)
{
	int i=0;
	PNODE p=pHead;
	while(p!=NULL && i<pos-1)//Ҫ����ڵ㣬������Ҫ֪��ǰһ���ڵ� 
	{ 
		p=p->pNext;
		++i;
	}
	if(i>pos-1||p==NULL)
		return false;
	
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if(NULL==pNew)
	{
		printf("��̬�����ڴ�ʧ��!\n");
		exit(-1);
	}
	pNew->data=val;
	PNODE q=p->pNext;//q��p����һ���ڵ� 
	p->pNext=pNew;//p�ڵ㴦ָ��pNew 
	pNew->pNext=q;//pNew��һ���ڵ���q 
	return true;
}

/*
*˼·��
*		
*		i<pos-1���ҳ�Ҫɾ���ڵ��ǰһλ�ڵ㣩   
*		p->pNext != NULL;��ȷ��ɾ���Ľڵ��Ǵ��ڵģ� 
*

*/ 
bool delete_list(PNODE pHead,int pos ,int* pVal)
{
	int i=0;
	PNODE p=pHead;
	while(p->pNext!=NULL && i<pos-1)//Ҫɾ���ĺ���Ԫ�ز���Ϊ�� 
	{
		p=p->pNext;
		++i;
	}
	if(i>pos-1||p->pNext==NULL)
		return false;
	
	PNODE q=p->pNext;//��q����p����һ���ڵ㣬��������ͷţ����õ����ڴ�й¶ 
	*pVal=q->data;
	//ɾ��p�ڵ����Ľڵ� 
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;
	
	return true;
	
}


