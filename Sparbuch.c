/*
  *Sparbuch
  Ersteller: Max Eichler
  Erstellt: 07.01.2020
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
	float Anfangsbetrag, Einzahlung, Zinsen, Endbetrag, Zwischenbetrag, eZinsen;
	int i;

//Eingabe

	printf("Geben sie den Anfangsbetrag ein: ");
	scanf("%f", &Anfangsbetrag);
	printf("Geben sie Ihre Einzahlung ein: ");
	scanf("%f", &Einzahlung);
	printf("Geben sie Ihre Zinsen ein: ");
	scanf("%f", &Zinsen);
	printf("Geben sie den Endbetrag ein den Sie erreichen wollen: ");
	scanf("%f", &Endbetrag);
//Verarbeitung
	eZinsen = Zinsen / 100 + 1;
	Zwischenbetrag = (Anfangsbetrag + Einzahlung) * eZinsen;
	i= 0;
	i = i+1;
	printf("%f Euro \t", Zwischenbetrag);
	printf("%i Jahre\n", i);

	do
	{
	i = i+1;
	Zwischenbetrag = (Zwischenbetrag + Einzahlung) * eZinsen;
	printf("%f Euro \t", Zwischenbetrag);
	printf("%i Jahre \n", i);
	}
	while(Zwischenbetrag < Endbetrag);

	printf("Nach %i Jahren haben Sie ihren Wunschbetrag erreicht.", i);


 //Ausgabe
	fflush(stdin);
	getchar();

}

