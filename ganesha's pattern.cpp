#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    // first section
    cout << "*";
    for(int i=1; i<=(N-3)/2; i++)
        cout << " ";

    for(int i=1; i<=(N+1)/2; i++)
        cout << "*";
    cout << endl;

    // second section
    for(int x=1; x<=(N-3)/2; x++)
    {
        cout << "*";
        for(int i=1; i<=(N-3)/2; i++)
            cout << " ";
        cout << "*" << endl;
    }

    // Third section
    for(int i=1; i<=N; i++)
        cout << "*";
    cout << endl;

    // fourth section
    for(int x=1; x<=(N-3)/2; x++)
    {
        for(int i=1; i<=(N-3)/2 +1; i++)
            cout << " ";
        cout << "*";

        for(int i=1; i<=(N-3)/2; i++)
            cout << " ";
        cout << "*"<<endl;
    }

    // fifth section
    for(int i=1; i<=(N+1)/2; i++)
        cout << "*";
    for(int i=1; i<=(N-3)/2; i++)
        cout << " ";
    cout << "*";

}
