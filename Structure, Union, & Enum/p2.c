#include <stdio.h>

struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() {
    int num_employees;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    struct Employee *employees = (struct Employee*)malloc(num_employees * sizeof(struct Employee));

    for (int i = 0;i<num_employees; i++){
        printf("\nEnter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Age: ");
        scanf("%d", &employees[i].emp_age);
        printf("Role: ");
        scanf("%s", employees[i].emp_role);
        printf("City: ");
        scanf("%s", employees[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &employees[i].emp_experience);
        printf("Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < num_employees; i++) {
        printf("Employee %d:\n", i+1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].emp_name);
        printf("Age: %d\n", employees[i].emp_age);
        printf("Role: %s\n", employees[i].emp_role);
        printf("City: %s\n", employees[i].emp_city);
        printf("Experience: %d years\n", employees[i].emp_experience);
        printf("Company Name: %s\n", employees[i].emp_company_name);
        printf("\n");
    }

    free(employees);

    return 0;
}
