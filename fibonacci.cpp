#include"stdio.h"




int fib(int num){
	
	
	if(num == 0||num == 1){
		return num;
	}
	
		
	return fib(num-1)+fib(num-2);
}
int main(){
int num;

	printf("for fibonacci array tab to 1 ");
	scanf("%d",&num);

	
printf("%d",fib(num));	

	return 0;
}
	
	
	
	
	
	

