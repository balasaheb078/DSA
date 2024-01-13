/*Queue is a data structure that follows the First-In-First-Out (FIFO) principle. It is a linear data structure that allows elements to be added to the end of the structure and removed from the front of the structure.

*/

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("I");
    q.push("Love");
    q.push("Programming");

    cout << "Size before pop:" << q.size() << endl;
    cout << "First Element: " << q.front() << endl;

    q.pop();

    cout << "First Element after pop(): " << q.front() << endl;
    cout << "Size after pop:" << q.size() << endl;
}