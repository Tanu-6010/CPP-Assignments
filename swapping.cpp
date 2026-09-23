#include <iostream>
int main()
{
     int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;
    a = a + b; 
    b = a - b; 
    a = a - b; 
 cout << "After swapping:  a = " << a << ", b = " << b << endl;
return 0;
}
