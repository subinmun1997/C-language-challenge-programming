#include <stdio.h>

int GCD(int,int);

int main(void){
	int n1,n2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d",&n1,&n2);
	GCD(n1,n2);
	return 0;
}

int GCD(int n1,int n2){
	int i;
	for(i=2;i<=n2;i++){
		if(n1%i==0 && n2%i==0){
			printf("%d\n",i);
		}
	}
}
