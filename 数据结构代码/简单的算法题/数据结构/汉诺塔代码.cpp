#include <iostream>
using namespace std;


/*
* @A,@B,@C��ʾ������������ 
* �����ӷֳ����Σ��ݹ���ú��� 
* ���Է��֣�n-1���ƹ�C�ƶ���B�� ��Ȼ���B�ƹ�A�ƶ���C 
*
*/ 
void hanoi(int n,char A,char B,char C)
{
	if(n==1)
		printf("%c ->%c\n",A,C); 
	else
	{
		hanoi(n-1,A,C,B);//n-1�ƹ�C��B 
		printf("%c ->%c\n",A,C);
		hanoi(n-1,B,A,C);
	}
} 

int main()
{
	hanoi (2,'A','B','C');
	return 0;
}
