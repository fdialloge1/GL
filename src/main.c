//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int exo1(void);
int exo2(void);
int exo3(void);

int main(void)
{

	exo1();
	exo2();
    return 0;
} 

int exo1(void)
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
	
}

int exo2(void)
{
	int sat[10]={rand()};
	signed int SEUILB=-100;
	unsigned int SEUILH=200;
	
	if (sat[10]>SEUILH)
	{
		sat[10]=SEUILH;
	}
	else if (sat[10]<SEUILB)
		{
			sat[10]=SEUILB;
		}
		else 
		{ 
			sat[10]=sat[10];
		}
		return 0;
 }

int exo3(void)
{
	int dist[10]=(1,5,78,6,7,8,4,89,16,48);
	unsigned i;
	
	for (i=0;i<10;i=i+1)
	{
		if (i==0)
		{
			dist[i]=dist[i];
		}
		else
		{
			dist[i]=dist[i]-dist[i-1];
		}
		return 0;
	}
}
