#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> // Для toupper

int main()
{
    setlocale(LC_ALL, "RUS");

    printf("Введите имя:\n");

    char Name[20]; // Массив для хранения введенного имени
    scanf("%s", Name); // Чтение имени (не нужно использовать & для массива)

    // Шаг 3: Переворачиваем имя
    int len = strlen(Name); // Длина строки с именем
    char reversedName[20];  // Массив для хранения перевернутого имени

    // Переворачиваем строку
    for (int i = 0; i < len; i++) {
        reversedName[i] = Name[len - 1 - i]; // Копируем символы с конца
    }
    reversedName[len] = '\0'; // Завершающий нулевой символ

    // Формирование строки с приветствием
    char Snew[50] = "Hello, "; // Инициализация строки приветствия
    strcat(Snew, reversedName); // Добавляем перевернутое имя

    // Преобразуем все символы строки Snew в заглавные
    for (int i = 0; Snew[i]; i++) {
        Snew[i] = toupper(Snew[i]);
    }

    //вычисление необходимого количества восклицательных знаков
    int lenSnew = strlen(Snew); // Длина строки с приветствием
    int a = 40 - lenSnew - 1; // -1 для учета знака "!" в конце строки

    //добавление восклицательных знаков
    for (int i = 0; i < a; i++) {
        strcat(Snew, "!");
    }

    //Шаг 4: Вывод приветствия на экран
    printf("%s\n", Snew); // Печать результата

    return 0;
}
