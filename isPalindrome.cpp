#include <iostream>
#include <string>

using namespace std;

bool isPalindromeNoString(int);
bool isPalindromeString(int);

int main()
    {
        char ans = '\0';
        int inp = 0;
        while(ans != 'x')
        {
            cout << "Enter an integer: " << endl;
            cin >> inp;

            string noStringResult = isPalindromeNoString(inp) ? "Yes it's inverted!" : "No, not inverse";
            string stringResult = isPalindromeString(inp) ? "Yes it's inverted!" : "No, not inverse";
            
            cout << "Integer Breakdown While Loop Result: " << noStringResult << endl;
            cout << "String Conversion Result: " << stringResult << endl;

            cout << "Would you like to input a new number? " << endl;
            cin >> ans;
        }
        return 0;
    }

bool isPalindromeString(int x)
{
        string inp = to_string(x);
        string opp = "";
        for (int i = inp.size() - 1; i >= 0; i--)
            opp.append(inp, i, 1);
        if(inp == opp)
        {
            cout << "With String conversion: " <<" x = " << inp << " | inv = " << opp << endl;
            return true;
        }
        else
            return false;
}

bool isPalindromeNoString(int x) 
{
    int inv = 0;
    int original = x;

    while (x != 0) 
    {
        int rem = x % 10;        // Extract last digit
        inv = inv * 10 + rem;    // Append digit to the reversed number
        x /= 10;                 // Remove last digit from the original number
    }
    if (inv == original)
    {
        cout << "With int breakdown while loop: " << "x = " << original << " | inv = " << inv << endl;
        return true;
    }
    else
    {
        cout << "With int breakdown while loop: " << "x = " << original << " | inv = " << inv << endl;
        return false;
    }
}
