#include<stdio.h>
int main(){
    int m;
    int n;
    printf("Enter No. Of Rows : ");
    scanf("%d",&m);
    printf("Enter No. of Column : ");
    scanf("%d",&n);
    //*********.....upto n no of stars
    for(int i = 1; i<=m; i++){  //outer loop----> No of lines
    for (int i = 1; i <= n; i++)  // Inner loop----> No of stars in each line
    {
        printf("*");
    }
    printf("\n"); //hsr line ke baad ek enter marne ke loye hai
    }
    return 0;
}