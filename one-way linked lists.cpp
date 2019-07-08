#include"stdio.h"
#include"stdlib.h"

typedef struct eleman{
	int deger;
	struct eleman *sonraki;
	
}Eleman;

typedef struct {
	 Eleman* baslangic;
	 int elemansayisi;
}Liste;


void hazirla(Liste *liste){
	
	liste->baslangic=(Eleman*) malloc(sizeof (Eleman));
	liste->baslangic->sonraki=NULL;
	liste->elemansayisi = 0;	
}

void temizle(Liste *liste){

	Eleman *ptr = liste->baslangic;
	Eleman *temizlenecek;
	
	printf("\n liste temizleniyor");
	while(ptr->sonraki != NULL){
		temizlenecek = ptr;
		ptr =ptr->sonraki;
		free(temizlenecek);
		
	}	
	free(ptr);
}

void yazdir(Liste *liste){
	printf("\n listedeki eleman sayisi %d\n",liste->elemansayisi);
	Eleman* ptr= liste->baslangic;
	int i=1;
	while(ptr->sonraki!=NULL){
		printf("%2d. eleman: %d\n",i,ptr->sonraki->deger);
		ptr= ptr->sonraki;
		i++;
	}

}

void ekle(Liste *liste,int deger){
    // listeye yeni eleman ekleme
    Eleman* yenieleman= (Eleman*) malloc(sizeof (Eleman));
    yenieleman->deger=deger;
if(liste->elemansayisi==0)
{
	liste->baslangic->sonraki=yenieleman;
}
else{
	Eleman* ptr= liste->baslangic;
    int i=0;
     while(i<liste->elemansayisi){
     	ptr=ptr->sonraki;
     	i++;
	 }
ptr->sonraki=yenieleman;

}
yenieleman->sonraki=NULL;
liste->elemansayisi++;

	}

void cikar(Liste *liste,int sira){
	if(sira<1 || sira>liste->elemansayisi){
		printf("\ngecersiz deger !");
		return;
	}
	liste->elemansayisi--;
	//tek eleman vara özel iþlem
	if(liste->elemansayisi==1){
		free(liste->baslangic->sonraki);
		liste->baslangic->sonraki=NULL;
		return;
	}
	//cikarma islemi burda yapilir
	Eleman* ptr=liste->baslangic;
	int i=0;
	//cikarlrilacak elemana kadar git;
	while(i < sira-1){
		ptr=ptr->sonraki;
		i++;
	}
Eleman *temp=ptr->sonraki;
ptr->sonraki=ptr->sonraki->sonraki;
free(temp);	
	
}
void menugoster(){
	printf("1. listeyi yazdir\n");
	printf("2. listeye eleman ekle\n");
	printf("3. listeden lemean cikar\n");
	
}





int main(){
	
	
	
	Liste liste;
	hazirla(&liste);
	 int secim,sira,deger;
	 
	 while(1){
	 	menugoster();
	 	scanf("%d",&secim);
	 	
	 	switch(secim){
	 		case 0:
	 			temizle(&liste);
	 			printf("sistemden cýkýlýyor!");
	 			exit(EXIT_SUCCESS);
	 			break;
		case 1:
			yazdir(&liste);
		break;
	
		 case 2:
		 	scanf("%d", &deger);
		 	ekle(&liste, deger);
		 break;
		 case 3:
		 	printf("\nlistedeki eleman sayisi :%d",liste.elemansayisi);
		 	printf("\n kacinci elemani cikaralim ?");
		 	scanf("%d",&sira);
		 	cikar(&liste,sira);
		 	break;
		default :
			printf("gecersiz secim");
			break;
	 	
	}	
	 	
	 }
	return EXIT_SUCCESS;
	
}
