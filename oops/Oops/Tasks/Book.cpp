include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book books;
    int i;

    //for(i = 0; i < 5; i++)
    //{
       // printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &books.id);

        printf("Enter Title: ");
        scanf("%s", books.title);

        printf("Enter Author: ");
        scanf("%s", books.author);

        printf("Enter Price: ");
        scanf("%f", &books.price);
   // }

    printf("\n----- Book Repository -----\n");

   // for(i = 0; i < 5; i++)
    //{
        //printf("\nBook %d Details\n", i + 1);
        printf("ID = %d\n", books.id);
        printf("Title = %s\n", books.title);
        printf("Author = %s\n", books.author);
        printf("Price = %.2f\n", books.price);
   // }

    return 0;
}