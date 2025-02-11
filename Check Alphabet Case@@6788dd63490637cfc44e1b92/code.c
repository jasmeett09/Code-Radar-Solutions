#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
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