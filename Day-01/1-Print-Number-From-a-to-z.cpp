// Print the alphabets from a to z

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"The alphabets from a to z are "<<endl;
    char alphabet;

    for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        cout<<alphabet<<" ";
    }
    
    return 0;
}
