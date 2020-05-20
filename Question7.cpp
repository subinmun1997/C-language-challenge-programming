#include <stdio.h>

typedef struct point{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle{
	Point lefd;
	Point rigu;
}Rectangle;

void ShowAreaInfo(Rectangle rec){
	printf("����:%d\n",(rec.rigu.xpos-rec.lefd.xpos)*(rec.rigu.ypos-rec.lefd.ypos));
}
void ShowRecPos(Rectangle rec){
	printf("�� ���: [%d,%d] \n",rec.lefd.xpos,rec.lefd.ypos);
	printf("�� �ϴ�: [%d,%d] \n",rec.lefd.xpos,rec.rigu.ypos);
	printf("�� ���: [%d,%d] \n",rec.rigu.xpos,rec.rigu.ypos);
	printf("�� �ϴ�: [%d,%d] \n",rec.rigu.xpos,rec.lefd.ypos);
}

int main(void){
	Rectangle rec1={{1,1},{4,7}};
	Rectangle rec2={{3,3},{9,8}};
	ShowAreaInfo(rec1);
	ShowRecPos(rec1);
	ShowAreaInfo(rec2);
	ShowRecPos(rec2);
	
	return 0;
}
