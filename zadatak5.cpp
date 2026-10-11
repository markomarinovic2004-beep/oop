#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

void move_by(Point* p, double dx, double dy)
{
    p->x = p->x + dx;
    p->y = p->y + dy;
}

void move_by(Point& p, double dx, double dy)
{
    p.x = p.x + dx;
    p.y = p.y + dy;
}

double dist(const Point* a, const Point* b)
{
    double dx = a->x - b->x;
    double dy = a->y - b->y;

    return sqrt(dx * dx + dy * dy);
}

double dist(const Point& a, const Point& b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;

    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point a = {1, 2};
    Point b = {2, 2};

    move_by(&a, 2, 3);
    move_by(a, 2, 3);

    cout << "Tocka a: " << a.x << " " << a.y << endl;
    cout << "Tocka b: " << b.x << " " << b.y << endl;

    cout << "Udaljenost (pointeri): " << dist(&a, &b) << endl;
    cout << "Udaljenost (reference): " << dist(a, b) << endl;

    Point tocke[5] = {
        {1, 2},
        {3, 4},
        {0, 1},
        {5, 6},
        {2, 2}
    };

    Point ishodiste = {0, 0};
    int najbliza = 0;

    for (int i = 1; i < 5; i++)
    {
        if (dist(tocke[i], ishodiste) < dist(tocke[najbliza], ishodiste))
        {
            najbliza = i;
        }
    }

    cout << "Najbliza tocka: "
         << tocke[najbliza].x << " "
         << tocke[najbliza].y << endl;

    return 0;
}
