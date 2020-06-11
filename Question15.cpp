#include <stdio.h>
#define MAX(N,M) ((N>M) ? N : M)

int main(void){
	int n,m;
	printf("n과 m값 입력: ");
	scanf("%d %d",&n,&m);
	printf("둘 중에 더 큰 수는?: %d\n",MAX(n,m));
	
	return 0;
}
