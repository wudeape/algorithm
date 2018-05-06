#include <iostream>
using namespace std;



//ȫ�ֱ��� 

int data[100];
int count=0;
//count��¼���м������� 
void addToEnd(int value)//��������� 
{
	data[count]=value;
	count++;
}

void addToFront(int value)//������ǰ�� 
{
	int i=count;
	while(i>=1)
	{
		data[i]=data[i-1];//����Ԫ�������� 
		i--;
	} 
	data[0]=value;//�����һ���� 
	count++;//�������һ���� 
}


//����k��������±꣬i<=count-2��ԭ�����count-1�Ѿ�������һ��Ԫ����
//Ȼ��ɾ��һ��Ԫ�أ����ǰ�Ԫ����ǰ���ƣ�data[i]=data[i+1]����iʱ���Ѿ����԰Ѻ�����λ��ǰ������
//count-1�����Ѿ�û��Ԫ����
 
void removeIndex(int k)  //ɾ��indexΪK������   
{
	int i;
	for(i=k;i<=count-2;i++)//count-1���������һ��Ԫ�� 
	{					   //k�������������±� 
		data[i]=data[i+1];
	}  
	count--;
}

void removeValues(int value)//�����������е�value�е�ֵ��ȥ�� 
{
	int i;
	for(i=0;i<count;i++)
	{
		while(data[i]==value)
			removeIndex(i);
		if(count==0)
			break;
	}
		
} 

int countValue(int value)//���value�������ж��ٸ� 
{
	int n=0;
	int i;
	for(i=0;i<count;i++)
	{
		if(data[i]==value)
		n++;
		
	}
	return n; 
}

float getAverage()//��ƽ��ֵ 
{
	float sum=0;
	int i;
	for(i=0;i<count;i++)
		sum=sum+data[i];
	if(count==0)
		return 0;
	else
		return sum/count;	
}

//���������Ҫmode��������¼�������ֵĴ�����ҪmodeFreq���� /
int getMode()//������
{
	int mode=data[0];
	int modeFreq=countValue(mode);//���ֵĴ���
	int i;
	for(i=0;i<count;i++)
	{
		if(countValue(data[i])>modeFreq) {
			modeFreq=countValue(data[i]);
			mode=data[i];
		}
	} 
	return mode;
}
 
int getMax(int n)//�ҳ����ֵ 
{
	int max=data[0];
	int i;
	for (i=0;i<n;i++)
	{
		if(data[i]>max)
			max=data[i];
			
	}
	return max;
		
} 

int getMaxIndex(int n)//�ҳ��������ֵ���±� 
{
	int max=data[0];
	int maxIndex=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(data[i]>max)
		{
			max=data[i];
			maxIndex=i;
		}
	}
	return maxIndex;
}

/*
* �㷨��һ����n��Ԫ�أ��ҳ����Ԫ�ص��±꣬���������һ��Ԫ�أ�n-1������ 
*        ���ֵ�Ѿ�����������n--�� 
*		 ��whileѭ�����ϣ�ֱ��ʣ��һ��Ԫ�� 
*/


void selectionSort()
{
	int n=count;
	while(n>1)
	{
		int i=getMaxIndex(n);
		int temp=data[i];
		data[i]=data[n-1];
		data[n-1]=temp;
		n--;
	}
}

void reverse()//����Ԫ�صߵ� 
{
	int i=0;
	int j=count-1;
	while(i<j)
	{
		int temp=data[i];
		data[i]=data[j];
		data[j]=temp;
		i++;
		j--;
	}
}

void sortDesc()//�Ӵ�С����
{
	selectionSort(); 
	reverse(); 
}
 
void showData()
{
	int i;
	for(i=0;i<count;i++)
		cout<<data[i];
	cout<<endl;
}

int main()
{
	addToFront(3);
	addToEnd(3);
	addToEnd(5);
	addToEnd(4);
	addToEnd(10);
	addToFront(8);
	selectionSort(); 
	showData(); 
//	sortDesc();
//	showData();
//	showData();
	return 0;
}
