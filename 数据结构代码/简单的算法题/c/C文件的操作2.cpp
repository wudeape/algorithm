#include <stdio.h>

int main()
{
	int a,b;
	int c;
	FILE* file=fopen("data.txt","r");//FILE*���������� ,r�Ƕ��� 
	FILE* f2=fopen("result.txt","w");//file�Ǳ�������w ��д�� 
	 
	fscanf(file,"%d",&a);
	fscanf(file,"%d",&b);
	c=a+b; 
	fprintf(f2,"%d\n",c);
	fclose(file);
	fclose(f2);
	return 0;
} 
