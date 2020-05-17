#include <stdio.h>

int main(void){
	int ch1;
	ch1=getchar();
	putchar(ch1);
	
	ch1=fgetc(stdin);
	fputc(ch1,stdout);
	
	return 0;
}
