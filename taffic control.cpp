#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    for (int i = 120; i >= 0; i--) {
        system("cls");
        cout << "| Stop! |" << endl;
        cout << "    " << i << endl;


        if (i == 0) {
            system("cls");
            cout << "| Get Ready! |" << endl;
            Sleep(3000);
        } else {
            Sleep(3000);
        }
    }


    for (int i = 0; i <= 120; i++) {
        system("cls");
        cout << "| Go! |" << endl;
        cout << "    " << i << endl;
        Sleep(3000);
    }


}
