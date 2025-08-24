// Write a program to add first seven terms of the following series: 1/1!
// +2/2! +3/3! +4/4!.....................
# include <stdio.h>

int factorial(int num){
    
    if(num==1|| num==0){
        return 1;
    }

    return num*factorial(num-1);
    
}

int main(){
    int terms;
    printf("enter the number of terms for series\n");
    scanf("%d",&terms);
    float sum=0;

    for(int i=1;i<=terms;i++){
        sum=sum+i/(float)factorial(i);
        
    }


    printf("the sum of series is %f ",sum);
    return 0;

    
}