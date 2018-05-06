#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>//exit����

struct Arr
{
	int *pBase;//�洢���������һ��Ԫ�صĵ�ַ
	int len;//�����������ɵ����Ԫ�صĸ��� 
	int cnt;//��ǰ������Ч��Ԫ�ظ��� 
};

void init_arr(struct Arr* pArr, int length);//��ʼ�� 
bool append_arr(struct Arr* pArr,int val);//׷��
bool insert_arr(struct Arr* pArr,int pos,int val);//pos��ֵ��1��ʼ 
bool delete_arr(struct Arr* pArr,int pos,int *pVal); 
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);
void inversion_arr(struct Arr* pArr);

int main()
{
	int val;
	struct Arr arr;
	init_arr(&arr,6);
	append_arr(&arr,3);
	append_arr(&arr,14);
	append_arr(&arr,4);
	append_arr(&arr,6);
	append_arr(&arr,7);
	append_arr(&arr,8);
	delete_arr(&arr,6,&val); 
	show_arr(&arr);
//	inversion_arr(&arr);
//	printf("���������");
//	show_arr(&arr);
//	printf("ð�����");
//	sort_arr(&arr);
//	show_arr(&arr);
	return 0;
}
//Ϊһ�����鿪�ٶѵĿռ䣬��СΪlenth 
void init_arr(struct Arr *pArr,int length)
{
	pArr->pBase=(int*)malloc(sizeof(int)*length);
	if(NULL==pArr->pBase)
	{
		printf("��̬�ڴ����ʧ��!");
		exit(-1);//��ֹ�������� 
	}
	else
	{
		pArr->len=length;
		pArr->cnt=0;
	}
	return;//���߱������������ֹ�� 
}
//��ЧԪ�ظ�����ĳ���һ��ʱ���������������� 
bool is_full(struct Arr* pArr)
{
	if(pArr->cnt==pArr->len)
		return true;
	else
		return false;
}
//�������ЧԪ��Ϊ0ʱ�����������ǿյ� 
bool is_empty(struct Arr* pArr)
{
	if(0==pArr->cnt)
		return true;
	else
		return false;
}

void show_arr(struct Arr* pArr)
{
	if( is_empty(pArr))//pArr�������ǵ�ַ�����Բ�����pArr 
		printf("����Ϊ�գ�\n");
	else
		{
			for(int i=0;i<pArr->cnt;i++)
			printf("%d     ",pArr->pBase[i]);//pArr�������һ���ṹ�����
			printf("\n");
		}
}

bool append_arr(struct Arr* pArr,int val)
{
	if( is_full(pArr))
		return false;
	//����ʱ׷��
	pArr->pBase[pArr->cnt]=val;
	(pArr->cnt)++;
	return true; 
}
/*
*@pos��ʾ����Ҫ�����λ�ã�pos�Ǵ�1��ʼ�� 
*cnt����Ч���ֵĸ��� 
*���pos<1��pos������Ч���ֵ�2λ pos>cnt+1  ����cntΪ3��posΪ5 
*i��ʾ�������±꣬��Ч���ֵĸ�����Զ���±�Сһλ ������ i=pArr->cnt-1
*i>=pos-1��Ϊpos�Ǳ�i��һλ�ģ��������ƶ�ʱ��pos���ڵ�λ�õ�Ԫ��Ҳ��Ҫ�������� 
*
*
*/

bool insert_arr(struct Arr* pArr,int pos,int val)
{
	int i;
	if(is_full(pArr))
		return false;
	if(pos<1 || pos>pArr->cnt+1)//������Ԫ�أ�ֻ����3�������ܲ����5��Ԫ�أ�û�е��ĸ� 
		return false; 
	for(i=pArr->cnt-1;i>=pos-1;i--)
	{
		pArr->pBase[i+1]=pArr->pBase[i];
	}
	pArr->pBase[pos-1]=val;
	pArr->cnt++;
	return true;
}
/*
*i=pos  ɾ��һ��λ�õ�Ԫ�ؾ��ǽ������һλ��ǰ���� 
* ��Ϊi���±꣬pos�Ǵ�1��ʼ�ģ����ԣ�i=pos����ʱ��i����pos����һλ 
* i����ҪС����Ч��Ԫ�ظ����ģ� ��Ϊi���±꣬��ЧԪ�صĸ����ܱ�i��һλ  ��ЧԪ�ظ���Ϊ1ʱ��iΪ0 
*���ɾ��������ЧԪ�ص����һλ����ôֱ�Ӽ���һ����Ч��Ԫ�ظ��������� 
*
*/ 
bool delete_arr(struct Arr* pArr,int pos,int *pVal)
{
	if(is_empty(pArr))
		return false;
	if(pos<1||pos>pArr->cnt)//pos���ܴ���Ԫ�صĸ���
		return false;
	*pVal=pArr->pBase[pos-1];
	for(int i=pos;i<pArr->cnt;i++)// i���±꣬iҪ��pos����һλ��ʼ��Ҳ����pos��ֵ 
		pArr->pBase[i-1]=pArr->pBase[i];
		pArr->cnt--;
	return true;
	
}

void inversion_arr(struct Arr* pArr)
{
	int i=0;
	int j=pArr->cnt-1;
	while(i<j)
	{
		int temp=pArr->pBase[i];
		pArr->pBase[i]=pArr->pBase[j];
		pArr->pBase[j]=temp;
		i++;
		j--;
	}
	return;
} 

void sort_arr(struct Arr* pArr)
{
	int i,j;
	for(i=0;i<pArr->cnt;i++)
		for(j=i+1;j<pArr->cnt;j++)
			if(pArr->pBase[i]>pArr->pBase[j])
			{
				int temp=pArr->pBase[i];
				pArr->pBase[i]=pArr->pBase[j];
				pArr->pBase[j]=temp;
			}
}
