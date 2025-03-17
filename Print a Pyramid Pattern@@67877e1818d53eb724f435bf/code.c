#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,s;
    for(i=1;i<=n;i++){
        for (s = 1;s<=n-i;s++) {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}