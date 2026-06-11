#include <stdio.h>

struct profile
{
    int id;
    char title[50];
    char author[50];
    float price;
}b;

int main()
{
    struct profile b[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Profile %d\n", i + 1);

        printf("Enter Jersey No.: ");
        scanf("%d", &b[i].id);

        printf("Enter Name: ");
        scanf("%s", b[i].title);

        printf("Enter Team Name: ");
        scanf("%s", b[i].author);

        printf("Enter Total Run in ODI.: ");
        scanf("%f", &b[i].price);
    }

    printf("\n----- Profile Repository -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nProfile %d Details\n", i + 1);
        printf("Jersey = %d\n", b[i].id);
        printf("Name = %s\n", b[i].title);
        printf("Team Name = %s\n", b[i].author);
        printf("Toatal Run ODI = %.2f\n", b[i].price);
    }

    return 0;
}