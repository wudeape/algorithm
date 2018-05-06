#include <stdio.h>
#define UINT unsigned char

/**
*��Ŀ���������Ƶ����ֵ�ת 
*�㷨���Ѷ����Ʒ�Ϊ�����֣����н�����������С�����ֵĸ�����ֱ���������������� 
*���ˣ�����������00001111���ˣ���ȡ�ұߵ����֣�����4λ���������ߵ����֡�
*      ��������������4λ��������ұߵ�����,�ٹ��ˡ�
*      ����Ժ���ߺ��ұ߾͵�������. 
*/



UINT reverse(UINT a) {
	int m_4 = 0x0f;
	int m_2 = 0x33;
	int m_1 = 0x55;
	
	int b = ( (a & m_4) << 4 ) + ( (a >> 4) & m_4 );
	int c = ( (b & m_2) << 2 ) + ( (b >> 2) & m_2 );
	int d = ( (c & m_1) << 1 ) + ( (c >> 1) & m_1 );
	
	return d;
	
}

int main() {
	UINT a = 67;
	UINT b = reverse(a);
	UINT c = reverse(b);
	
	printf("%d %d \n", a, c);
	return 0; 
}
