#include <stdio.h>

int a = 10;
int b = 20;
int c = 30;

int main(){
    int *p = &b;
    *(p-1) = 11;
    *(p+1) = 33;
    printf("a = %d,b=%d,c=%d\n",a,b,c);
    return 0;
}