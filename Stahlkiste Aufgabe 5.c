                            /*
  *Projektname
  Ersteller: Max
  Erstellt: Projektdatum
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


// ******* HAUPTPROGR AMM *******
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
//Speicherreservierung (Variablen-Deklaration)
	float breite, laenge, wurzel, hoehe, volumen,inhwurzel;
	int ch;


//Eingabe
	do
	{
	printf("Geben sie die Laenge ein");
	scanf("%f", &laenge);
	printf("Geben sie die Breite ein");
	scanf("%f", &breite);

//Verarbeitung


	wurzel = (laenge * laenge) + (5 * laenge * breite) + (breite * breite);
	printf("%f \n", wurzel);
	inhwurzel = pow(wurzel, 0.5);
	printf("%f \n", inhwurzel);
	hoehe = (inhwurzel - laenge - breite) / 6;
	printf("%f \n", hoehe);
	volumen = laenge * breite * hoehe;
	printf("%f \n", volumen);
	fflush(stdin);
	printf("Druecken sie E zum Beenden oder Enter zum Ford fahren");
	ch = getchar();
	}
	while (ch != 69);
	return 0;


 //Ausgabe
	fflush(stdin);
	getchar();

}

