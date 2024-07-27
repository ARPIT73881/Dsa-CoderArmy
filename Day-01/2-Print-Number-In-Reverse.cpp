// Print number upto 1 in reverse order

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    cout<<"Number in reverse"<<endl;
    int num;
    cout<<"Enter any number ";
    cin>>num;

    for (int i = num; i >= 1; i--)
    {
        cout<<i<<" ";
    }
    

return 0;

}