//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
int main(void)

{
	unsigned char succes=0;
	unsigned char i,i2;
	unsigned char comb_gagn[6]={1,45,8,16,20,33};
	unsigned char comb_joeur[6]={46,48,36,8,1,20};
	
	for(i=0,i<6,i++)
	{
	 for(i2=0,i<6,i++)
	 {
		 if(comb_joueur[i]==comb_gagn[i])
		 {
			succes++; 
		 }
		 else
		 {succes=succes}
	 }
	}
	
	
	
    return succes;
}


short tirerNumero(void); 
{
	unsigned char succes=0;
	unsigned char i,i2;
	unsigned char comb_gagn[6]={(tirerNumero)};
	unsigned char comb_joeur[6]={46,48,36,8,1,20};
	
	for(i=0,i<6,i++)
	{
	 for(i2=0,i<6,i++)
	 {
		 if(comb_joueur[i]==comb_gagn[i])
		 {
			succes++; 
		 }
		 else
		 {succes=succes}
	 }
	}
	

