#include <iostream>
using namespace std;
main()
{
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string dance[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int arr[4];
    int x;
    for (x = 0; x < 4; x++)
    {
        cout << "enter no. " << x + 1 << ": ";
        cin >> arr[x];
    }
    for (x = 0; x < 10; x++)
    {
        if (arr[0] == num[x])
        {
            cout << dance[x];
        }
        if (arr[1] == num[x])
        {
            cout << dance[x];
        }
        if (arr[2] == num[x])
        {
            cout << dance[x];
        }
        if (arr[3] == num[x])
        {
            cout << dance[x];
        }
    }
    if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3])
    {
        dance[x++];
        cout << dance[x];
    }
}