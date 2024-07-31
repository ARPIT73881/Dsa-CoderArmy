// Factorial of number
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

int num , fact=1;
    cout<<"Enter any number ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        fact =  fact*i;
    }
    
    cout<<"factorial of "<<num<<" is = "<<fact;
    

return 0;

}