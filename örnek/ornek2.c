/* �kinci Yol - While D�ng�s� */
#include <stdio.h>
#include <conio.h>
main() {
int i,x,max=0;
while(x>0) {
   printf("Pozitif bir sayi giriniz -->");
   scanf("%d",&x);
   if (x>=max) max=x;
   if(x<0) {
      printf("Girdiginiz Sayi Sifirdan Kucuk");
      break; }   //Girilen say� s�f�rdan k���kse d�ng�den ��k�l�yor.
   printf("Girilen sayilarin en buyugu %d \n\n",max); }
getch();
}
