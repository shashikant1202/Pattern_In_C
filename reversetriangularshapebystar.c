#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:- ");
    scanf("%d",&n);
    for(int i = n; i<=1; i++){  //no of lines / rows --> i
        for(int j = 1; j<=n+1-i; j++){    //no of columns --> 
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}