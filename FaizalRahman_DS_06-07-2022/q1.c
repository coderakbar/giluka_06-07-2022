// Consider a data base of employee records (at least 5). Each employee record having following
// information –
// Emp_id(integer)
// Emp_name(string)
// Emp_city (string)
// Assume that Emp_id is unique.
// {Use the structure for creating data base}
// a) Write a function to create a database of five employees. Here, data should me taken from the
// user.
// b) Write a function to find out the employee record from this data base on the base of Emp_id.
// c) Write a function to count the number of employees in data base.
// d) Write a function to add 5 more records in data base.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int m;

int length;


// a) part of the question, database created to add five employees
typedef struct 
{
    int emp_id;
    char emp_name[10];
    char emp_city[10];
} employee;


// B) this functon is t
void details(employee n[]){
    
    int input;
    printf("Please give the id of the employee you need details of: \n");
    scanf("%d",&input);
    
    for(int i=0;i<m;i++){
        if(n[i].emp_id == input ){
            printf("The employee details you seek are:\n Name: %s \n city: %s \n", n[i].emp_name , n[i].emp_city);
        }
    }
}

//C) this function is created to count the number of employees
int count(employee n[]){
    
    return length;

}


//D) function to add  more employees to the data base

void add(int a, employee n[]){

    n = (employee*)realloc(n, sizeof(employee)*a); 

    printf("please enter the ids of the employees: \n");
    for(int i=m;i<m+a;i++){
        scanf("%d", &n[i].emp_id);
        length++;
    }


    printf("please enter the names of the employees: \n");
    for(int i=m;i<m+a;i++){
        scanf("%s", n[i].emp_name);
    }

    printf("please enter the cities of the employees: \n");
    for(int i=m;i<m+a;i++){
        scanf("%s", n[i].emp_city);
    }
}

//a) function to add employees to the struct

void create(employee n[],int m){

    printf("please enter the ids of the employees: \n");
    for(int i=0;i<m;i++){
        scanf("%d", &n[i].emp_id);
        length++;
    }


    printf("please enter the names of the employees: \n");
    for(int i=0;i<m;i++){
        scanf("%s", n[i].emp_name);
    }

    printf("please enter the cities of the employees: \n");
    for(int i=0;i<m;i++){
        scanf("%s", n[i].emp_city);
    }

}

int main(void)
{
    //function created to add the details of employees to the database

    printf("please enter the number of employees: \n");
    scanf("%d", &m);

    employee *n = (employee*)malloc(sizeof(employee)*m);

    create(n,m);

    printf("\n \n");

    details(n);

    char pos[4] = "yes";
    printf("Do you wish to know the number of employees in the data base?(enter yes or no) \n");
    char creply[4];
    scanf("%s", creply);
    if(!strcmp(pos, creply)){
        printf("The number of employees are: %d\n", count(n));
    }

    printf("Do you wish to add more employees to the database(enter yes or no)?\n");
    char reply[4];
    scanf("%s", reply);

    if(!strcmp(pos , reply)){
        printf("Please give the number of employees you wish to add: \n");
        int a;
        scanf("%d", &a);
        add(a, n);
    }

    printf("Do you wish to know about the number of employees? \n");
    char breply[4];
    scanf("%s", breply);
    if(!strcmp(pos, breply)){
        printf("The number employees are: %d\n", count(n));
    }

    free(n);

}

