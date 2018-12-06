//  Copyright (c) 2018 Antoine Tran Tan
//



#include <userint.h>

#include <ansi_c.h>

#include "my_header.h"


int main(void)

{

	char ligne1[80]="Nom: Pentagone"; 

	char ligne2[80]="nb_sommets: 5";

	char ligne3[80]="coordonnees: 10 20 30 20 30 40 43 53 35 65";

	char Nom[80];

	char Message[80];

	unsigned int nb_sommets;

	int coordonneesx[5];

	int coordonneesy[5];

	int i, detection_erreur=0;

					   

	

	sscanf(ligne1, "%*s %s", Nom);

	sscanf(ligne2, "%*s %u", &nb_sommets);

	sscanf(ligne3, "%*s %d %*d %d %*d %d %*d %d %*d %d %*d", &coordonneesx[0], &coordonneesx[1], &coordonneesx[2], &coordonneesx[3], &coordonneesx[4]);

	sscanf(ligne3, "%*s %*d %d %*d %d %*d %d %*d %d %*d %d", &coordonneesy[0], &coordonneesy[1], &coordonneesy[2], &coordonneesy[3], &coordonneesy[4]);

	

	for(i=0;i<nb_sommets;i++) 
{

	

	if(coordonneesx[i] == -1) 
	{

		detection_erreur++;

	}

	if(coordonneesy[i] == -1)

	{

		detection_erreur++; 

	}

}

if(detection_erreur>=1)

	

	MessagePopup("Erreur","Erreur dans saisie coordonnees");



		else

		{

			sprintf(Message, "C'est un %s ayant %u sommets", Nom, nb_sommets); 

			MessagePopup("Type de polygone", Message);

		}


																

	return 0;



}
