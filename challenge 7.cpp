#include <stdio.h>

int main(void){
	int n,k;
	int ict=1;
	
	printf("���n �Է�: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("�����ϴ� k�� ����");
		return 0; 
	}
	for(k=0;ict*2<=n;k++)
		ict=ict*2;
	
	
	printf("������ �����ϴ� k�� �ִ��� %d\n",k);
	
	return 0;
}
