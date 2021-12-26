#include <stdio.h>
struct book
{
    char book_name[50];
    char author_name[50];
    float price;
    int volume;
    int pages;
    int id;
};
int main()
{
    struct book *x, y;
    x = &y;
    printf("Enter book name, author name, price, volume, pages, and book id\n");
    scanf("%s%s%f%d%d%d", &x->book_name, &x->author_name, &x->price, &x->volume, &x->pages, &x->id);
    printf("The details of the book are\n");
    printf("%s\n%s\n%f\n%d\n%d\n%d\n", x->book_name, x->author_name, x->price, x->volume, x->pages, x->id);
    return 0;
}