#include <stdio.h>
#define MAX(N,M) ((N>M) ? N : M)

int main(void){
	int n,m;
	printf("n�� m�� �Է�: ");
	scanf("%d %d",&n,&m);
	printf("�� �߿� �� ū ����?: %d\n",MAX(n,m));
	
	return 0;
}
