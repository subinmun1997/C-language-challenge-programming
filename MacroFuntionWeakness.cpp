#include <stdio.h>
#define DIFF_ABS(X,Y) ((X)>(Y)?(X)-(Y):(Y)-(X))

int main(void){
	printf("�� ���� ��:%d\n",DIFF_ABS(5,7));
	printf("�� ���� ��:%g\n",DIFF_ABS(1.8,-1.4));
	
	return 0;
}
