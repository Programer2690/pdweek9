#include<iostream>
using namespace std;
main()
{
    
    string name;
    cout<<"enter name: ";
    getline(cin,name);
    int x=0;
    x=name.length();
    if(x%2==0)
    {
        cout<<"true";
    }
    
    else
    {
        cout<<"false";
    }
}