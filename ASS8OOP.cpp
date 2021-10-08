#include <iostream>
using namespace std;

class parent
{
public:
    virtual void getData() = 0;
    virtual void showData() = 0;
    virtual void showResult() = 0;
};

class solution : public parent
{
    float n, sq, cu;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void showData()
    {
        cout << "The number you entered: " << n << "\n";
    }

    float square()
    {
        sq = n * n;
        return sq;
    }

    float cube()
    {
        cu = square() * n;
        return cu;
    }

    void showResult()
    {
        cout << "Square of no.: " << square() << "\n";
        cout << "Cube of no.: " << cube() << "\n";
    }
};

int main()
{
    parent *p = new solution;
    p->getData();
    p->showData();
    p->showResult();
    return 0;
}