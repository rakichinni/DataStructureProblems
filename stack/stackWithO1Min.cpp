#include <iostream>
#include <stack>

using namespace std;

class Stack
{
    public:
        stack<int> s;
        int min;

        void Push(int el)
        {
            if (s.size() == 0)
            {
                min = el;
            }
            else if (el < min)
            {
                int t = el;
                el = el - min;
                min = t;
            }
            cout << "  " << el << "  " << min << endl;
            s.push(el);
            //cout << "Push: size: " << s.size() << endl;
        }

        int Pop()
        {
            if (s.size() == 0)
                return -1;

            int top = s.top();
            if (top < min)
            {
                int t = min;
                min = min - top;
                cout << t << " " << s.top() << " " << min << endl;
                s.pop();
                //cout << "Pop: size: " << s.size() << endl;
                return t;
            }
            cout << top << " " << s.top() << " " << min << endl;
            s.pop();
            //cout << "Pop: size: " << s.size() << endl;
            return top;
        }
};

int main()
{
    Stack* s = new Stack();

cout << endl << "Push:" << endl;
    cout << 10 << " ";
    s->Push(10);
    cout << 8 << " ";
    s->Push(8);
    cout << 5 << " ";
    s->Push(5);
    cout << 0 << " ";
    s->Push(0);
    cout << 1 << " ";
    s->Push(1);
    cout << 2 << " ";
    s->Push(2);

cout << endl << "Pop:" << endl;
    s->Pop();
    s->Pop();
    s->Pop();
    s->Pop();
    s->Pop();
    s->Pop();
}

