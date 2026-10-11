#include<iostream>
using namespace std;
namespace geo{
const double PI=3.14152;
}

double area(double r){
double povrsina_kruga;
povrsina_kruga=(r*r)+geo::PI;
return povrsina_kruga;

}

double area(double a, double b){
    double povrsina_pravokutnika;
    povrsina_pravokutnika=(a*b)/2.0;
    return povrsina_pravokutnika;

}

int area(int a){
int povrsina_kvadrata;
povrsina_kvadrata=a*a;
return povrsina_kvadrata;
}


void print_line(char c ='-', int lenght=30){
for(int i=0; i<lenght; i++){
    cout<<c;
}
cout<<endl;
}
int main(){



cout<<"Povrsina kruga: "<<area(5.0)<<endl;
print_line();
cout<<"Povrsina pravokutnika: "<<area(2,4)<<endl;
print_line('*',20);
cout<<"Povrsina kvadrata: "<<area(5)<<endl;
print_line('*',20);
cout<<"Area A: "<<area('A')<<endl;


}
