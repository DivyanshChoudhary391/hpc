# include <stdio.h>

void rectangle_area(int l1, int b1){
    int area;
    area =l1*b1;
    printf("area of rectangle is "+area);

}


int main(){
    int l,b;
    printf("Enter the length and breadth of ractangle ");
    printf("/n");
    scanf("%d%d",l,b);
    rectangle_area(l,b);    
}