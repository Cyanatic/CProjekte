 /*
  *Bierschaum
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
	float Grundmenge, AkMenge, Abbruch, i;



//Eingabe
	printf("Geben sie die Menge an Schaum ein");
	scanf("%f", &Grundmenge);

//Verarbeitung
	AkMenge = Grundmenge * 0.85;
	Abbruch = Grundmenge * 0.009;
	//printf("%f", AkMenge);
	while (AkMenge > Abbruch)

	{
		AkMenge = AkMenge * 0.85;
		i= i+1;
		//printf("%f \n", AkMenge);
	}

	printf("Nach %f Minuten ist der Schaum auf unter 1 Prozent gesunken", i);

 //Ausgabe
	fflush(stdin);
	getchar();

}

