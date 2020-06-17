// counting trailing zeros in the factorial, without computing the factorial.

#include <iostream>
using namespace std;

int findZeros(int n)
{
    int ans = 0;
    int p=5;
    while((n/p)>0)
    {
        ans += (n/p);
        p = p*5;
    }
        return ans;
}

int main() {
    long long int n;
    cin >> n;
    cout << findZeros(n) << endl;
}
