// Write a program to multiply 2 matrices the input is a 2 dimensional
// matrix.
# include <stdio.h>

int main(){
    int r1,r2,c1,c2;
    printf("please enter the rows and columns of matrix 1\n");
    scanf("%d%d",&r1,&c1);
    printf("please enter the rows and columns of matrix 2\n");
    scanf("%d%d",&r2,&c2);

    if(r1!=c2){
        printf("multiplication of these matrix is not possible\n");
        return 0;
    }
    //input for the matrix 1
    int arr1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
            printf("enter the %d,%d th item ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }
    //input for the matrix 2
    int arr2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("enter the %d,%d th item ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    //multiplication matrix
    int multiplication[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            multiplication[i][j]=arr1[i][j]*arr2[j][i];
        }
    }

    
    return 0;
}