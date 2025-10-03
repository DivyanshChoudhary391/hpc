// Write a program to add 2 matrices the input is a 2 dimensional matrix.

# include <stdio.h>

int main(){
    int rows,cols;
    printf("enter the number of rows of 2 matrix\n");
    scanf("%d",&rows);
    printf("enter the number of columns of 2 matrix\n");
    scanf("%d",&cols);
    


    int arr1[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("enter the %d,%d th item ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("enter the %d,%d th item ",i,j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // for printing the matrix
    printf("********************numbers of one matrix is *****************\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("**********************numbers of second matrix is *****************\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
    printf("****************************their sum is ********************\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",(arr2[i][j]+arr1[i][j]));
        }
        printf("\n");
    }
        

    return 0;
}