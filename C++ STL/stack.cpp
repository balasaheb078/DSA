/*A stack is a data structure that follows the Last-In-First-Out (LIFO) principle. It is a linear data structure that allows elements to be added to the top of the structure and removed from the top of the structure.
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("I");
    s.push("Love");
    s.push("Programming");

    cout << "Top Element:" << s.top() << endl;

    s.pop();

    cout << "Top Element after pop(): " << s.top() << endl;
    cout << "size of stack" << s.size() << endl;
    cout << " Is stack Empty or not :" << s.empty() << endl;
}