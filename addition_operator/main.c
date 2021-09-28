#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Enter the value of x and y separated by a comma:");
    scanf("%d, %d", &x, &y);
    z= x+y;
    printf("The sum is %d+ %d= %d", x,y,z);
    return 0;
}
