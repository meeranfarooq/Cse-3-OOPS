// Counting consonanats and vowels in a string
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    cout << "Enter a string: ";
    cin >> str;

    while (str[i] != '\0')
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    cout << "Vowels: " << vowels << "\nConsonants: " << consonants;
    return 0;
}
