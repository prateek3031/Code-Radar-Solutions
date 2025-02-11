#include <stdio.h>
int main(){
    int number,n;
    scanf("%d",&n);
    number &=-(1 << n);
    printf("%d",number);
}