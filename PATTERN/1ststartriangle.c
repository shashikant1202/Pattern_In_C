 #include <stdio.h> 
int main(){
    int n;
    printf("Height and Base of the triangle:- ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)  // no of rows for the height --> i
    {
        for (int j = 1; j <= i; j++)      // no of columns for the base --> j        // dry run kar ke khud se bhi dekho
        {
             
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}