#include <stdio.h>

int main(void){
	FILE * fp = fopen("mystroy.txt","wt");
	
	if(fp==NULL){
		puts("���Ͽ��� ����!");
		return -1; 
	}
	fputs("#�̸�: ������\n",fp);
	fputs("#�ֹι�ȣ:900208-1012589\n",fp);
	fputs("#��ȭ��ȣ:010-1111-2222\n",fp);
	fclose(fp);
	
	return 0;
}
