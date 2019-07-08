#include <stdio.h>
#define SIZE 10000
 
//Dizimizi olusturduk ve 10.000 eleman alacak sekilde boyut verdik.
int myArray[SIZE - 1];
 
//fonksiyonuma dizi parametresi g�nderiyoruz.
void selectionSort(int x[])
{
    //i� d�ng� ve dis d�ng� i�in degiskenker.
    int i, j;
    //Anahtar deger.
    int key;
 
    //Dis d�ng�m�z basliyor.
    for( i = 0; i < SIZE; i++)
    {
        //Her adimda anahtar deger belirliyoruz
        key = i;
 
        //Anahtar degerin sagindaki sayilarla karsilastirma yapacagimiz i�in i+1'den basliyoruz.
        //Soldaki sayilar zaten sirali hale geliyor.
        for(j = i + 1; j < SIZE; j++) { if(myArray[key] > myArray[j])
            {
                //dizide key degerinden daha k���k bir sayi buldugumuzda key degerine atiyoruz.
                key = j;
            }
 
        }
        //Yer degistirme fonksiyonumuzu �agiriyoruz. Dikkat edin parametre olarak sayilari degil, indisleri g�nderiyoruz.
        swapf(i, key);
    }
}
 
//x ve y parametleri indistir, dizinin ilgili indislerindeki degerleri swap eden fonksiyon.
void swapf(int x, int y)
{
    int temp;
    temp = myArray[x];
    myArray[x] = myArray[y];
    myArray[y] = temp;
 
}
 
 
//Siralanmis diziyi ekrana bastiran fonksiyon.
void printSorted()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        printf("%d\n", myArray[i]);
    }
}
 
 
//Bize random olarak 10.000 tane sayi olusturan fonksiyon.
void init()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        myArray[i] = rand()%10000;
    }
}
 
//Bu da bizim main fonksiyonu, yalnizca olusturdugumuz fonksiyonlari �agiriyoruz.
int main()
{
    init();
    selectionSort(myArray);
    printSorted();
    return 0;
}
