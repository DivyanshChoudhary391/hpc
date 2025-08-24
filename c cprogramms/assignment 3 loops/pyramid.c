# include <stdio.h>

int main(){
    int num;
    printf("enter the number of rows u want in that pyramid\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i>=j){
                printf("*");
            }
        }
        printf("\n");
    }

    printf("----------------------------------------\n");
     int i;
    for(i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            // for spaces
            printf(" ");

        }
        for(int k=1;k<=(2*i-1);k++){
            //for stars
            printf("*");

            
        }
        printf("\n");
    }

    printf("-----------------------------------\n");
    ;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int s=1;s<=i;s++){
            printf("* ");
        }
        printf("\n");
    }





    return 0;
}