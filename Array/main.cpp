#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout << "Elements are : ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i];
}

int main()
{
    struct Array arr;
    int n, i;
    cout << "Enter size of the array"
         << " ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout << "Enter no. of numbers"
         << " ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr.A[i];

    Display(arr);
}