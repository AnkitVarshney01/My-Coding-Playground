#include <iostream>
#include <string>
using namespace std;

class salary
{
private:
    string name;
    int basic;
    int da;
    int hra;
    int medical;

public:
    salary(string name, int basic, int da, int hra, int medical)
    {
        this->name = name;
        this->basic = basic;
        this->da = da;
        this->hra = hra;
        this->medical = medical;
    }

    void displayDetails()
    {
        cout << "Name of Employee: " << this->name << endl;
        cout << "Basic Salary: Rs. " << this->basic << endl;
        cout << "Medical Allowance: Rs. " << this->medical << endl;
        cout << "HR Allowance: Rs. " << this->hra << endl;
        cout << "Daily Allowance: Rs. " << this->da << endl;
    }

    int basicData()
    {
        return this->basic;
    }
    int DAdata()
    {
        return this->da;
    }
    int HRAdata()
    {
        return this->hra;
    }
    int medicalData()
    {
        return this->medical;
    }
};

class salarySum
{
private:
    int totalSalary;

public:
    salarySum(salary &s)
    {
        int answer = s.basicData() + s.DAdata() + s.HRAdata() + s.medicalData();
        totalSalary = answer;
    }
    void displaySalary()
    {
        cout << "Total Salary : Rs. " << this->totalSalary << endl;
    }
};

int main()
{
    salary s("Ramesh Singh", 25000, 1000, 5000, 11000);
    s.displayDetails();
    salarySum sumCal(s);
    sumCal.displaySalary();
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;
// class salarySum;
// class salary
// {
//     string name;
//     int basic;
//     int da;
//     int hra;
//     int medical;

// public:
//     salary(string name, int basic, int da, int hra, int medical)
//     {
//         this->name = name;
//         this->basic = basic;
//         this->da = da;
//         this->hra = hra;
//         this->medical = medical;
//     }
//     void displayDetails()
//     {
//         cout << "Name of Employee: " << this->name << endl;
//         cout << "Basic Salary: " << this->basic << endl;
//         cout << "HR Allowance : " << this->hra << endl;
//         cout << "Daily Allowance : " << this->da << endl;
//         cout << "Medical Allowance: " << this->medical << endl;
//     }
//     int getTotal()
//     {
//         return (basic + da + hra + medical);
//     }
// };

// class salarySum
// {
//     int totalSalary;

// public:
//     void operator=(salary &s)
//     {
//         totalSalary = s.getTotal();
//     }
//     void displaySalary()
//     {
//         cout << "Total Accumulated salary : " << this->totalSalary << endl;
//     }
// };

// int main()
// {
//     salary s("Anirudh Srivastava", 50000, 8000, 4700, 9560);
//     s.displayDetails();
//     salarySum sum;
//     sum = s;
//     sum.displaySalary();
//     return 0;
// }