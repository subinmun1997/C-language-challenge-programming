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
	struct person man={"ÀÌ½Â±â","010-0000-0000",25};
	
	printf("%p %p %p\n",&pos,&pos.xpos,&pos.ypos);
	printf("%p %p %p %p\n",&man,man.name,man.num,&man.age);
	
	return 0; 
}
