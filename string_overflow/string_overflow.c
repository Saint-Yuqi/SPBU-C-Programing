#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100] = "Hello, ";
    char name[20];
    char t[100];

    puts("What is your name?");

    // scanf %s -- string, %[^\n]s -- string with spaces (multiple words)
    // Fix format string to also avoid overflow.
    // See man 3 scanf or https://www.man7.org/linux/man-pages/man3/scanf.3.html#EXAMPLES
    // scanf("%[^\n]s", name) if we input so many 
    // it will appear  illegal hardware instruction !
    fgets(name ,20, stdin);
    name[strcspn(name, "\n")] = 0;

    strcat(s, name);
    strcat(s,"!");
    puts(s);
    return 0;
}