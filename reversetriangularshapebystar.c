#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:- ");
    scanf("%d",&n);
    for(int i = n; i<=1; i++){  //no of lines / rows --> i
    int a = n;
        for(int j = 1; j<=a; j++){    // if i = 1, then must have j = 4
            printf("* ");
            a--;
        }
        printf("\n");
    }
    return 0;
}