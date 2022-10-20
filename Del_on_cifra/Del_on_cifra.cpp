#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int k = n;
    while (n > 0)
    {
        int t = n % 10;
        if (t != 0 && k % t == 0)
        {
            cout << "Y\n";
            return 0;
        }
        n /= 10;
    }
    cout << "N\n";
    return 0;
}

