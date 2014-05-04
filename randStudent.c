#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "student_info.h"


void main()
{	int num[40];
        int flag=0;
 	int i,j,k;
 	srand(time(NULL));
 	for(i = 0;i <(sizeof(info)/sizeof(struct student));i++)
 	{
 		j = rand() %(sizeof(info)/sizeof(struct student)); 
		num[i]=j;
		for(k=0;k<i;k++)
			if(num[k]==j)
				{ 
				  flag=1;
				  break;
				}
		if(flag==1) 
			{ 
			  flag=0;
			  i--;
			  continue;	
			}
		printf("%d - %s\n", info[j].id, info[j].name);
 		if((i+1)%4==0)
		  {
			printf("\n");
		  }
		
		
 	}

}
