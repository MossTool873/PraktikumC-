#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i <= 5 ; i++)
    {
        cout << arr[i] << " ";
    }
    
}

// double sqrt_manual(double n)
// {
//     double x = n;

//     for (int i = 0; i < 20; i++)
//     {
//         x = (x + n / x) / 2;
//     }

//     return x;
// }
