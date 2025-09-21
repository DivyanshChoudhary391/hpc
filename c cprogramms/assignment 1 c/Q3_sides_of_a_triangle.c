# include <stdio.h>

int main(){
    int side1,side2,side3;
printf("enter the first number\n");
scanf("%d",&side1);
printf("enter the second number\n");
scanf("%d",&side2);
printf("enter the third number\n");
scanf("%d",&side3);

if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
    printf("yes the triangle can be formed\n");

    if(side1==side2 && side2==side3 ){
        printf("traingle is equilateral\n");
    }
    else if(side1==side2 || side2==side3 || side3==side1){
        printf("the triangle is isosceles\n");
    }
    else{
        printf("triangle is scalene\n");
    }

}
else{
    printf("triangle cannot be formed");
}


}