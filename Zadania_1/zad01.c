#include<stdio.h>
int main(){
int a;
int b;
int c;
int suma;
int roznica;
int iloczyn;
double iloraz;


printf("Podaj pierwszą liczbę!\n");
scanf("%d",&a);
printf("Podaj drugą liczbę!\n");
scanf("%d",&b);
printf("wybierz metode:\n 1.dodawanie\n 2.odejmowanie\n 3.mnożenie\n 4.dzielenie\n");
scanf("%d",&c);
suma=a+b;
roznica=a-b;
iloczyn=(double)a*b;
iloraz=(double)a/b;
if(c==1){printf("Suma: %d\n",suma);}
if(c==2){printf("Roznica: %d\n",roznica);}
if(c==3){printf("Iloczyn: %d\n",iloczyn);}
if(c==4){printf("Iloraz: %f\n",iloraz);}
if(c<=0 || c>=5){printf("Nie ma takiej opcji\n");}

return 0;}
