//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"



int main(void) 
{   
	unsigned char succes=0,score[100],score_max=0;
	unsigned char i,i2,j;
	unsigned short comb_gagn[6]={16,1,6,33,45,8};
	unsigned char comb_joueur[6]={46,48,36,8,1,20};
	
	for(i=0;i<100;i++)
	{
	 for(i2=0;i2<6;i2++)
	 {
		 comb_gagn[i2]=tirerNumero();
		 if(comb_joueur[i2]==comb_gagn[i2])
		 {
			succes++; 
		 }
		 else
		 {succes=succes;}
	 }
	 score[i]=succes;
	    if(score[1]<score[i])
		{score_max=score[i];}
		else
		{score_max=score[1];}
	 
	
	}
	return score_max;
}

	

	

