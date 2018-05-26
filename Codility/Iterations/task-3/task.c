#include <stdio.h>


int main()
{

 int rows = 0, col = 0, space = 0, tot_rows = 5;


 for(rows=0;rows<5;rows++)
 {

    for(space=0;space<tot_rows;space++)
    {

	printf(" ");
    }

    tot_rows--;

    for(col=0;col<=rows;col++)
    {
       printf("%d ",rows);
    }


 printf("\n");
 }


 return 0;
}
