#include <iostream>
using namespace std;
int chisl, znamen;
bool test(int, int);
int main() {
    cout << "vvedite chislitel: ";
    while (true) {
        cin >> chisl;
        if (!cin) {
            cout << "not number, please repeat: ";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    cout << "vvedite znametatel: ";
    while (true) {
        cin >> znamen;
        if (!cin) {
            cout << "not number, please repeat: ";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    if (test(chisl, znamen)) {
        cout << "socratima";
    }
    else {
        cout << "nesocratima";
    }
}
bool test(int chisl, int znamen) {
    while (chisl > 0 && znamen > 0) {
        if (chisl > znamen) {
            chisl%=znamen;
        }
        else {
            znamen %= chisl;
        }
    }
    if (znamen + chisl > 1) 
        return true;
    return false;
}