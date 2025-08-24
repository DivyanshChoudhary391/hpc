
// Create a structure Employee with
// members: emp_id, name, basic_salary, hra, da, gross_salary.

// Input employee details.
// Calculate gross_salary
// = basic + hra + da.
// Print the salary slip.

# include <stdio.h>
# include <string.h>

struct employee_salary{
    char emp_id[20];
    char name[20];
    int basic_salary;
    int hra;
    int da;
    int gross_salary;

};

void calculate_salary(struct employee_salary employees[],char search_id[]){
    int found=0;
    for(int i=0;i<5;i++){
        if(strcmp(employees[i].emp_id,search_id)==0){
            found=1;
            printf("-----------------------------------------------\n");
            printf("Salary slip of that employee is\n");
            printf("employee id is      :%s\n",employees[i].emp_id);
            printf("Name is             :%s\n",employees[i].name);
            printf("basic salary is     :%d\n",employees[i].basic_salary);
            printf("da is               :%d\n",employees[i].da);
            printf("hra is              :%d\n",employees[i].hra);
            printf("gross salary  is    :%d\n",employees[i].gross_salary);
            printf("-----------------------------------------------");
            break;

        }
    }
    if(found==0){
        printf("the emp_id you entered is not correct please try with correct id\n");
    }

}

int main(){
    
    struct employee_salary employees[5];

    for(int i=0;i<5;i++){
        printf("enter the employee_id\n");
        scanf("%s",employees[i].emp_id);
        printf("enter the employee name\n");
        scanf("%s",employees[i].name);
        printf("enter the employee basic salary\n");
        scanf("%d",&employees[i].basic_salary);
        printf("enter the employee hra\n");
        scanf("%d",&employees[i].hra);
        printf("enter the employee da\n");
        scanf("%d",&employees[i].da);
        employees[i].gross_salary=employees[i].basic_salary+employees[i].hra+employees[i].da;
    }

    printf("enter the employee_id to print the salary slip\n");
    char search_id[20];
    scanf("%s",search_id);
    calculate_salary(employees,search_id);

    

     
}