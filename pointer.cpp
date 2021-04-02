#include <stdio.h>
int main()
{
	char c[] = "abcd"; 
	char c[50] = "abcd"; 
	char c[] = {'a', 'b', 'c', 'd', '\0'}; 
	char c[5] = {'a', 'b', 'c', 'd', '\0'};
	
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
