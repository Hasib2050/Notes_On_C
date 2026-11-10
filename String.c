#include<stdio.h>
#include<string.h>

int main()
{
    // char str[20];

    //scanf("%19[^\n]", str);
    //fgets(str,20,stdin);

    //Using pointer
    /* char *ptr=str;
     while(*ptr!='\0')
     {
         printf("%c",*ptr);
         //Pointer Arithmetic
         ptr++;
     }*/

    // Copies "Hello" to dest
    //strncpy(dest, src)
    //strncpy(dest, src, 4);


    //Appends s2 at the end of s1
    //strcat(s1, s2);
    //strncat(s1, s2, 4);

    // int res = strcmp(s1, s2); //0 neg pos
    //int res = strncmp(s1, s2, 4)

    // pointer to a string literal
    // const char *str = "Hello World";



    /* char s[] = "Hello, World!";

    // Finding the first occurence of 'o' in string s
     char *res = strchr(s, 'o');
     if (res != NULL)
         printf("Character found at: %ld index", res - s);
     else
         printf("Character not found");*/


    /*char s[] = "Hello, World!";

    // Finding the last occurence of 'o' is string s
    char *res = strrchr(s, 'o');

    if (res != NULL)
    printf("Character found at: %ld index", res - s);
    else
    printf("Character not found\n");*/

    printf("%s\n",str);
}

