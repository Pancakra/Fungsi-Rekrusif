#include <stdio.h>
#include <conio.h>

typedef int angka;
typedef float pecahan;
typedef char huruf;

void main()
{
	system ("cls");
	angka umur;
	pecahan pecah;
	huruf h;
	huruf nama[10];
	
	printf ("Masukan umur anda : "); 
	scanf("%d",&umur);
	printf ("\nUmur anda adalah %d\n",umur);
	
	printf ("\nMasukan bilangan pecahan : "); 
	scanf("%f",&pecah);
	printf ("\nBilangan pecahan kamu input adalah %f\n",pecah);
	
	printf ("\nMasukan nama anda bos : ");
	h=getch();
	printf ("\nHuruf yang anda input %c\n",&h);
	
	printf ("Masukan nama bro : "); 
	scanf("%s",&nama);
	printf ("\nNamamu bro %s",nama);
	
	getch();
}
