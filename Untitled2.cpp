#include<bits/stdc++.h>
using namespace std;
double funct(double x)
{
    return (pow(x,3)-3*x-5);
}

void bisect(double a, double b)
{
    if(funct(a)*funct(b)>=0){
        cout << "Condition does not fulfill !";
        exit(0);
    }
    double c;
    for(int i=0; i<10; i++){
        c=(a+b)/2;
        if(funct(c)==0.0)
        break;
        else if(funct(c)*funct(a)<0)
            b=c;
        else
            a=c;
      }
    cout << "The value 10th Iteration of ROOT: " << c << endl;
}

int main()
{
    double a=2, b=3;
    bisect(a,b);
}
