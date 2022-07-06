// 7. Write a C program to read the full name of the customers and their telephone
// numbers. Full name includes Surname followed by surname name and then the middle
// name. Reconstruct the customer's full names with surname surname followed by comma
// (,) and initials of the surname and middle names. Display this customer list along with
// their telephone no.
// E.g Ghokle Suraj Ram 9876512345
// should be written as
// Ghokle,S.R 9876512345
// Input to the program:
// Enter names and telephone numbers
// sharma anil sudhir 1234
// verma mona abhay 9876
// garg sona abhi 7654
// modak tinu pintu 9870
// shree sahab sumit 8765
// Output of the program:
// Customer list
// garg,s.a 7654
// modak,t.p 9870
// sharma,a.s 1234
// shree,s.s 8765
// verma,m.a 9876

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

//main struct to generate our database
typedef struct{
    char surname[100];
    char first[100];
    char middle[100];

    int phone;
}customer;


int main(void){
    int m;
    printf("Please enter the number of customers: \n");
    scanf("%d", &m);

    //allocating the right memory
    customer *n = (customer *)malloc(sizeof(customer) * m);

    
    printf("Enter the name and phone number of the customers: \n");
    for(int i = 0;i < m;i++){
        scanf("%s %s %s", n[i].surname, n[i].first, n[i].middle);
        scanf("%d", &n[i].phone);
    }

    //this function only prints the first letter of the f_name and m_name
    printf("Customer list: \n");
    for(int i=0;i<m;i++){
        printf("%s,%c.%c %d\n", n[i].surname, n[i].first[0], n[i].middle[0], n[i].phone);
    }

    free(n);

}
