#include <iostream>
using namespace std;

class employee
{
    int salary;
    static int sumSalary;

public:
    void getSalary()
    {
        int x;
        cout << "Enter salary: ";
        cin >> x;
        salary = x;
    }
    void totalSalary()
    {
        sumSalary += salary;
    }
    static void showTotal()
    {
        cout << "Total salary of all emoployees: " << sumSalary << endl;
    }
};

int employee::sumSalary = 0;

int main()
{
    employee e[10];
    for (int i = 0; i < 10; i++)
    {
        e[i].getSalary();
        e[i].totalSalary();
    }
    employee::showTotal();
    return 0;
}