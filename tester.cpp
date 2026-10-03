///CJ Shay
///COSC-2436
///10/2/2026



#include <iostream>
#include <forward_list>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    forward_list<int> numbers;
    numbers.push_front(10);
    numbers.push_front(20);
    numbers.push_front(30);

    cout << numbers.front() << endl;

    numbers.pop_front();
    numbers.push_front(40);

    for (auto x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    queue<string> students;
    students.push("Terminator");
    students.push("Bravo 6");
    students.push("Monte");

    cout << students.front() << endl;
    cout << students.back() << endl;

    students.pop();
    students.push("David");

    cout << students.front() << endl;

    stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);

    cout << numbersStack.top() << endl;

    numbersStack.pop();
    numbersStack.push(4);

    cout << numbersStack.top() << endl;

    return 0;
}
