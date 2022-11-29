/*
Assignment12-5
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputNumber;
    scanf("%d", &inputNumber);
    char bracket[50];
    for (int i = 0; i < inputNumber; i++)
    {
        int cnt = 0;
        scanf("%s", bracket);
        for (int j = 0; j < strlen(bracket); j++)
        {
            if (bracket[j] == '(')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            if (cnt < 0)
            {
                printf("NO\n");
                break;
            }
        }
        if (cnt == 0)
        {
            printf("YES\n");
        }
        else if (cnt > 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}