#include<bits/stdc++.h>
using namespace std;
#define EPS 0.001
double funct(double x)
{
    return (pow(x,3)-x-4);
}

void bisect(double a,double b)
{
    if(funct(a)*funct(b)>=0){
        cout<<"Wrong Input !";
        exit(0);
    }
    double c;
    while((b-a) >= EPS){
        c = (a+b)/2;
        if(funct(c)==0.0)
        break;
        else if(funct(c)*funct(a)<0){
            b=c;
        }
        else
            a=c;
    }
    cout << "\nThe value of ROOT: " << c << endl;
}

int main()
{
    double a,b;
    cout << "Enter the Value of 'A' and 'B': ";
    cin >> a >> b;
    bisect(a,b);
}
