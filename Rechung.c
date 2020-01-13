/*
  *Rechunung
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
	float RechB, StueckP;
	int   Menge;

	//Eingabe
printf("Geben sie die gew%cnschte Menge an\n", ue);
	scanf("%i", &Menge);

	while (Menge !=0)

	{
	printf("\nGeben Sie den St%cckpreis ein\n", ue);
	scanf("%f", &StueckP);
    //Verarbeitung


		RechB = RechB + StueckP * Menge;

		printf("%f \n", RechB);
    	printf("Die Rechnungssumme betr%cgt: ", ae);
		printf("%f \n", RechB);

	printf("Geben sie die gew%cnschte Menge an\n", ue);
	scanf("%i", &Menge);
		if (Menge<0) {
			return 0;
		}




	}
	printf("\nSie haben den Vorgang abgebrochen\n");
	printf("Die Rechnungssumme betr%cgt: ", ae);
	printf("%f ", RechB);



 //Ausgabe
	fflush(stdin);
	getchar();

}

