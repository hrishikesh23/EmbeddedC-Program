#include <stdio.h>

// Generic Way (x > y) ? x : y;

/*
x = 1		0000 0001
y = 2           0000 0010
           (x^y)0000 0011
        (y^(x^y)0000 0001 this is nothing but x 

*/

int main()
{

 // Find Min and Max of x,y
 
 int x = 20, y = 10;
 int r = 0;

// Case 1 : When x < y .. the expression will turn out to be true and all ones
// Hence resulting into = y ^ ((x ^ y) & ~0) = y ^ ((x ^ y)) = x
 r = y ^ ((x ^ y) & -(x < y));

 printf("\n Smaller Value = %d\n",r);

// Case 2 : When x > y .. then expression will turn out to be false and all zeroes
// Hence resulting into = x ^ ((x ^y) & ~1) = y ^ (( x ^ y ) & 0) = y
 r = x ^ ((x ^ y) & -(x < y));

 printf("\n Greater Value = %d\n",r);

 return 0;

}
