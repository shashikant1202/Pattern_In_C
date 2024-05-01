#include <stdio.h> 
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
    for(int i = 1; i<=n;i++){  // no of lines / rows---> i
        for(int j= 1;j<=n;j++){  // no of columns --> j
            printf("%d", j);  // for 1 2 3 4 5 .......
        }
        printf("\n");
    }
    return 0; 
    }