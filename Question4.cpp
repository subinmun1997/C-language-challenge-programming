#include <stdio.h>
#include <string.h>

struct Employee{
	char name[20];
	char num[20];
	int salary;
};

int main(void){
	struct Employee pos1;
	
	printf("�̸� �Է�: "); scanf("%s",pos1.name);
	printf("�ֹε�Ϲ�ȣ �Է�: "); scanf("%s",pos1.num);
	printf("�޿� �Է�: "); scanf("%d",&pos1.salary);
	
	printf("�̸�: %s\n",pos1.name);
	printf("�ֹε�Ϲ�ȣ: %s\n",pos1.num);
	printf("�޿�: %d\n",pos1.salary);
	
	return 0;
}
