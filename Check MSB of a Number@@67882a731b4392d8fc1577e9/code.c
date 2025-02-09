#include <stdio.h>
int main(){
    int num;
    scanf("%d",num);
    int mask= 1 >> 32;
    if(num & mask){
        printf("Set\n");
    }
    else{
        printf("Not Set");
    }
}