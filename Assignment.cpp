#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int chosenNumber = 7;
    int userInput;
    vector<int> attempts;

    cout << "Guess the number:";
    while (true)
    {
        cin >> userInput;
        attempts.push_back(userInput);

        if (userInput == chosenNumber)
        {
            cout << "correct" << endl;
            break;
        }
        else if (userInput > chosenNumber)
        {
            cout << "Too high" << endl;
        }
        else
        {
            cout << "Too low" << endl;
        }
        cout << "Try again: ";
    }

    cout << "\nAll your guesses: " << endl;
    for (int i = 0; i < attempts.size(); i++)
    {

        cout << attempts[i] << " ";
    }
    return 0;
}