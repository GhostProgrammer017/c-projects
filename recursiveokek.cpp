#include <stdio.h>
 
int obeb(int, int);
int okek(int, int);
 
int main() {
    int sayi1 = 180;
    int sayi2 = 48;
    int sonuc = okek(sayi1, sayi2);
    printf("okek(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}
 
int okek(int x, int y) {
    return x * y / obeb(x, y);
}
