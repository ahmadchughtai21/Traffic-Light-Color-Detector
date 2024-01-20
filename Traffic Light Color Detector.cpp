#include <iostream>
#include <string>

using namespace std;

int main()
{
    string color;
    cout << "Enter Color !" << endl;
    getline(cin, color);

    if (color == "red" || color == "Red")
    {
        cout << "The light is Red";
    }
    else if (color == "green" || color == "Green")
    {
        cout << "The light is Green";
    }
    else if (color == "yellow" || color == "Yellow")
    {
        cout << "The light is Yellow";
    }
    else
    {
        cout << "Enter Red, Yellow or Green!";
        return 1;
    }

    return 0;
}