#include <stdio.h>

int main(){
    int length;
    int width;
    int area;

    length = 10; 
    width = 5; 
    area = length*width;
    printf("Selamat datang di program hitung luas kotak\n");
    printf("Misal panjang %d dan lebar %d maka luasnya %d\n", length, width, area);

    printf("Masukan panjang: \n");
    scanf("%d", &length);
    printf("Masukan lebar: \n");
    scanf("%d", &width);
    area = length*width;
    printf("Luasny adalah: %d\n", area);

    return 0;
}