#include"stdio.h"
#include"string.h"
 
 struct sinemafilmi{
 	char ad[100];
 	char yonetmen[50];
 	int yapimyili;
 	
 	
 };
 
 int main(){
 	
 	struct sinemafilmi film;
 	
 	strcpy(film.ad,"batman");
 	strcpy(film.yonetmen,"christopher nolan");
 	
	 film.yapimyili=2005;
 	
	 struct sinemafilmi *filmptr=&film;
 	 
	  printf("film adi : %s\n",(*filmptr).ad);
	  printf("film yonetmen %s\n",filmptr->yonetmen);
 	
 	return 0;
 	
 	
 	
 }

