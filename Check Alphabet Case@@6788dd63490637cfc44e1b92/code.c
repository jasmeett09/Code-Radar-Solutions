#include<stdio.h>
int main(){
    int a;
    scanf("%s",&a);
    if (a=='ABCDEFGHIJKLMNOPQRSTUVWXYZ'){
        printf("Uppercase");
    }
    else if(a=='abcdefghijklmnopqrstuvwxyz'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}