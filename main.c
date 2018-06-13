<<<<<<< HEAD
//????
=======
///stable
>>>>>>> 6a99b2b4af8d5d6d83f1c811c43f2ff3e791d7c2
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
    return 0;
}
