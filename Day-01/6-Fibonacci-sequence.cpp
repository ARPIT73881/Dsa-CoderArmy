#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

// 0 1 1 2 3 5 8 13 21 ....
// current = prev + last
// 21 = 13 + 8
int num , last = 0 , prev = 1, curr;    
    cout<<"Enter the number to know the fibonacci sequence"<<endl;
    cin>>num;

// for printing the whole fibonacci sequence
//  for (int i = 1; i <= num; ++i) {
//         cout << last << " ";
//         curr = last + prev;
//         last = prev;
//         prev = curr;
//     }

// for knowing the exact number at that seqence
for (int i = 1; i <=num; i++)
{
    curr = prev + last;
    last = prev;
    prev = curr;
}
cout<<"The number at "<<num<<" place is "<<last;

return 0;

}