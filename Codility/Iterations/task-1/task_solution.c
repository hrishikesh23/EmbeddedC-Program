#include <stdio.h>

#define CHKBIT(dst,msk) (dst & msk)

int main()
{

 int n = 15;
 int cnt = 0;
 static int scnt = 0;

 while(n != 0)
 {

 if(CHKBIT(n,0x01))
 {
 if(cnt > scnt)
 {
 scnt = cnt;
 } 
 cnt = 0;
 }
 else
 {
       cnt++;
       
 }
 n = n >> 1;

 } 

 printf("\nMaximum Number of Zeroes  %d\n",scnt);
 return 0;
}
