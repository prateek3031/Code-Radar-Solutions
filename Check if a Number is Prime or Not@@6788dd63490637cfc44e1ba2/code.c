#include <stdio.h>
int main(){
    int n>0;
    scanf("%d",&n);
    if(n>1 && n%1==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}