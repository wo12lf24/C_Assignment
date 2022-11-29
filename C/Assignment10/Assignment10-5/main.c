/*
Assignment10-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *text;

    printf("Enter limit of the text: ");
    scanf("%d", &n);

    text = (char *)malloc(n * sizeof(char));

    printf("Enter text: ");
    getchar();
    gets(text);
    printf("Inputted text is: %s\n", text);

    free(text);
    return 0;
}