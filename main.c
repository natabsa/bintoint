#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


long int intpow(int i, int j){
    if (j==0) return 1;
    else return i*intpow(i, j-1);
}
int bintoint(char* s){
        if(*s=='\0') return 0;
        else return (s[0]-48)*intpow(2, strlen(s)-1) + bintoint(s+1);
}

int main(void)
{
    printf("%ld\n", bintoint("1111111111"));
    return 0;
}
