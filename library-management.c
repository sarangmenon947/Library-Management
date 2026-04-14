#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library {
    char bk_name[30];
    char author[30];
    int pages;
    float price;
};

int main() {
    struct library l[100];
    char ar_nm[30], bk_nm[30];
    int i = 0, j = 0, keepcount = 0;

    while (j != 6) {
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Exit");
        printf("\n\nEnter one of the above : ");
        scanf("%d", &j);

        switch (j) {
            case 1:
                printf("Enter book name = ");
                scanf("%s", l[i].bk_name);

                printf("Enter author name = ");
                scanf("%s", l[i].author);

                printf("Enter pages = ");
                scanf("%d", &l[i].pages);

                printf("Enter price = ");
                scanf("%f", &l[i].price);

                keepcount++;
                i++;
                break;

            case 2:
                printf("You have entered the following information\n");
                for (int k = 0; k < keepcount; k++) {
                    printf("\nBook name = %s", l[k].bk_name);
                    printf("\tAuthor name = %s", l[k].author);
                    printf("\tPages = %d", l[k].pages);
                    printf("\tPrice = %f", l[k].price);
                }
                break;

            case 3:
                printf("Enter author name : ");
                scanf("%s", ar_nm);
                for (int k = 0; k < keepcount; k++) {
                    if (strcmp(ar_nm, l[k].author) == 0)
                        printf("%s %s %d %f\n", l[k].bk_name, l[k].author, l[k].pages, l[k].price);
                }
                break;

            case 4:
                printf("Enter book name : ");
                scanf("%s", bk_nm);
                for (int k = 0; k < keepcount; k++) {
                    if (strcmp(bk_nm, l[k].bk_name) == 0)
                        printf("%s \t %s \t %d \t %f\n", l[k].bk_name, l[k].author, l[k].pages, l[k].price);
                }
                break;

            case 5:
                printf("\nNo of books in library : %d", keepcount);
                break;

            case 6:
                exit(0);
        }
    }
    return 0;
}
