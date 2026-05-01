#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string word;
    cout << "Введите цепь ДНК";
    cin >> word;

    string complement = "";

    for (int i = 0; i < word.length(); i++) {
        char nucleotid = word[i];

        if (nucleotid == 'A') {
            complement += 'T';

        }


        if (nucleotid == 'T') {

            complement += 'A';

        }


        if (nucleotid == 'C') {

            complement += 'G';
        }


        if (nucleotid == 'G') {
            complement += 'C';

        }
    }

    reverse(complement.begin(), complement.end());

    cout << "Парная цепь: ";

    for (int i = 0; i < complement.length(); i++) {
        cout << complement[i];
        if (i < complement.length() - 1) {
            cout << "-";
        }
    }
}