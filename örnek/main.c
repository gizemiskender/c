
#include <stdio.h>
#include <conio.h>
main()
{
   int i,x,max=0;
   for(i=0;i<10;i++) {    printf("Pozitif bir sayi giriniz -->");
   scanf("%d",&x);   //   Klavyeden 10 adet say� al�nd�.
   if (x>=max) { max=x; }   // Her say� giri�inden sonra kontrol yap�l�yor.
   if(x<0) {
      printf("Girdiginiz Sayi Sifirdan Kucuk");
      break; }   //Girilen say� s�f�rdan k���kse d�ng�den ��k�l�yor.
   printf("Girilen sayilarin en buyugu %d \n\n",max);
   //Kontrol�n sonucuna g�re en b�y�k say� g�steriliyor ve tekrar ba�a d�n
