#include <iostream>
#include <iomanip>

using namespace std;
void nolkan(int &x);
int main()
{
    
  int food = 55;  // A string variable
  int *ptr = &food;  // A pointer variable that stores the address of food

  nolkan(food);

  cout << food << "\n\n";

  cout << &food << "\n\n";

  cout << ptr << "\n\n";
  
  cout << *ptr << "\n\n";


  return 0;
}
    
void nolkan(int &x){
    x = 0;
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
