#include <stdio.h>
#define PI 3.1415
#define AREA(r) ((r)*(r))*PI

int main(void){
	double rad;
	printf("���� ������ �Է�: ");
	scanf("%lf",&rad);
	printf("���� ����:%g\n",AREA(rad));
	
	return 0;
}
