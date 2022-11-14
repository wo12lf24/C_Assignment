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

    // 파일의 크기를 ISize 에 저장한다.
    fseek(pFile, 0, SEEK_END);
    lSize = ftell(pFile);
    rewind(pFile);

    // 전체 파일의 내용을 받을 수 있을 정도의 크기로 메모리를 할당한다.
    buffer = (char *)malloc(sizeof(char) * lSize);
    if (buffer == NULL)
    {
        fputs("Memory error", stderr);
        exit(2);
    }

    // 그 파일의 내용을 버퍼에 저장한다.
    result = fread(buffer, 1, lSize, pFile);
    if (result != lSize)
    {
        fputs("Reading error", stderr);
        exit(3);
    }

    /* 이제 파일의 모든 내용은 버퍼에 들어가게 된다. */

    // 종료
    fclose(pFile);
    free(buffer);
    return 0;
}