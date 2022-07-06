// 6. Write a program using functions to define a structure to describe a Book with
// attributes such as title, author, no. of pages, price, number of sold copies, total
// amount of sold copies etc. Declare an array of book and do the following operations:
// a. Reading book array and populating values in it.
// b. Printing book array and displaying each attribute of each book in the array.
// c. Find and print details of a book with maximum pages
// d. Find and print details of a book with minimum cost.
// e. Compute and store total amount of money earned by selling the books.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct
{
    char title[100];
    char author[100];
    int pages;
    int price;
    int copies;
    int total;

} book;

// A)Reading book and adding values

void input(book n[], int m)
{

    printf("Please enter the Titles of the books: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%s", n[i].title);
    }

    printf("Please enter the authors of the books: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%s", n[i].author);
    }

    printf("Please enter the pages of the books: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n[i].pages);
    }

    printf("Please enter the prices of the books: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n[i].price);
    }

    printf("Please enter the number of copies of the books: \n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n[i].copies);
    }

    int totalcopy = 0;

    for (int i = 0; i < m; i++)
    {
        totalcopy += n[i].copies;
    }
    printf("So the total amount of copies sold are: %d\n\n", totalcopy);
}

// B)
void print(book n[], int m)
{
    char input[100];
    printf("What is the name of the book you seek details of? \n");
    scanf("%s", input);

    for (int i = 0; i < m; i++)
    {
        if (!strcmp(input, n[i].title))
        {
            printf("The details of the book you seek are: \n Author: %s \n pages: %d \n price: %d \n Number of copies sold: %d \n\n", n[i].author, n[i].pages, n[i].price, n[i].copies);
        }
    }
}

// C)Printing the book with maximum pages
void maxpage(book n[], int m)
{
    int maxp = -1;
    for (int i = 0; i < m; i++)
    {
        if (n[i].pages > maxp)
        {
            maxp = n[i].pages;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (n[i].pages == maxp)
        {
            printf("The details of the book with maximum pages are:\n Title: %s \n Author: %s \n pages: %d \n price: %d \n Number of copies sold: %d \n\n", n[i].title, n[i].author, n[i].pages, n[i].price, n[i].copies);
        }
    }
}

// D)Printing book with min price
void minprice(book n[], int m)
{
    int minp = 10e6+2;
    for (int i = 0; i < m; i++)
    {
        if (n[i].price < minp)
        {
            minp = n[i].price;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (n[i].price == minp)
        {
            printf("The details of the book with minimum price are: \n Title: %s \n Author: %s \n pages: %d \n price: %d \n Number of copies sold: %d \n\n", n[i].title, n[i].author, n[i].pages, n[i].price, n[i].copies);
        }
    }
}

// E) total prices of all books combined are:
void totalprice(book n[], int m)
{
    int totalp = 0;
    for (int i = 0; i < m; i++)
    {
        totalp += n[i].price;
    }
    printf("Total prices of all the books combines are: %d\n\n", totalp);
}

// well then there's the main function ofcourse

int main(void)
{

    int m;
    printf("Please enter the number of books: \n");
    scanf("%d", &m);

    book *n = (book *)malloc(sizeof(book) * m);

    input(n, m);

    print(n, m);

    maxpage(n, m);

    minprice(n, m);

    totalprice(n, m);

    free(n);
}