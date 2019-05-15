#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number:";
    cin >> n;
	cout << "Multiplication table of :"<< n << endl;
    for (int r= 1; r<= 10; ++r)
	{
        cout << n << " * " << r<< " = " << n * r<< endl;
    }
    _getch();
    return 0;
}