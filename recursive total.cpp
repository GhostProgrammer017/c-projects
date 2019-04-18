#include"stdio.h"


int total(int num){
	
	if(num==0)
	return 0;
	
	return (num-1)+total(num-1);
	
}
int main(){
	int num;
	printf("--enter number-- ");
	scanf("%d",&num);
	int answer=total(num);
	printf("--answer-- %d",answer);
	
	
	
	
	return 0;
}
