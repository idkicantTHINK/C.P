#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main(){

int D;
scanf("%d", &D );
double r = D*D ;
double area = M_PI * r/4;
printf("%.15f", area);




return 0;
}
