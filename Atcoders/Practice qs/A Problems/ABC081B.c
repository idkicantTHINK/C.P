
#include <stdio.h>
#include <stdlib.h>

int main(){
int N;
scanf("%d", &N );
int A[201];
int count = 0;

for (int i = 0; i < N; i++){
   scanf("%d", &A[i]);
}

while(1){
    int stop = 0;
for (int i = 0; i < N;i++)
{
    if( A[i] %2 != 0)
{
    stop = 1;
   break;
}
}

if(stop){
    break;
}
for(int i = 0; i < N;i++ )
{
    A[i] /= 2;
    } count ++ ;
}
printf("%d\n", count);

    return 0;
}