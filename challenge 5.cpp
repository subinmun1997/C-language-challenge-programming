#include <stdio.h>

int Isprime(int n);

int main(void){
	int i=2,cnt=0;
	
	while(cnt!=10){
		if(Isprime(i)==1){
			printf("%d ",i);
			cnt++;
		}
		i++;
	}
	return 0;
}

int Isprime(int n){
	int i,cnt=0;
	for(i=1;i<=n;i++){
		if(n%i==0)
			cnt++;
	}
	if(cnt==2)
		return 1;
	return 0;
}
