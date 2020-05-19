#include <stdio.h>
#include <string.h>

struct Employee{
	char name[20];
	char num[20];
	int salary;
};

int main(void){
	struct Employee pos1;
	
	printf("이름 입력: "); scanf("%s",pos1.name);
	printf("주민등록번호 입력: "); scanf("%s",pos1.num);
	printf("급여 입력: "); scanf("%d",&pos1.salary);
	
	printf("이름: %s\n",pos1.name);
	printf("주민등록번호: %s\n",pos1.num);
	printf("급여: %d\n",pos1.salary);
	
	return 0;
}
