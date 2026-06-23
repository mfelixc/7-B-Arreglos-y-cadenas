#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, letras;
    getline(cin, s);

    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            letras += c;
    }

    cout << letras << endl;

    return 0;
}