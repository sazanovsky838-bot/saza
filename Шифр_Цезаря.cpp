#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
using namespace std;

class libary {
public:
    wstring word;
    wchar_t letters[66] = {
       L'А', L'Б', L'В', L'Г', L'Д', L'Е', L'Ё', L'Ж', L'З', L'И',
       L'Й', L'К', L'Л', L'М', L'Н', L'О', L'П', L'Р', L'С', L'Т',
       L'У', L'Ф', L'Х', L'Ц', L'Ч', L'Ш', L'Щ', L'Ъ', L'Ы', L'Ь',
       L'Э', L'Ю', L'Я',
       L'а', L'б', L'в', L'г', L'д', L'е', L'ё', L'ж', L'з', L'и',
       L'й', L'к', L'л', L'м', L'н', L'о', L'п', L'р', L'с', L'т',
       L'у', L'ф', L'х', L'ц', L'ч', L'ш', L'щ', L'ъ', L'ы', L'ь',
       L'э', L'ю', L'я'
    };
    const int alphabet = 33;
    const int shift = 3;

    void user_info() {
        wcout << L"Введите слово: ";
        getline(wcin, word);
    }

    void findInfo() {
        for (int i = 0; i < word.length(); i++) {
            for (int j = 0; j < 66; j++) {
                if (word[i] == letters[j]) {
                    int newIndex = (j + shift) % alphabet;
                    wcout << letters[newIndex];
                    break;
                }
            }

        }
    }

    };


int main() {
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
    libary dictionary;
    dictionary.user_info();
    dictionary.findInfo();
}