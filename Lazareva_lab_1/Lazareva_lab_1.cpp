// Lazareva_lab_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <string>
#include <iostream>

using namespace std;

// 3. Определить и вывести значение текущего каталога для процесса
string getCurrentDirectoryOnWindows()
{
    const unsigned long maxDir = 2048;
    char CurDir[maxDir];

    GetCurrentDirectory(strlen(CurDir), CurDir);
    return string(CurDir);
}

// 4. Прочитать и вывести значение переменной окружения “PATH”. 
string getCurrentEnviromentVarsOnWindows() {
    const unsigned long maxValue = 4096;
    char Value[maxValue];

    GetEnvironmentVariable("PATH", Value, strlen(Value));
    return string(Value);
}

int main(int argc, char *argv[])
{
    // вывод значения текущего каталога процесса
    std::cout << "Path: " << getCurrentDirectoryOnWindows() << std::endl;

    // вывод переменной окружения
    std::cout << "Environment variables PATH is: " << getCurrentEnviromentVarsOnWindows() << std::endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
