#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, n;
    int s = 0, j = 0;

    while (j < 3)
    {
        getline(cin, n);

        if (n == "caw caw")
        {
            cout << s << endl;
            s = 0;
            j++;
        }
        else
        {
            a = "";

            for (int i = 0; i < 3; i++)
            {
                if (n[i] == '-') a += '0';
                else if (n[i] == '*') a += '1';
            }

            int x = stoi(a, nullptr, 2);
            s += x;
        }
    }

    return 0;
}