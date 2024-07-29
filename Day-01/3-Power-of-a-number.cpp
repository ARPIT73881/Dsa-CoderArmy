// print the power of a number given by the user
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

int num, pow , result;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"Enter the power"<<endl;
    cin>>pow;

    result=num;
    

    // 2^3 = 2* 2 *2
    for (int i = 1; i < pow; i++)
    {
        result = num * result;
    }
    cout<<result;
    

return 0;

}