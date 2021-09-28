#include <stdio.h>

int multiplication_operator(){
    int a,b,c;
    printf ("Enter the value of a and b separated by a comma:");
    scanf("%d, %d",&a, &b);
    c=a*b;
    printf("%d * %d= %d", a,b,c);
    return 0;



}
