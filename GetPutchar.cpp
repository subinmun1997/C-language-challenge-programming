#include <stdio.h>

int ConvCase(int ch){
	int diff='a'-'A';
	if(ch>='A' && ch<='Z')
		return ch+diff;
	else if(ch>='a' && ch<='z')
		return ch-diff;
	else
		return -1;
}

int main(void){
	int ch;
	printf("���ĺ��� �Է��ϼ���. ");
	ch=getchar();
	ch=ConvCase(ch);
	if(ch==-1){
		printf("������ ��� �Է� �� �Դϴ�.");
		return -1;
	}
	putchar(ch);
	
	return 0; 
}
