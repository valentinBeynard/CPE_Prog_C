#include <stdio.h>

/*
	Permet de mettre en oeuvre un 'formatage'/une organisation de donnée à l'aide
	d'une structure

*/

// Structure
typedef struct
{
	char R;
	char G;
	char B;
	char aplha;
}RGBA;

int main()
{

	// Déclaration et initialisation des structures
	RGBA mes_couleurs[10] =
			{
				{0xFF, 0x00, 0x00, 0x10},
				{0xFF, 0xFF, 0x00, 0x10},
				{0xFF, 0x00, 0xFF, 0x80},
				{0xFF, 0xFF, 0xFF, 0x10},
				{0xFF, 0x00, 0x00, 0xDD},
				{0xBB, 0xF0, 0xAB, 0xCC},
				{0x15, 0x00, 0x00, 0xBB},
				{0xB0, 0x00, 0x48, 0xAA},
				{0xF4, 0x00, 0x00, 0xFF},
				{0x41, 0x00, 0x00, 0xFF}
			};


}
