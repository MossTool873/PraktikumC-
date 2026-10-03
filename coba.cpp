#include <iostream>
#include <iomanip>

using namespace std;

void c(int &x){
x += 3;
}

int main()
{
    int sum = 0;
    c(sum);
    cout << sum;
    

}

double sqrt_manual(double n)
{
    double x = n;

    for (int i = 0; i < 20; i++)
    {
        x = (x + n / x) / 2;
    }

    return x;
}
