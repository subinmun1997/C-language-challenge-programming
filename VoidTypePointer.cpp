#include <stdio.h>

void SoSimpleFunc(void){
	printf("I'm so simple");
}

int main(void){
	int num=20;
	void * str;
	
	str = &num;
	printf("%p \n",str);
	
	str = SoSimpleFunc;
	printf("%p \n",str);
	
	return 0;
}
