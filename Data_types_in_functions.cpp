#include<iostream>

using namespace std;

int sum(int a,int b)
{
    return a+b;
}

float sum(float a,int b)
{
    return a+b;
}

double sum(double a,int b)
{
    return a+b;
}

double sum(int a,double b)
{
	return a+b;
}

int main()
{
    cout<<sum(10,15)<<endl;
    cout<<sum(20,10)<<endl;
    cout<<sum(10.15,20)<<endl;
    cout<<sum(20,10)<<endl;

    return 0;
}

