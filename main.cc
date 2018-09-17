#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;
    string str2;

    cout << "Please input the first string: " << endl;
    getline(cin, str1);

    cout << "Please input the second string: " << endl;
    getline(cin, str2);

    if (str1 == str2) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    return 0;
}
