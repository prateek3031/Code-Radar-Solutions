#include <stdio.h>
int main(){
    int lsb,num;
    scanf("%d %d",&lsb,&num);
    printf("d",(lsb= num & -num));
}