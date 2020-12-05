#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,spc,rows,c,d=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(a=1;a<=rows;a++)
   {
         for(c=spc;c>=1;c--)
            {
              printf(" ");
            }
	   for(b=1;b<=a;b++)
	   printf("%d ",d++);
	printf("\n");
    spc--;
   }
    return 0;
}


