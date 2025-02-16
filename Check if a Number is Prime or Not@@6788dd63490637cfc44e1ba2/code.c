#include <stdio.h>
int main(){
    int n>0,x=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        x++;
    }
    if(x==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}