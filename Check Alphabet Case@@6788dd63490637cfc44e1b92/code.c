#include <stdio.h>
int main(){
    char k;
    scanf("%c",&k);
    if(k >= 'A' && k <= 'Z'){
        printf("Uppercase");
    }
    else if(k >= 'a' && k<= 'z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    
    
}