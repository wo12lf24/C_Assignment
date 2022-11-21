#include <stdio.h>
#define ARR_NUM 5

int main()
{
    int arr[ARR_NUM] = {123,456,789,234,251};
    int cpy[ARR_NUM]={0};

    FILE* fw = fopen("arr.txt", "w");
    FILE*fr=fopen("arr.txt","r");

    for(int i =0;i<ARR_NUM;i++)
    {
        fprintf(fw, "%d\n", arr[i]);
    }
    fclose(fw);

    for(int i =0;i<ARR_NUM;i++)
    {
        fscanf(fr, "%d", &cpy[i]);
        printf("%05d \n", cpy[i]);
    }
    fclose(fr);
}