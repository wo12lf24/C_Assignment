#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[10];
    int count = 0;
    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", &word);
    int length = strlen(word);

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] == word[length - i - 1])
        {
            count++;
        }
    }
    if ((length / 2) == count++)
    {
        printf("ȸ���Դϴ�.\n");
    }
    else
    {
        printf("ȸ���� �ƴմϴ�.\n");
    }

    return 0;
}