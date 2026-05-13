#include <iostream>
#include <string>
using namespace std;

int main() {

    // Sorted names
    string names[] = {"Amjed", "Anne", "Emely", "Esther", "Manar", "Shayd", "Zuck"};
    int ages[] = {28, 25, 19, 22, 30, 35, 40};

    int n = 7;
    string key;

    cout << "Enter name to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (names[mid] == key) {
            cout << names[mid] << " was found and is aged " << ages[mid] << endl;
            found = true;
            break;
        }
        else if (key < names[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
