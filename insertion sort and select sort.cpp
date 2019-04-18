#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void insertionsort(int arr[],int size ){
	int i,j,element;
	 for(i=1;i<50;i++){
   	element = arr[i];
   	j=i-1;
   	while (j>=0 && arr[j] > element){
	   
   	arr[j+1] = arr[j];
   	j--;
}
arr[j+1]=element;
  }
   // sayilari ekrana yazdirma
    printf("\ninsertion NUMBERS AFTER SORT BY\n \n\n");
    for(int i=0; i<50; i++){
        printf("%d, ",arr[i]);
    }
		
}

void selectionsort(int arr[],int size){
	int i,j;
	int minimumindex;
	for(i = 50 ;i<=100; i++){
		minimumindex = i;
		for(j = i+1;j<=100; j++){
			if(arr[j] > arr[minimumindex]){
				minimumindex=j;
			}
		}
		
		
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;
		
		
		
	}
	
	 printf("\n\n selection NUMBERS AFTER SORT BY\n\n");
    for(int i=50;i<=100; i++){
        printf("%d, ",arr[i]);
    }
	
	
}


int main(){
    srand(time(NULL));
int i,j,element;
  int size;
    
    int arr[100];

    // sayilari olusturma
    for(int i=0; i<100; i++){
        arr[i] = rand()%100;
    }

    // t�retilen sayilari ekrana yazdirma
    printf("\nNUMBERS OF RANDOM\n\n");
    for(int i=0; i<100; i++){
        printf("%d, ",arr[i]);
    }

    // insertion sort
   insertionsort(arr,size);
  selectionsort(arr,size);
getchar();
return 0;
}
