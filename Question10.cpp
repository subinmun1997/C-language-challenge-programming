#include <stdio.h>

int main(void){
	char buf[100];
	FILE *fp = fopen("mystory.txt","rt");
	
	while(fgets(buf,sizeof(buf),fp)!=NULL){
		printf(buf);
	}
	fclose(fp);
	return 0;
	
}
