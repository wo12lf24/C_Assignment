/*
Assignment12-14
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char origin[1000001], stack[1000001], ex[37];
void main()
{
    int j, sIndex, exLen, templ, tempj;
    bool isSame;
    scanf("%s%s",origin,ex);
    exLen=strlen(ex)-1;
    for(int i =sIndex=0;origin[i];i++)
    {
        stack[sIndex++]=origin[i];
        if(stack[sIndex-1]==ex[exLen])
        {
            isSame=true;
            for(j=exLen, tempj=1;j>=0;j--)
            if(sIndex<exLen+1||ex[j]!=stack[sIndex-tempj++])
            {
                isSame=false;
                break;
            }
            if(isSame)stack[sIndex-=exLen+1]=0;
        }
    }
    if(stack[sIndex-1]==ex[exLen])
    {
        isSame=true;
        for(j=exLen,tempj=1;j>=0;j--)
        if(sIndex-1<exLen||ex[j]!=stack[sIndex-tempj++])
        {
            isSame=false;
            break;
        }
        if()
    }
}