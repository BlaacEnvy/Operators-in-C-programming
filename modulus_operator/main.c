#include <stdio.h>
#include <stdlib.h>

int main()
{
   int q,r,s;
   printf("Enter the value of Q and r separated by a comma:");
   scanf("%d , %d", &q , &s );
   s = q % r;
   printf("The remainder is %d\n", &s);
   return 0;

}
