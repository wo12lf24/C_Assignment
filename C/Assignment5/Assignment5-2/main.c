/*
Assignment5-2
�й�:2019202003
�̸�:������
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
    printf("\n�Է��� ������ ������ �����ϴ�.\n");
    printf("%s : %d��, %.1fcm, %.1fkg",
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
    printf("������� ������ �Է��ϼ���\n");
    printf("�̸� : ");
    scanf("%s", &name);
    printf("���� : ");
    scanf("%d", &age);
    printf("Ű : ");
    scanf("%f", &cm);
    printf("������ : ");
    scanf("%f", &kg);

    Init(name, age, cm, kg); // ����ü Student�� �� �����ϱ�
    Print();                 // ����ü Student �� ����ϱ�

    return 0;
}