#include <stdio.h>

int power(int n);

int main(void){
	int n;
	printf("n�� �Է�: ");
	scanf("%d",&n);
	printf("2�� %d���� %d\n",n,power(n));
	
	return 0;
}

int power(int n){
	if(n==0)
		return 1;
	else
		return power(n-1)*2;
	
}
