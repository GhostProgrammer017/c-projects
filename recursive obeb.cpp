#include"stdio.h"

obeb(int numberone,int numbertw){
int smallnumber;
smallnumber=numberone;
if(numberone>numbertw){
		smallnumber=numbertw;
}
	    if (numbertw == 0)

return numberone;

             else

                return obeb(numbertw,numberone % numbertw);

	

}
int main(){
	
	int numberone,numbertw;
printf("--enter number one--");
	scanf("%d",&numberone);
	printf("--enter number two--");
	scanf("%d",&numbertw);
	printf("sonuc %d",obeb(numberone,numbertw));
	
	
	
	return 0;
}
