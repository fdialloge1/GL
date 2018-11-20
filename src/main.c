//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
	unsigned char bin[10]={0,566,2,3,4,15,45,7,555,101};
	unsigned int seuil=101  ;
	unsigned i;
	for (i=0; i<10; i=i+1)
	{
	if (bin[10]<seuil)
	{
	 bin[i]=0;	
	}
	else
	{
		bin[i]=1;
	}
	}
	
    return 0;
} 
  
