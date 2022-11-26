/*
Assignment5-8
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_CAR 50

typedef struct _Node
{
    char car_num[20];
    char name[20];
    char phone[20];
    time_t parking;
} Node;

void mainMenu();
void printMenu();

void inputFunc(Node *car);
void outputFunc(Node *car);
void outputFull(Node *car);
void outputSingle(Node *car);
void rmNewLine(char *tmpParkingTimeStr1, char *tmpParkingTimeStr2);
int parkingCost(double elapsedTime);

void modifyFunc(Node *car);
void outCarFunc(Node *car);

int main(void)
{
    Node car[MAX_CAR];
    int select;

    for (int i = 0; i < MAX_CAR; i++)
        strcpy(car[i].car_num, "");

    while (1)
    {
        mainMenu();
        fflush(stdin);
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            inputFunc(car);
            break;
        case 2:
            outputFunc(car);
            break;
        case 3:
            modifyFunc(car);
            break;
        case 4:
            outCarFunc(car);
            break;
        case 0:
            printf("Program end.\n");
            return 0;
            break;

        default:
            break;
        }
    }

    return -1;
}

void mainMenu()
{
    puts("┌──────────────────────────────────────┐");
    puts("│     ::  car mamual program  ::       │");
    puts("│                                      │");
    puts("│     1.entrance  2.print  3.modify    │");
    puts("│                                      │");
    puts("│     4.exit                           │");
    puts("│                                      │");
    puts("│     0.end                            │");
    puts("└──────────────────────────────────────┘");
    printf(" Select > ");
    return;
}

void outputMenu()
{
    puts("┌───────────────────────────────┐");
    puts("│     ::  select print  ::      │");
    puts("│                               │");
    puts("│     1. all print              │");
    puts("│                               │");
    puts("│     2. each print             │");
    puts("│                               │");
    puts("│     0. main menu              │");
    puts("└───────────────────────────────┘");
    printf(" Select > ");
    return;
}

void inputFunc(Node *car)
{
    time_t parkingTime;
    int i, j;
    int cnt = 0;
    puts(":: input ::");
    for (i = 0; i < MAX_CAR; i++)
        if (strcmp(car[i].car_num, "") == 0)
            break;
    printf("car number: ");
    scanf("%s", car[i].car_num);

    for (j = 0; j < MAX_CAR; j++)
        if (strcmp(car[i].car_num, car[j].car_num) == 0)
            cnt++;
    // Duplicated
    if (cnt > 1)
    {
        strcpy(car[i].car_num, "");
        puts("exist car number input other again");
        return;
    }

    printf("name: ");
    scanf("%s", car[i].name);
    printf("call number: ");
    scanf("%s", car[i].phone);
    car[i].parking = time(&parkingTime);

    return;
}

void outputFunc(Node *car)
{
    int select;

    while (1)
    {
        outputMenu();
        fflush(stdin);
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            outputFull(car);
            break;
        case 2:
            outputSingle(car);
            break;
        case 0:
            puts("back to main menu");
            return;

        default:
            break;
        }
    }
    return;
}

void outputFull(Node *car)
{
    char tmpParkingTimeStr1[26] = "";
    char tmpParkingTimeStr2[26] = "";
    time_t currentTime;
    double elapsedTime;

    printf("%10s | %12s | %13s | %26s | %8s \n",
           "car number", "owner name", "call number", "parking time", "parking cost");

    for (int i = 0; i < MAX_CAR; i++)
    {
        if (strcmp(car[i].car_num, "") != 0)
        {
            strcpy(tmpParkingTimeStr1, ctime(&car[i].parking));
            rmNewLine(tmpParkingTimeStr1, tmpParkingTimeStr2);

            time(&currentTime);
            elapsedTime = difftime(currentTime, car[i].parking);

            printf("%10s | %12s | %13s | %26s | %8d \n",
                   car[i].car_num, car[i].name, car[i].phone, tmpParkingTimeStr2, parkingCost(elapsedTime));
        }
    }
}

void outputSingle(Node *car)
{
    int cnt = 0;
    char tmpCarNum[20];
    char tmpParkingTimeStr1[26] = "";
    char tmpParkingTimeStr2[26] = "";
    time_t currentTime;
    double elapsedTime;

    printf("each print (car number) > ");
    scanf("%s", tmpCarNum);
    printf("%10s | %12s | %13s | %26s | %8s \n",
           "car number", "owner name", "call number", "parking time", "parking cost");

    for (int i = 0; i < MAX_CAR; i++)
    {
        if (strstr(car[i].car_num, tmpCarNum) != NULL)
        {
            strcpy(tmpParkingTimeStr1, ctime(&car[i].parking));
            rmNewLine(tmpParkingTimeStr1, tmpParkingTimeStr2);

            time(&currentTime);
            elapsedTime = difftime(currentTime, car[i].parking);

            printf("%10s | %12s | %13s | %26s | %8d \n",
                   car[i].car_num, car[i].name, car[i].phone, tmpParkingTimeStr2, parkingCost(elapsedTime));
            cnt++;
        }
    }
    if (cnt == 0)
        puts("couldn't find that car number");
    return;
}

void rmNewLine(char *tmpParkingTimeStr1, char *tmpParkingTimeStr2)
{
    for (int i = 0; *(tmpParkingTimeStr1 + i) != '\n'; i++)
        *(tmpParkingTimeStr2 + i) = *(tmpParkingTimeStr1 + i);
    return;
}

int parkingCost(double elapsedTime)
{
    if (elapsedTime <= 1800)
        return 1000;
    else if (elapsedTime > 1800 && elapsedTime <= 3600)
        return 2000;
    else if (elapsedTime > 3600 && elapsedTime <= 7200)
        return 3000;
    else
        return 5000;
}

void modifyFunc(Node *car)
{
    char tmpCarNum[20];

    printf("modify (car number) > ");
    scanf("%s", tmpCarNum);

    for (int i = 0; i < MAX_CAR; i++)
    {
        if (strcmp(tmpCarNum, car[i].car_num) == 0)
        {
            printf("owner name: ");
            scanf("%s", car[i].name);
            printf("call number: ");
            scanf("%s", car[i].phone);
            printf(" %sth car number's information is changed\n", tmpCarNum);
            return;
        }
    }
    puts("couldn't find that car number");
    return;
}

void outCarFunc(Node *car)
{
    char tmpCarNum[20];

    printf("exist (car number) > ");
    scanf("%s", tmpCarNum);

    for (int i = 0; i < MAX_CAR; i++)
    {
        if (strcmp(tmpCarNum, car[i].car_num) == 0)
        {
            strcpy(car[i].car_num, "");
            printf(" %sth car number is exist\n", tmpCarNum);
            return;
        }
    }
    puts("couldn't find that car number");
    return;
}