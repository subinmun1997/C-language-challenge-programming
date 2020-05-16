#include <stdio.h>

void SimpleAdder(int n1, int n2){
	printf("%d + %d = %d\n",n1,n2,n1+n2);
}
void ShowString(char* str){
	printf("%s\n",str);
}

int main(void){
	char * str="Function Pointer";
	int num1=10, num2=20;
	
	void(*ptr)(int,int)=SimpleAdder;
	void(*ptr2)(char*)=ShowString;
	
	ptr(num1,num2);
	ptr2(str);
	
	return 0;
	
}
