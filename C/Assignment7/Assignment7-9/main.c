#include <stdio.h>
#include <string.h>
#pragma wraning(disable : 4996)

const char *DICTIONARY[26][2] = {
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
};

void lowerToUpper(char *input, int strLen)
{
    int idx;

    for (idx = 0; idx < strLen; idx++)
    {
        if (input[idx] != ' ')
        {
            input[idx] = input[idx] - 32;
        }
    }
}
int getStrLen(char *input)
{
    int idx = 0;

    while (input[idx] != NULL)
    {
        idx++;
    }
    return idx;
}
int chkInterpret(char *input)
{
    if (input[0] == '.' || input[0] == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void morseToEng(char *input)
{
    int wordLoc, count = 0;
    char *wordToken = strtok(input, " ");

    while (wordToken != NULL)
    {
        if (wordToken[-1] == ' ' || wordToken[-2] == ' ')
        {
            printf(" ");
        }
        for(wordLoc = 0; wordLoc < 26; wordLoc++)
        {
            if (!strcmp(wordToken, DICTIONARY[wordLoc][1]))
            {
                printf("%c", DICTIONARY[wordLoc][0]);
            }
        }
        wordToken = strtok(NULL, " ");
    }
}
void engToMorse(char *input, int strLen)
{
    int idx, wordLoc;

    for (idx = 0; idx < strLen; idx++)
    {
        if (input[idx] == 32)
        {
            printf(" ");
            continue;
        }
        for (wordLoc = 0; wordLoc < 26; wordLoc++)
        {
            if (input[idx] == DICTIONARY[wordLoc][0])
            {
                printf("%s ", DICTIONARY[wordLoc][1]);
                break;
            }
        }
    }
    printf("\b");
}

int main()
{
    char userInput[1000];
    int strLen;
    int interpretChk;

    printf("IN : ");
    scanf("%[^\n]s", userInput);
    strLen = getStrLen(userInput);
    interpretChk = chkInterpret(userInput);

    if (userInput[0] >= 'a' && userInput[0] <= 'z')
    {
        lowerToUpper(userInput, strLen);
    }
    printf("OUT : ");
    if (interpretChk == 1)
    {
        morseToEng(userInput);
    }
    else
    {
        engToMorse(userInput, strLen);
    }
    return 0;
}