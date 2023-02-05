#include<iostream>
using namespace std;
main()
{
    int size;
    int count=-1;
    cout<<"enter no. of colors: ";
    cin>>size;
    string arr[size];
    for(int x=0;x<size;x++)
    {
        cout<<"enter color no. "<<x+1<<": ";
        cin>>arr[x];
        
    }
    for(int x=0;x<size;x++)
    {
       if(arr[x]!=arr[x+1])
        {
            count++;
        } 
    }
    int time=count+(size*2);
    cout<<time;
}