#include <iostream>
using namespace std;

int main()
{

    int a, b;
    char temp;
    char op;

    cout<<"ARITHMATIC CALCULATOR"<<endl;
    do
    {

        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
        cout << "Enter the Operation you want to perform" << endl;
        cin >> op;

        switch (op)
        {
        case '+':
            cout << a << "+" << b << "=" << a + b << endl;
            break;
        case '-':
            cout << a << "-" << b << "=" << a - b << endl;
            break;
        case '*':
            cout << a << "*" << b << "=" << a * b << endl;
            break;
        case '/':
            cout << a << "/" << b << "=" << a / b << endl;
            break;

        default:
            cout << "Invalid Operations Please try again..." << endl;
            break;
        }
        cout << "Do you want to continue(y Or n)?" << endl;
        cin >> temp;
    }

    while (temp != 'n');

    cout << "Thank You !" << endl;
}
