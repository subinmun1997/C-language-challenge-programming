#include <stdio.h>

int main(void){
	int n,k;
	int ict=1;
	
	printf("상수n 입력: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("만족하는 k값 없음");
		return 0; 
	}
	for(k=0;ict*2<=n;k++)
		ict=ict*2;
	
	
	printf("공식을 만족하는 k의 최댓값은 %d\n",k);
	
	return 0;
}
