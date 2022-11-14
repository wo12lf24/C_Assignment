#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pFile;
    long lSize;
    char *buffer;
    size_t result;

    pFile = fopen("C\\Assignment9\\Assignment9-3\\mystery.txt", "rb");
    if (pFile == NULL)
    {
        fputs("File error", stderr);
        exit(1);
    }

    // ������ ũ�⸦ ISize �� �����Ѵ�.
    fseek(pFile, 0, SEEK_END);
    lSize = ftell(pFile);
    rewind(pFile);

    // ��ü ������ ������ ���� �� ���� ������ ũ��� �޸𸮸� �Ҵ��Ѵ�.
    buffer = (char *)malloc(sizeof(char) * lSize);
    if (buffer == NULL)
    {
        fputs("Memory error", stderr);
        exit(2);
    }

    // �� ������ ������ ���ۿ� �����Ѵ�.
    result = fread(buffer, 1, lSize, pFile);
    if (result != lSize)
    {
        fputs("Reading error", stderr);
        exit(3);
    }

    /* ���� ������ ��� ������ ���ۿ� ���� �ȴ�. */

    // ����
    fclose(pFile);
    free(buffer);
    return 0;
}