#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b ;
scanf("%d %d",&a, &b);
int product = a*b;
if (product %2 == 0)
{
printf("Even"); 
}
else{
    printf("Odd");
}


    return 0;
}