/*

Find XOR of two numbers without using XOR

*/


#include <stdio.h>


int main()
{
unsigned short int res=0;
int k = 0;
unsigned char  i = 0x01;
unsigned char  j = 0x18;
unsigned char b1=0,b2=0;

// Theoritically if we XOR i^j result should be 3

// Let's write a code with some behavioural logic analysis
// Initially we have to get the bits of both the numbers
// We have to check if they are same then we should set the resulting bit as 0
// Else we should set or the bits and set it to 1
  
for(k=0;k<8;k++)
{

	// Find value of bit1
	b1 = (i & (1 << k));
	b2 = (j & (1 << k));

	// Now Check if they are same or not
	if((b1 &  b2) ? 0 : (b1 | b2))
	res |= 1 << k;

}

printf("\n Res = %x\n",res);

return 0;
}

