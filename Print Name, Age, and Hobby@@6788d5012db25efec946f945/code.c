#include <stdio.h>
int main(){
    char a[100];
    scanf("%s",&a);
    int age;
    scanf("%d",&age);
    char b[100];
    scanf("%s",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",b);
    return 0;
}