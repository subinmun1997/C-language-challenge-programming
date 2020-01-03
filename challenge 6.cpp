#include <stdio.h>

void SecondToHMS(int);

const int H=60*60;
const int M=60;


int main(void){
	int sec;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d",&sec);
	SecondToHMS(sec);
	
	return 0;
}

void SecondToHMS(int sec){
	int h,m,s;
	
	h=sec/H;
	sec=sec%H;
	
	m=sec/M;
	sec=sec%M;
	
	s=sec;
	
	printf("h:%d m:%d s:%d\n",h,m,s);
	
}
