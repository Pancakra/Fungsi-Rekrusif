#include <stdio.h>
#include <conio.h>

typedef struct Mahasiswa {char NIM [9]; char nama[30]; float ipk;};
void main()
{
	struct Mahasiswa mhs;
	system ("cls");
	printf ("NIM : ");
	scanf ("%s",&mhs.NIM);
	printf ("NAMA : ");
	scanf ("%s",&mhs.nama);
	printf ("IPK : ");
	scanf ("%f",&mhs.ipk);
	printf ("Data anda : \n");
	printf ("NIM :%s\n",mhs.NIM);
	printf ("NAMA :%s\n",mhs.nama);
	printf ("IPK :%f\n",mhs.ipk);
	getch();
}
