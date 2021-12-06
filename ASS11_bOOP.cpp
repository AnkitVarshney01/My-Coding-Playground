#include <iostream>
using namespace std;

template <typename t>
class answer
{
    t a;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> a;
    }

    void display()
    {
        cout << "Number \t      : " << a << "\n";
    }

    template <typename tt, typename t1>
    friend void squareNo(answer<t1> &obj);
};

template <typename tt, typename t1>
void squareNo(answer<t1> &obj)
{
    tt ans;
    ans = obj.a * obj.a;
    cout << "Square of number: " << ans << "\n";
}

int main()
{
    answer<int> A;
    A.input();
    A.display();
    squareNo<int>(A);
    answer<float> A1;
    A1.input();
    A1.display();
    squareNo<float>(A1);
    return 0;
}