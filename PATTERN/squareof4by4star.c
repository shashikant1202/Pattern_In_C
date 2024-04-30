#include<stdio.h>
int main(){
    int m;
    int n;
    printf("Enter The No. Of Rows And Column of Square : "); //Square me row and column same hi hoga iliye dono ka input ek hi hoga 
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)  //for the no of ROWS
    {
        for (int i = 1; i <= m; i++) //for the no of COLUMNS
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    