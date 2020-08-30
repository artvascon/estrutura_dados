#include <stdio.h>
#include <malloc.h>

// int main(){
//     int x = 25;
//     int* y =&x;
//     *y = 30;
//     printf("Valor atual de x: %i\n",x);
//     return 0;
// }

int main(){
    int* y = (int*) malloc(sizeof(int));
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n",*y,z);
    return 0;
}