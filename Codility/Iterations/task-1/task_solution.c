#include <stdio.h>

typedef unsigned short U16;
#define CHKBIT(dst,msk) (dst & msk)


U16 u16Solution(int n)
{

 int cnt = 0;
 static int u16cnt = 0;

 while(n != 0)
 {

 if(CHKBIT(n,0x01))
 {
 if(cnt > u16cnt)
 {
 u16cnt = cnt;
 } 
 cnt = 0;
 }
 else
 {
       cnt++;
 }
 n = n >> 1;

 } 

return u16cnt;
}


int main()
{

 int n = 0;
 n =256;
 printf("\nMaximum Number of Zeroes  %d\n",u16Solution(n));

 return 0;
}
