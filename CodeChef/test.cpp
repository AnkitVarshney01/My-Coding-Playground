#include <iostream>
using namespace std;
int main()
{
    try
    {
        char *str;
        str = new char[10];
        if (str == NULL)
            throw "Allocation failed";

        for (int i = 0; i < 100; i++)
        {
            if (i > 9)
                throw i;
            str[i] = 'z';
        }
    }
    catch (int j)
    {
        cout << "Exceptions:-" << endl;
        cout << "Index " << j << " is out of bounds" << endl;
    }
    catch (char *s)
    {
        cout << "Exceptions:- " << endl;
        cout << s;
    }

    return 0;
}