#include<iostream>
using namespace std;
main()
{
    int time;
    int a1,a2,a3;
    int arr[3];
    cout<<"enter no. of times you want to perform operation: ";
    cin>>time;
    for(int x=0;x<3;x++)
    {
        cout<<"enters no. "<<x+1<<": ";
        cin>>arr[x];

    }
    if(arr[0]%2==0)
    {
        a1=arr[0]-2;
    }
    else{
        a1=arr[0]+2;
    }
    if(arr[1]%2==0)
    {
        a2=arr[1]-2;
    }
    else{
        a2=arr[1]+2;
    }
    if(arr[2]%2==0)
    {
        a3=arr[2]-2;
    }
    else{
        a3=arr[2]+2;
    }
    cout<<a1<<endl;
    cout<<a2<<endl;
    cout<<a3<<endl;
}