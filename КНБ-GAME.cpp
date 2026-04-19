#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

string getRandomChoice() {
    string choices[] = { "1", "2", "3" };
    return choices[rand() % 3];
}

string normalize(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for (char& c : s)
        c = tolower((unsigned char)c);
    return s;
}

string toName(string code) {
    if (code == "1") return "Камень";
    if (code == "2") return "Бумага";
    if (code == "3") return "Ножницы";
    return "?";
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    string input_user;
    cout << "Выберите: 1 - Камень, 2 - Бумага, 3 - Ножницы: ";
    getline(cin, input_user);
    input_user = normalize(input_user);

    string computer = getRandomChoice();
    cout << "Компьютер выбрал: " << toName(computer) << endl;

    if (input_user == computer) {
        cout << "Ничья!" << endl;
    }
    else if (input_user == "1" && computer == "3" ||
        input_user == "3" && computer == "2" ||
        input_user == "2" && computer == "1") {
        cout << "Вы выиграли!" << endl;
    }
    else if (input_user != "1" && input_user != "2" && input_user != "3") {
        cout << "Неверный ввод! Введите 1, 2 или 3." << endl;
    }
    else {
        cout << "Компьютер выиграл!" << endl;
    }
}