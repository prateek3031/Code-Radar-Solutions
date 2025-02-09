#include <stdio.h>
int main(){
    int value,shift_count;
    scanf("%d %d",&value,&shift_count);
    int result=value << shift_count;
    printf("%d",result);
}