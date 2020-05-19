#include <stdio.h>

struct point{
	int xpos;
	int ypos;
};

struct person{
	char name[20];
	char num[20];
	int age;
};

int main(void){
	struct point pos={10,20};
	struct person man={"°¡³ª´Ù","010-0000-0000",25};
	
	printf("%d %d\n",pos.xpos,pos.ypos);
	printf("%s %s %d\n",man.name,man.num,man.age);
	
	return 0; 
	
}
