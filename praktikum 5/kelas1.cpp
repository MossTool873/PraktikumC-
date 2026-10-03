#include <iostream>

using namespace std;

// void calculateSquare(int number)
// {
//     number *= number;
// }

// int main()
// {
//     int num = 5;
//     calculateSquare(num);
//     cout << "Kuadrat dari " << num << " adalah " << num << endl;
//     return 0;
// }

int calculateSquare(int number)
{
    return number * number;
}

int main()
{
    int num = 5;
    cout << "Kuadrat dari " << num << " adalah " << calculateSquare(num) << endl;
    return 0;
}