// Child.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

const unsigned long maxValue = 4096;

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "rus");
    // 10. Получить переменную окружения родителя.
    char newValue[maxValue];

    GetEnvironmentVariable("MyVar", newValue, strlen(newValue));
    puts(newValue);

    // вывод новой переменной окружения с произвольным именем и значением
    std::cout << "Custom environment variable in Child from parent is: " << newValue << std::endl;

    int mass[4];
    for (int i = 1; i < argc; i++)
    {
        mass[i - 1] = atoi(argv[i]);
        std::cout << atoi(argv[i]) << std::endl;
    }

    int P = 0;

    for (int i = 0; i <= 4; i++)
    {
        if (mass[i] > mass[0])
        {
            P++;
        }
    }

    char hnd[255];
    GetEnvironmentVariableA("HANDLENPD", hnd, strlen(hnd));
    HANDLE hNP = (HANDLE)atol(hnd);
    Sleep(2000);
    if (TerminateProcess(hNP, 0))
        std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    Sleep(500);

        
    return P;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"