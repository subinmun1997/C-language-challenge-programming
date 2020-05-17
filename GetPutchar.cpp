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
	printf("알파벳을 입력하세요. ");
	ch=getchar();
	ch=ConvCase(ch);
	if(ch==-1){
		printf("범위를 벗어난 입력 값 입니다.");
		return -1;
	}
	putchar(ch);
	
	return 0; 
}
