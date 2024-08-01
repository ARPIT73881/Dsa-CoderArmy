#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    if (num < 2)
    {
        cout << "not prime";
        return 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "not prime";
                return 0;
            }
        }
        cout << "number is prime";
    }

    return 0;
}