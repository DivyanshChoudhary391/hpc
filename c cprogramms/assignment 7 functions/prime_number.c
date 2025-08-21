# include <stdio.h>

void check_prime(){
    int num;
    int flag=0;
    printf("Enter the number which you want to check ");
    fflush(stdout); 
    scanf("%d",&num);

    for(int i=2;i<num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("No is NOT Prime ");}
    else 
        printf("No is Prime");
    

}
int main(){
    
    check_prime(); //without argument and without return

    return 0;
}