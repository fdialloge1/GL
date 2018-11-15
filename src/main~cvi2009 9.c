//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h.h"

int main(void)
{
short int n=0, points=0 ;
		 n=LancerDe();
		 
		 while(!n==1)
		 {
		 if(n%2==0);
		 {
			 points=points+1 ;
		 }
		  else if (n==3)
		  {
			 points=points*2 ;
		 }
		 else (n==5)
		 {
			 if (points=0)
			 {
				 points=0 ;
			 }
					else 
			 {
				 points= points-2;
			 }
		 }
		 }
				 if (n==1)
		 {
			 printf ("fin de tour");
		 }
    return 0;
}
