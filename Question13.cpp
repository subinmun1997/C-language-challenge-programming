#include <stdio.h>
#define ADD(X,Y,Z) ((X)+(Y)+(Z))
#define MUL(X,Y,Z) ((X)*(Y)*(Z))

int main(void){
	printf("¼¼ ¼öÀÇ µ¡¼À°á°ú:%d\n",ADD(2,3,4));
	printf("¼¼ ¼öÀÇ °ö¼À°á°ú:%d\n",MUL(2,3,4));
	
	return 0;
}
