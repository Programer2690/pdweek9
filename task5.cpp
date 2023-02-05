#include <iostream>
using namespace std;
main()
{
    string arr[4];
    string name;
    int i;
    for (i = 0; i < 4; i++)
    {
        cout << "enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    if (arr[0] == arr[1] && arr[0] == arr[2] && arr[0] == arr[3])
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
