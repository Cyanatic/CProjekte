/*
  *Projektdatum
  Ersteller: Max
  Erstellt: 11.11.2019
*/
// Einbindung von Umlauten:
#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225
//Beispiel: printf("Fl%cche: ",ae); = Ausgabe von "Fläche"


// ******* HAUPTPROGRAMM *******
#include <stdio.h>
int main(int argc, char *argv[])
{
//Speicherreservierung (Variablen-Deklaration)
	float PromAk;
	int Zeit;

//Eingabe
	printf("Tabelle zur Promilleabnahme \n");
//Verarbeitung
	do
	{
		Zeit = Zeit+1;
		PromAk = 0.8 - 0.15 * Zeit;
		if (PromAk<0)
		{
			PromAk=0;
		}
		printf("Promille: %f \t", PromAk);
		printf("Zeit in h: %i \n", Zeit);
	}
	while(PromAk > 0);

 //Ausgabe

	printf("%f", PromAk);

	fflush(stdin);
	getchar();

}

