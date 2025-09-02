# include <stdio.h>

int main(){
    float radius;
    printf("enter the radius of the sphere for which you want the volume\n");
    scanf("%f",&radius);

    float volume=(4*22*radius*radius*radius)/21;

    printf("%f",volume);
}