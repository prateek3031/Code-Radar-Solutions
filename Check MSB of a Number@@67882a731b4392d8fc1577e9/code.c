#include <stdio.h>
int main(){
    int num;
    scanf("%d",num);
    int mask= 1 << 32;
    if(num & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}