// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}
 
// Driver program to test above function
int main()
{
    int a = 20, b = 35;
    printf("GCD For %d %d) =  %d \n",a,b,gcd(a, b));
    return 0;
}
