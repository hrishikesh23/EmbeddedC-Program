

// Compiling on Linux Machine - gcc -o exec filename.c

#include <stdio.h>

int main()
{

int p = 0;
unsigned short l = 0;
// Here We have 4th Bit Set
unsigned short int i = 0x1;
// Here We have 5th bit set
unsigned short int j = 0x2;

// Now we have a requirement where in cumulative result has to be stored
// i.e status of i,j

/* OR Example*/
// Considering the maths we should get result as 4th and 5th bit set

unsigned short int k = (i | j);

printf("\n Result K = %d,\n",k);

// Now let's check the usage of & operator
// We can find out using & operator which bits are set in given variable

for(p = 0;p<8;p++)
{
	if(k & (1 << p))
	{
	printf("\n And bit is set index = %d\n",p);
	}

}

// Usage of Xor operator - 
// In Xor operator we have resulting bit as zero if both the bits are same.
// Here we will find if variable j has any matching bit with variable k

/*

	i = 1
	0000 0001
	XOR
	k =3
	0000 0011

XOR     0000 0010
	

*/

    l = i ^ k;
    printf("\n l = %d\n",l);

return 0;
} 

