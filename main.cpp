#include <iostream>
#include <string>
using namespace std;

int main() {

    // ==============================
    // 1. LINEAR SEARCH (Names & Ages)
    // ==============================

    string names[] = {"Anne", "Manar", "Esther", "Amjed", "Emely", "Shayd", "Zuck"};
    int ages[] = {25, 30, 22, 28, 19, 35, 40};

    int size = 7;
    string key;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> key;

    for (int i = 0; i < size; i++) {
        if (names[i] == key) {
            cout << names[i] << " was found and is aged " << ages[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }


    // ==============================
    // 2. BUBBLE SORT (Names)
    // ==============================

    string names_sort[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (names_sort[j] > names_sort[j + 1]) {
                // swap
                string temp = names_sort[j];
                names_sort[j] = names_sort[j + 1];
                names_sort[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted names (Ascending):" << endl;
    for (int i = 0; i < size; i++) {
        cout << names_sort[i] << endl;
    }


    // ==============================
    // 3. BUBBLE SORT (Numbers)
    // ==============================

    int numbers[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = 8;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // swap
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted numbers (Ascending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
