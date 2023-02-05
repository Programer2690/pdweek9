#include<iostream>
using namespace std;
float calculate(float kg,float total, string name);
main ()
{
     float kg;
    float total=0;
    string name;

     cout<<"enter which fruit do you want: ";
    cin>>name;
    cout<<"enter kgs: ";
    cin>>kg;
    calculate(kg,total,name);
}
    float calculate (float kg,float total, string name)
    {
       string fruit[4]={"peach","apple","guava","watermelon"};
    float price[4]={60,70,40,30};
   
    for(int x=0;x<4;x++)
    {
       if(name==fruit[x])
       {
         total=kg*price[x];
       } 
    }
    cout<<"total price = "<<total;
    }
