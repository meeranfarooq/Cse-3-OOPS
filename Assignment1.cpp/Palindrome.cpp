#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int i, len = 0, flag = 0;
    cout << "Enter a string: ";
    cin >> str;

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
