#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()

{
    float r;
    float alan;
    float cevre;

    printf("Yaricap Giriniz : ");
    scanf("%f",&r);

    alan = pi*r*r;
    cevre = 2*pi*r;

    printf("Dairenin Alani : %f \n",alan);

    printf("Dairenin Cevresi : %f\n",cevre);

    if(alan>cevre)
    {
        printf("Dairenin Alani Cevresinden Buyuk.");
    }
    else
    {
        printf("Dairenin Cevresi Alanýndan Buyuk.");
    }




    return 0;
}
