#include <stdio.h>


int main()
{

int i = 0x330003;
int count = 0;
while(i!=0)
{
  if(i&0x01)
  count++;
  i >>= 1;

}

printf("\n Total Number of Set bits = %d\n",count);



return 0;
}
