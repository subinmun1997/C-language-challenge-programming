#include <stdio.h>

struct Employee{
	char name[20];
	char num[20];
	int salary;
};

int main(void){
	struct Employee arr[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("������ �Է��ϼ���.");
		scanf("%s %s %d",arr[i].name,arr[i].num,&arr[i].salary);
	}
	for(i=0;i<3;i++){
		printf("%s %s %d\n",arr[i].name,arr[i].num,arr[i].salary);
	}
	return 0;
}
