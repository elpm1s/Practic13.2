#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> // ��� toupper

int main()
{
    setlocale(LC_ALL, "RUS");

    printf("������� ���:\n");

    char Name[20]; // ������ ��� �������� ���������� �����
    scanf("%s", Name); // ������ ����� (�� ����� ������������ & ��� �������)

    // ��� 3: �������������� ���
    int len = strlen(Name); // ����� ������ � ������
    char reversedName[20];  // ������ ��� �������� ������������� �����

    // �������������� ������
    for (int i = 0; i < len; i++) {
        reversedName[i] = Name[len - 1 - i]; // �������� ������� � �����
    }
    reversedName[len] = '\0'; // ����������� ������� ������

    // ������������ ������ � ������������
    char Snew[50] = "Hello, "; // ������������� ������ �����������
    strcat(Snew, reversedName); // ��������� ������������ ���

    // ����������� ��� ������� ������ Snew � ���������
    for (int i = 0; Snew[i]; i++) {
        Snew[i] = toupper(Snew[i]);
    }

    //���������� ������������ ���������� ��������������� ������
    int lenSnew = strlen(Snew); // ����� ������ � ������������
    int a = 40 - lenSnew - 1; // -1 ��� ����� ����� "!" � ����� ������

    //���������� ��������������� ������
    for (int i = 0; i < a; i++) {
        strcat(Snew, "!");
    }

    //��� 4: ����� ����������� �� �����
    printf("%s\n", Snew); // ������ ����������

    return 0;
}
