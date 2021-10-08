#include<iostream>
#include<string>
using namespace std;
#define ll long long
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int temp = fib(i + 1);
        int temp1 = (int(s[i]) + temp - 97) % 26;
        char c = 97 + temp1;
        cout << c;
    }
    return 0;
}