#include <iostream>
using namespace std;

class greatestOf3
{
private:
    int x1, x2, x3;

public:
    void input()
    {
        cout << "Enter 3 no.:" << endl;
        cin >> x1 >> x2 >> x3;
    }

    void output()
    {
        cout << x1 << " " << x2 << " " << x3 << " ";
    }

    int comparision()
    {
        int max;
        max = x1 >= (x2 >= x3 ? x2 : x3) ? x1 : (x2 >= x3 ? x2 : x3);
        return max;
    }
};

int main()
{
    greatestOf3 g;
    g.input();
    cout << "Maximum of ";
    g.output();
    cout << "is " << g.comparision();
    return 0;
}