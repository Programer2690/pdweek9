#include<iostream>
using namespace std;
float ticket(string);
main()
{
 string name;
 cout << "enter movie name: ";
 cin>>name;
 ticket(name);
}
float ticket(string name)
{
    int price;
    string movie[5]={"gladiator","starwars","terminator","takinglives","tombraider"};
    for(int x=0;x<5;x++)
    {
        if(name==movie[x])
        {
            if(x%2!=0)
            {
                price=500-.10*500;
            }
            if(x%2==0)
            {
                price=500-.05*500;
            }
        }
    }
    cout<<"price of ticket: "<<price;

}