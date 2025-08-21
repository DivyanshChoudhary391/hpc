# include <stdio.h>
# include <math.h>
# include <stdbool.h>

bool armstrong(int num){
    int sum=0;

    int original_number=num;

    

    while(num!=0){
        int rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;

    }
    printf("%d",sum);

    if(sum==original_number){
        return true;
    }
    else
        return false;
    

}

int main(){
    int num;
    printf("enter the number which want to check for armstrong \n");
    scanf("%d",&num);

    bool armstrong_check=armstrong(num);
    if(armstrong_check){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }



    


}