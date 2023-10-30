// MyAspirant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class Student
{
protected: 
    string _name;
    string _surName;
    int _id;

public:
    Student() {};
    Student() :_name(""), _surName(""), _id(0) {};

    string GetName()
    {
        return _name;
    }
    string GetSurName()
    {
        return _surName;
    }

    int GetId() {
        return _id;
    }
};

class Aspirant : public Student
{
private:
    string _diplomaTopic;
    double _averageGPA;

public:
    Aspirant() {};
    Aspirant(const string& DiplomaTopic,
        const double& AverageGPA,
        const string& Name,
        const string& Surname,
        const int& Id) {
        _name = Name;
        _surName = Surname;
        _id = Id;
        _diplomaTopic = DiplomaTopic;
        _averageGPA = AverageGPA;
    }

     string HasAccess() {
        if (_averageGPA < 4 || _averageGPA == NAN) return "Не допущен";
        return "Допущен";
    }

    void PrintInfo() {
        cout << "Имя - " << _name << endl << "Фамилия - " << _surName << endl
            << "Айди - " << _id << endl << "Средний GPA - " << _averageGPA << endl <<
            "Тема дипломной - " << _diplomaTopic << endl << "Допуск к защите - " << HasAccess();
    }


    
};
int main()
{
    std::cout << "Hello World!\n";
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
