#include <iostream>
using namespace std;

struct Fraction
{
    int a;
    int b;

    void print()
    {
        cout << a << "/" << b << endl;
    }

    double value()
    {
        return (double)a / b;
    }

    void reduce()
    {
        int nzd = 1;

        for (int i = 1; i <= a && i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                nzd = i;
            }
        }

        a = a / nzd;
        b = b / nzd;
    }
};

Fraction sum(const Fraction& x, const Fraction& y)
{
    Fraction rezultat;

    rezultat.a = x.a * y.b + y.a * x.b;
    rezultat.b = x.b * y.b;

    rezultat.reduce();

    return rezultat;
}

int main()
{
    Fraction f = {6, 8};

    f.print();

    cout << "Decimalna vrijednost: " << f.value() << endl;

    f.reduce();
    f.print();

    Fraction x = {1, 2};
    Fraction y = {1, 4};

    Fraction rezultat = sum(x, y);
    rezultat.print();

    return 0;
}
