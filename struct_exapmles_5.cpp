#include"stdio.h"
#include"string.h"
#include"stdlib.h"

typedef struct  {
	char ad[100];
	int yapimyili;
	int *t;
	
}Film;

int main(){
	

	
	Film *filmptr= (Film*) malloc(sizeof (Film));
	(*filmptr).yapimyili= 10;
	
	
	strcpy((*filmptr).ad,"departed");
	(*filmptr).yapimyili =2006;
	
	printf("film adi :%s\n",(*filmptr).ad);
	printf("yapimyili : %d",filmptr->yapimyili);
	free(filmptr);
	return 0;
	
	
}
