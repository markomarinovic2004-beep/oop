#include<iostream>
using namespace std;


struct Fraction {

    int x;
    int y;

    void print (){

    cout << x << "/" << y;
    }


    double value(){
    return double (x)/y;

    }

    void reduce(){
        int nzd=1;
    for(int i=1; i<=x && i<=y; i++)
    {
        if(x%i == 0 && y%i == 0){
  nzd=i;
        }
    }

     x=x/nzd;
     y = y/nzd;

    }
};
Fraction sum(const Fraction& a, const Fraction& b){
 Fraction rezultat;
 rezultat.x=a.x*b.y + b.x*a.y;
 rezultat.y=a.y*b.y;
 rezultat.reduce();
 return rezultat;




}



int main(){


Fraction f;
f.x=6;
f.y=8;
f.print();
cout<<endl;
cout<<f.value();
cout<<endl;
f.value();

f.reduce();
f.print();
cout<<endl;

 Fraction a;
    Fraction b;
    a.x=1;
    a.y=2;
    b.x=1;
    b.y=4;
    Fraction rezultat = sum(a,b);
    rezultat.print();
}
