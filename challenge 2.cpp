#include <stdio.h>

int gugudan(int n1, int n2){
	int i;
	while(n1<=n2){
		for(i=1;i<10;i++){
			printf("%d x %d = %d\n",n1,i,n1*i);
		}
		printf("\n");
		n1++;
	}
}

int main(void){
	int n1,n2;
	printf("n1,n2 °ª ÀÔ·Â: ");
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
		gugudan(n1,n2);
	
	else
		gugudan(n2,n1);
	
	
	return 0; 
}
