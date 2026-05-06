#include <stdio.h>
#include <stdlib.h>

int main(){
int N,i ;
scanf("%d", &N);
for(i = N; i >= 1; i--){
    printf("%d" ,i);
    if(i > 1) {
        printf(",");
    }
}



    return 0;
}