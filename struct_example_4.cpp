#include"stdio.h"
#include"string.h"

#define PI 3.14

typedef struct{
float x;
float y;



}nokta;

typedef struct{
	
	float yaricap;
	nokta merkez;
	
}Daire;

void dairebilgisi_yazdir(Daire *d);

int main(){
	
	Daire *daire;
	printf(" daire merkezinin x kordinati nedir ?");
	scanf("%f",daire->merkez.x);
	 printf("dairenin merkezinin y kordinati nedir ?");
	 scanf("%f",daire->merkez.y);
	 
	 printf("yaricap uzunlugu nedir ?");
	 scanf("%f",daire->yaricap);
	dairebilgisi_yazdir(daire);
	return 0;
}


void dairebilgisi_yazdir(Daire *d){
	float cevre = 2 * PI * (*d).yaricap;
	float alan = PI * (*d).yaricap * (*d).yaricap;
	printf("\n darirenin bilgileri \n");
	printf("\n dairenin merkeziini kordinatlarý(x,y) : (%.2f, &.2f)",(*d).merkez.x,(*d).merkez.y);
	printf("\n dairenin yaricapi %.2f",(*d).yaricap);
	printf("\ndaireinni alani %.2f",alan);
		printf("\ndaireinni cevresi %.2f",cevre);
		printf("\n");

}








