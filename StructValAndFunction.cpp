#include <stdio.h>

typedef struct point{
	int xpos;
	int ypos;
}Point;

Point GetCurrentPosition(void){
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d",&cen.xpos,&cen.ypos);
	
	return cen;
}

Point ShowPosition(Point pos){
	printf("[%d,%d]\n",pos.xpos,pos.ypos);
}

int main(void){
	Point curPos=GetCurrentPosition();
	ShowPosition(curPos);
	
	return 0;
}
