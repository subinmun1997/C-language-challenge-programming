extern void Increment(void);
extern int GetNum(void);
#include <stdio.h>

int main(void) {
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	return 0;
}