// Write a program to define a struct Student with members: roll number, name, marks.
// Input details of 5 students.
// Display them 

# include <stdio.h>

struct Student_record{
    int roll_no;
    char name[20];
    int marks;
 
};

int main(){
    // enter the values of attributes for 5 students
    struct Student_record students[5];

    for(int i=0;i<5;i++){
        printf("enter the name\n");
        scanf("%s",students[i].name);

        printf("enter the roll no \n");
        scanf("%d",&students[i].roll_no);
        


        printf("enter the marks \n");
        scanf("%d",&students[i].marks);
    } 

    for(int i=0;i<5;i++){
        printf("--------------------------------------\n");
        printf("roll no is %d \n",students[i].roll_no);
        printf("name is %s \n",students[i].name);
        printf("marks are %d \n",students[i].marks);
    }



    return 0;

}