//Q1 A --> computational lab test

#include<bits/stdc++.h>
using namespace std;

//writing the function given in question
float func(float x)
{
    return (pow(x,3)-7*pow(x,2)+8*x-3);
}

// derivative of the function given 
float defr(float x)
{
    return (3*pow(x,2)-14*x+8);
}

int main()
{
    int e=0;
    float a = 5;   // Intial value given in the question
    float k =0;
    

    do{
        e++;
        k = a - func(a)/defr(a);   // standard formula of newton raphson 
        a = k;
    }
    while(k>abs(0.001));   //  loop will work till this condition will full fill
    
    cout<<"value after iteration "<<endl;
    cout<<k<<" ";
}