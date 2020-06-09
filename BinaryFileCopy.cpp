#include <stdio.h>

int main(void){
	FILE * src = fopen("src.bin","rt");
	FILE * des = fopen("des.bin","wt");
	int readCnt;
	char buf[20];
	
	if(src==NULL || des==NULL){
		puts("���Ͽ��� ����!");
		return -1;
	}
	while(1){
		readCnt = fread((void*)buf,1,sizeof(buf),src);
		
		if(readCnt<sizeof(buf)){
			if(feof(src)!=0){
				fwrite((void*)buf,1,readCnt,des);
				puts("���Ϻ��� �Ϸ�!");
				break; 
			}
			else
				puts("���Ϻ��� ����!");
			break; 
		}
		fwrite((void*)buf,1,readCnt,des);
	}
	fclose(des);
	fclose(src);
	
	return 0;
}
