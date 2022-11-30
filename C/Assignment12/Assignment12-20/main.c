/*
Assignment12-20
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>

int n, ans, len;
char buf;

int main()
{
    scanf("%d%*c", &n);
    int top = 0;
    char arr[100001];
    for (int i = 0; i < n; ++i)
    {
        scanf("%c%*c", &buf);
        if (buf == '0')
        {
            if (top <= 0)
                continue;
            arr[top--] = '\0';
            continue;
        }
        arr[top++] = buf;
    }
    if (top)
        printf("NO");
    else
        printf("YES");
    return 0;
}