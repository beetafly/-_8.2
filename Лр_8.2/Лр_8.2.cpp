// Лр_8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

int countPositiveElements(const vector<int>& array) {
    int count = 0;
    for (int element : array) {
        if (element > 0) {
            count++;
        }
    }
    return count;
}

int sumElementsAfterLastZero(const vector<int>& array) {
    bool foundZero = false;
    int totalSum = 0;
    for (auto it = array.rbegin(); it != array.rend(); ++it) {
        if (foundZero) {
            totalSum += *it;
        }
        else if (*it == 0) {
            foundZero = true;
        }
    }
    return totalSum;
}

int main() {
    vector<int> array = { 1, -2, 3, 0, 5, -6, 0, 7 };
    cout << "Кількість додатних елементів у масиві: " << countPositiveElements(array) << endl;
    cout << "Сума елементів після останнього нульового елемента: " << sumElementsAfterLastZero(array) << endl;
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
