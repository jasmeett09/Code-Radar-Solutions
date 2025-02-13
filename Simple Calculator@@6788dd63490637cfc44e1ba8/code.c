#include<stdio.h>
int main(){
    int a,b,d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        d=a+b;
        printf("%d",d);
        break;
        case '-':
        d=a-b;
        printf("%d",d);
        break;
        case '*':
        d=a*b;
        printf("%d",d);
        break;
        case '/':
        if (b>0){
            d=a/b;
            printf("%d",d);
        }
        else{
            printf("error");
        }
        break;
        default:
        printf("error");
        break;
    }
    
}