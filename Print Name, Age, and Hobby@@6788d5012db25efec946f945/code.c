#include <stdio.h>

int main() {
    char a[90];
    int b;
    char c[390];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}