#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 


#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book *books, int n);

int main()
{
	//struct book my_books[3];
	struct book* my_books = (struct book*)malloc(sizeof(struct book) * 3);

	if (!my_books) exit(1);
	
	my_books[0] = (struct book){ "123", "456" };
	my_books[1] = (struct book){ "456", "789" };
	my_books[2] = (struct book){ "789", "123" };

	print_books(my_books, 3);

	return 0;
}

void print_books(const struct book *books, int n)
{
	/*for (int i = 0; i < n; ++i)
		printf("Book %d : \"%s\" written by \"%s\".\n", i + 1, books[i].name, books[i].author);*/
	for (int i = 0; i < n; ++i)
		printf("Book %d : \"%s\" written by \"%s\".\n", i + 1, books[i].name, books[i].author);
}