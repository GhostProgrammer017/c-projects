#include"stdio.h"
#include"stdlib.h"
 typedef struct eleman {
 	int deger;
 	struct eleman *sonraki;
 	struct eleman *onceki;
 	
 }Eleman;
 
typedef struct {
 	Eleman *baslangic;
 	Eleman *bitis;
 	int elemansayisi;
 }Liste;
 

 
 enum yazdirmabicimi{duz= 0, ters =1};

void hazirla(Liste *liste){
	liste->baslangic = (Eleman*) malloc(sizeof (Eleman));
	liste->baslangic->onceki=NULL;
	liste->baslangic->sonraki=NULL;
	liste->bitis= liste->baslangic;
	liste->elemansayisi=0;
}
void temizle(Liste* liste){
	Eleman *ptr = liste->baslangic;
	Eleman *temizlenecek;
	printf("\n liste temzileniyor ...");
	while(ptr->sonraki != NULL){
		temizlenecek=ptr;
		ptr = ptr->sonraki;
		free(temizlenecek);
	}
	free(ptr);
}
void yazdir(Liste* liste,int tersten){
	if(liste->elemansayisi == 0){
		printf("\n liste bos bro");
		return;
	}
	Eleman* ptr;
	if(tersten){
		ptr=liste->bitis;
		printf("%d ",ptr->deger);
	while(ptr->onceki != NULL){
		ptr=ptr->onceki;
		printf("%d ",ptr->deger);
	}
	}
	else {
		ptr=liste->baslangic;
		printf("%d ",ptr->deger);
		while(ptr->sonraki!=NULL){
			ptr = ptr->sonraki;
			printf("%d ",ptr->deger);
}
}
}

void sonunaekle(Liste* liste,int eleman){
	if(liste->elemansayisi==0){
		liste->baslangic->deger = eleman;
		liste->elemansayisi++;
		return;
	}
	//eklenecek eleman için bellekten yer ayýr
	Eleman* eklenecek = (Eleman*) malloc(sizeof(Eleman));
	eklenecek->deger =eleman;
	
	liste->bitis->sonraki=eklenecek;
	eklenecek->onceki = liste->bitis;
	liste->bitis=eklenecek;
	liste->bitis->sonraki=NULL;
	liste->elemansayisi++;
}
void cikar(Liste* liste,int eleman){
	if(liste->elemansayisi == 0){
		printf(" \n gecersiz deger !");
	return;
	}
	if(liste->elemansayisi==1){
		liste->elemansayisi--;
		printf("\n eleman cikariildi !");
		return;
	}
	Eleman *ptr =NULL;
	//ilk elemani cikar
	if(eleman==1){
		ptr = liste->baslangic;
		liste->baslangic= liste->baslangic->sonraki;
		liste->baslangic->onceki=NULL;
		liste->elemansayisi--;
		free(ptr);
		return;
	}
	int i= 1;
	ptr =liste->baslangic;
	while(i<eleman - 1 && ptr->sonraki !=NULL){
		ptr = ptr->sonraki;
		i++;
	}
	Eleman* cikarilacak = ptr->sonraki;
	cikarilacak->onceki->sonraki = cikarilacak->sonraki;
	cikarilacak->sonraki->onceki=cikarilacak->onceki;
	free(cikarilacak);
	liste->elemansayisi--;
	printf("\n eleman cikarildi ..."); 
}
void menugoster(){
	printf("\n1. listeyi yazdir \n");
	printf("2. tersten yazdir\n");
	printf("3. listeye eleman ekle\n");
	printf("4. listeden eleman cikar\n");
	printf("0. cikis \n");
	printf("seciminizi giriniz :");
	
}



 
 int main(){
 	
 	Liste liste;
 	hazirla(&liste);
 	
 	int secim,sira,deger;
 	while(1){
 		menugoster();
 		scanf("%d",&secim);
 		switch (secim){
 			case 0:
 				temizle(&liste);
 				printf("sistemden cikiliyor");
 				exit(EXIT_SUCCESS);
 				break;
 				case 1:
 					yazdir(&liste,duz);
 					break;
		 case 2:
		 	yazdir(&liste,ters);
		 	break;
		 	case 3:
		 		printf("eklemek istediginiz sayi nedir ? :");
		 		scanf("%d",&deger);
		 		sonunaekle(&liste,deger);
		 		break;
		 		case 4:
		 			printf("\n listedeki eleman sayisi :%d",liste.elemansayisi);
		 			printf("\n kacinci elemani cikarayim ? :");
		 			scanf("%d",&sira);
		 			cikar(&liste,sira);
		 			break;
		 			default:
		 				printf("gecersiz secim");
		 				break;
		 				
		 }
		 
 		
	 }
 	
 	
 	
 	return EXIT_SUCCESS;

 	
 }
