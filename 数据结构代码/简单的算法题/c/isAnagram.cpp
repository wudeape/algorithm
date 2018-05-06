#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//���������ַ���s��t���ж��������ַ����е���ĸ�ǲ�����ȫһ����˳����Բ�һ���� 
//�����㷨�� ���ַ�������һ�飬�ҳ���ĸ���±꣬����ĸ���±���������С� 
// +1��ʾ���ֹ�һ�Ρ�������������е�Ԫ�س��ֵĴ�����ͬ����ô���� 


bool isAnagram(char s[], char t[]){
	int statS[26] = {0};//�����е�������Ϊ0 
	int statT[26] = {0};
	int lenS = strlen(s);
	int lenT = strlen(t);
	int i;
	for(i=0; i<lenS; i++){
		int index = s[i]-'a';//�����ܹ�������ַ��������е�λ�á�����'b'-'a' Ϊ1���������У�b���±����1 
		statS[index]++;	//����++ �� �ظ��˶��ٴΣ���ֵ���Ƕ��٣���Ϊ��ʼֵΪ0 
	}

	for(i=0; i<lenT; i++){
		int index = t[i]-'a';
		statT[index]++;	
	}
	//����Ƚϵ���Ԫ�ش�С���൱�ھ���Ԫ�س��ֵĴ�����
	//�������������һ�飬ֻҪû�в�һ���ģ���ô�������ַ�������ĸ����һ���ˣ�����˳�� 
	for(i=0; i<26; i++){
		if(statS[i] != statT[i]){
			return false;
		}	
	}
	return true;
}

int main(){
	
	char s[] = "ttn";
	char t[] = "nnt";
	printf("%d\n",isAnagram(s,t));
	return 0;
}
  
