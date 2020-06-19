// Child.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

const unsigned long maxValue = 4096;

// 10. Создать новую переменную окружения (произвольное имя и произвольное значение).
string createCustomEnvironmentVar()
{
    char newValue[maxValue];

    SetEnvironmentVariable("NewCustomVar1", "Child");
    GetEnvironmentVariable("NewCustomVar1", newValue, strlen(newValue));

    return string(newValue);
}

int main(int argc, char* argv[])
{
    // вывод новой переменной окружения с произвольным именем и значением
    std::cout << "Custom environment variable in Child is: " << createCustomEnvironmentVar() << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"