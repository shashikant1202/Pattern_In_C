#include<stdio.h>
int main(){
    int m;
    int n;
    printf("How many lines : ");
    scanf("%d",&m);
    printf("How many Stars you want to print in a single line : ");
    scanf("%d",&n);
    //*********.....mupto n no of stars
    for(int i = 1; i<=m; i++){  //outer loop----> No of lines
    for (int i = 1; i <= n; i++)  // Inner loop----> No of stars in each line
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}