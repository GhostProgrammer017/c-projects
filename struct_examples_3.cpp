#include"stdio.h"
#include"string.h"

struct sinemafilmi {
	char ad[100];
	int yapimyili;
	
};

int main(){
	
	struct sinemafilmi film1;
	
	strcpy(film1.ad,"burn fuat brother");
	film1.yapimyili=1990;
	 struct sinemafilmi film2;
	 film2=film1;
	 
	 printf("film adi : %s\n",film2.ad);
	 	 printf("film yili : %d\n",film2.yapimyili);

	 return 0;
	
	
	
	
}

