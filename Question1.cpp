#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ConvToInt(char str){
	static int diff = 1 - '1';
	return str+diff;
}

int main(void){
	char str[50];
	int sum=0;
	int len,i;
	
	printf("문자열 입력: ");
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	
	for(int i=0;i<len;i++){
		if('1'<=str[i] && str[i]<='9'){
			sum+=ConvToInt(str[i]);
		}
	}
	printf("총 합: %d \n",sum);
	
	return 0;
}
