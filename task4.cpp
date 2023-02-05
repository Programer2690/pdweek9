#include <iostream>
using namespace std;
void length(int size);
main()

{
    int size;
    cout << "enter array size: ";
    cin >> size;
    length(size);
}
void length(int size)
{
    bool found = false;
    int count = 0;
    for (int x = 0; x < size; x++)
    {
        int arr[x];
        cout << "enter no." << x + 1 << ": ";
        cin >> arr[x];
        if (arr[x] == 7)
        {
            found = true;
        }
        if (arr[x] > 9)
        {
            while (arr[x] != 0)
            {
                if (arr[x] % 10 == 7)
                {
                    found = true;
                }
                arr[x] = arr[x] / 10;
            }
        }
    }
        if (found == true)
        {
            cout << "boom";
        }
           
}