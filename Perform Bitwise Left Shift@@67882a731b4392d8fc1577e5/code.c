#include <stdio.h>
int main(){
    int value;
    scanf("%d",&value);
    int shift_count;
    scanf("%d",shift_count);
    int result=value << shift_count;
    printf("%d",result);
}