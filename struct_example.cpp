#include"stdio.h"
#include"stdlib.h"
#include"string.h"
   /* yada   typedef struct{
            char ad[100];                 ayný þeye denktir.
			 int yapimyili;
	         }film;   */
typedef struct sinemafilmi{         
char ad[100];
int yapimyili;

}Film;

typedef int tamsayi;


int main(){

tamsayi x =30;

printf("x sayisinin degeri %d\n",x);

Film *filmptr;
filmptr = (Film *) malloc(sizeof(Film));

strcpy((*filmptr).ad,"forestgump");
filmptr->yapimyili=1990;

printf("film adi %s\n",(*filmptr).ad);
printf("yapim yili %d\n",filmptr->yapimyili);
free(filmptr);
return 0;
}
