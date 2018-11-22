//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

#define SEUILB -100
#define SEUILH 200

int exo1(void);
int exo2(void);
int exo3(void);
int exo4(void);
int exo5(void);
int main(void)
{

	exo1();
	exo2();
	exo3();
    exo4();
    exo5();
} 

int exo1(void)
{
	unsigned char bin[10]={0,56,78,3,60,15,45,7,55,101};
	unsigned int seuil;
	unsigned int i;
	for (i=0; i<10; i=i+1)
	{
	 seuil=75;
	if (bin[i]<seuil)
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

int exo2(void)
{
	int sat[10]={rand()};

	unsigned int i;

	for (i=0;i<10;i=i+1)
		sat[i]=rand()-16383;
	

	for(i=0;i<10;i=i+1)
	{

	if (sat[i]>SEUILH)
	{
		sat[i]=SEUILH;
	}
	else if (sat[i]<SEUILB)
		{
			sat[i]=SEUILB;
		}
		else 
		{ 
			sat[i]=sat[i];
		}
     }
    return 0;
}

int exo3(void)
{
	int dist[10]={1,5,78,6,7,8,4,89,16,48};
	unsigned int i;
	
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
	
	}
		return 0; 
}


int exo4(void)
{
	int a[4]={15,6,48,5};
	int b[4]={16,80,4,7};
	unsigned int i;
	unsigned int j;
	
	for (i=0;i<4;i=i+1)
	{
		j=4-i-1;
		b[i]=a[j];
	}
	return 0;
}

int exo5(void)
{
	int miroir[6]={2,4,7};
	unsigned i;
	
	for (i=0;i<6;i=i+1)
	{
		if (i<6/2)
		{
			miroir[i]=miroir[i];
		}
		else
		{
		    miroir[i]=miroir[5-i];	
		}
	
	}
	return 0;
}

