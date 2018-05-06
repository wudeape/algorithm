#include <stdio.h>
#include <malloc.h>

/*
*���е�ԭ�����Ƚ��ȳ��������о�����ѭ����̬���� 
*rearָ�������Ч���ݵ���һ��Ԫ�أ���ʱrearָ���λ����û����Ч���ݵģ� *******************��������Ҫ 
*frontָ����ǵ�һ��Ԫ�� 
*�����ʱ��������鳤����6�� fָ����±���1��rָ����±���5����ʱrָ���λ����û����Ч���ݵģ� 
*���Ƕ�֪��rҪ��������һλ�������� �����5��λ�ã���ʱ��rֻ���Ƶ��±�Ϊ0������ ���Եó�r=��r+1)%���鳤�� 
*���ǵó�һ���㷨������r��f��λ���ǲ���ȷ�ģ�û�д�С֮�֣�r��f���ƶ��Ĺ����У����п��ܻᳬ�����г���
*��ʱ�����ǿ��Եó��±�r=��r+1��%���鳤�ȣ�������r��f���ϵ��ƶ������ᳬ�����г��� 
*��ʹ��û�г�������ĳ��ȣ�����r���±���2����������һλ��3����ôr=��2+1��%6����ʱ���±�һ����3 
*/ 


typedef struct Queue
{
	int *pBase;//ָ������ı��� 
	int front;//�±� 
	int rear;//ĩβ 
}QUEUE;


void init(QUEUE*);
bool en_queue(QUEUE*,int val);
void traverse_queue(QUEUE*);
bool full_queue(QUEUE*);
bool out_queue(QUEUE*,int *pVal);
bool emput_queue(QUEUE*);


int main(void)
{
	int val;
	QUEUE Q;
	init(&Q);
	en_queue(&Q,1);
	en_queue(&Q,5);
	en_queue(&Q,6);
	en_queue(&Q,7);
	en_queue(&Q,8);
	traverse_queue(&Q);
	if(out_queue(&Q,&val))
	{
		printf("���ӳɹ������ӵ�Ԫ����%d \n",val); 
	}
	else
		printf("����ʧ��");
	traverse_queue(&Q);
	return 0;
}

//��ʼ�� 
void init(QUEUE *pQ)
{
	pQ->pBase=(int *)malloc(sizeof(int)*6);//����һ�����飬��pBaseָ�� 
	pQ->front=0;
	pQ->rear=0;
}
//�ж϶����Ƿ�����
// ���ö����е�һ��Ԫ�أ����r��f�����ţ���ô���о������� 
bool full_queue(QUEUE* pQ)
{
	if((pQ->rear+1)%6==pQ->front)//ѭ���ľ�̬���� 
		return true;
	else
		return false;
}


bool en_queue(QUEUE* pQ,int val)//��� 
{
	if(full_queue(pQ))
		return false;
	else
	{
		pQ->pBase[pQ->rear]=val;
		pQ->rear=(pQ->rear+1)%6;
		
		return true;
	}	
}

void traverse_queue(QUEUE* pQ)
{
	int i=pQ->front;//��������һ������ָ���һ���±꣬��i��rear�����ʱ������� 
	
	while(i!=pQ->rear)
	{
		printf("%d  ",pQ->pBase[i]);
		i=(i+1)%6;	
	}
	printf("\n");
	return;
}

//��front��ֵ��rear��ֵ��ȣ�������о��ǿյġ� 
bool emput_queue(QUEUE* pQ)//�ж��Ƿ�Ϊ������ 
{
	if(pQ->front==pQ->rear)
		return true;
	else
		return false;
}
//���Ӿ�����front��ǰ����һλ 
bool out_queue(QUEUE* pQ,int *pVal)//���� 
{
	if(emput_queue(pQ))
		return false; 
	else
	{
		*pVal=pQ->pBase[pQ->front];
		pQ->front=(pQ->front+1)%6;
		return true;
	}
}

