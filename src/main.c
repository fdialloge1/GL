//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	 char phrase[100]= "je m'appelle Lea Dupont et j'ai 19 ans";
	 char nom[100];
	 char prenom[100];
	 unsigned short annaiss;
	 scanf(phrase,"%s %s %u",nom,prenom,annaiss);
	 
	 MessagePopup("Salut",phrase);
    return 0;
}
