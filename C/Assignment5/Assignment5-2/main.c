/*
Assignment5-2
학번:2019202003
이름:김주형
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct
{
    int age;
    char name[20];
    float cm;
    float kg;
} Student;
void Print()
{
    printf("\n입력한 정보는 다음과 같습니다.\n");
    printf("%s : %d세, %.1fcm, %.1fkg",
           Student.name, Student.age, Student.cm, Student.kg);
}
void Init(char name[20], int age, float cm, float kg)
{
    strcpy(Student.name, name);
    Student.age = age;
    Student.cm = cm;
    Student.kg = kg;
}
int main(void)
{
    Student;

    char name[20];
    int age;
    float cm;
    float kg;
    printf("대상자의 정보를 입력하세요\n");
    printf("이름 : ");
    scanf("%s", &name);
    printf("나이 : ");
    scanf("%d", &age);
    printf("키 : ");
    scanf("%f", &cm);
    printf("몸무게 : ");
    scanf("%f", &kg);

    Init(name, age, cm, kg); // 구조체 Student에 값 저장하기
    Print();                 // 구조체 Student 값 출력하기

    return 0;
}