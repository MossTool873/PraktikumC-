#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int n = 0;
  int a;
  int *array = new int[n];
  int *temp = new int[n];
  
  while (a != 0)
  {
    n++;
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
      array[i] = temp[i];
    }
    delete[] temp;
    temp = new int[n];

    cout << "masukkan nilai : ";
    cin >> a;
    array[n - 1] = a;
    
    for (int i = 0; i < n; i++)
    {
      temp[i] = array[i];
    }

    delete[] array;
  }

  cout << "Isi array: ";
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
}
