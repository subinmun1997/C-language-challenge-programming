#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int GetSpaceIdx(char str[]){
	int len,i;
	len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i] == ' ')
			return i;
	}
	return -1;
}

int CompName(char str1[], char str2[]){
	int idx1=GetSpaceIdx(str1);
	int idx2=GetSpaceIdx(str2);
	
	if(idx1 != idx2)
		return 0;
	else
		return !strncmp(str1,str2,idx1);
}

int CompAge(char str1[], char str2[]){
	int idx1=GetSpaceIdx(str1);
	int idx2=GetSpaceIdx(str2);
	int age1,age2;
	
	age1 = atoi(&str1[idx1+1]);
	age2 = atoi(&str2[idx2+1]);
	
	if(age1==age2)
		return 1;
	else
		return 0;
}

int main(void){
	char str1[20];
	char str2[20];

	
	printf("�̸��� ���� �Է�1: ");
	fgets(str1,sizeof(str1),stdin);
	str1[strlen(str1)-1]=0;
	
	printf("�̸��� ���� �Է�2: ");
	fgets(str2,sizeof(str2),stdin);
	str2[strlen(str2)-1]=0;

	if(CompName(str1,str2))
		puts("�̸��� �����մϴ�.");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");
	
	if(CompAge(str1,str2))
		puts("���̰� �����մϴ�.");
	else
		puts("���̰� �������� �ʽ��ϴ�.");
	
	return 0; 
}
