/* list.c
 * a simple linked list implemented in C
*/

#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];

} book;

int main()
{
	strcpy(book.title, "test");
	printf("%s\n", book.title);	
	
}
