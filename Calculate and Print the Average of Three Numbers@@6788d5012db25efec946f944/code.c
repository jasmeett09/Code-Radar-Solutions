#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum = a+b+c;
    printf("Average: %.2f",sum/3.0);
    return 0;
}