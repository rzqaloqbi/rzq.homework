// rzq.homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
class Point
{
public:
    double X;
    double Y;
    Point()
    {
        X = 0.0;
        Y = 0.0;
    }

    Point(double x, double y)
    {
        X = x;
        Y = y;
    }
    double getX()
    {
        return X;
    }
    double getY()
    {
        return Y;
    }
    void setX(double x)
    {
        X = x;
    }
    void setY(double y)
    {
        Y = y;
    }
    double distanceTo(const Point& other)
    {
        double ax = other.X - X;
        double ay = other.Y - Y;
        return(pow((other.X - X), 2) + pow((other.Y - Y), 2));
    }
    Point operator+(const Point& other)
    {
        Point obj;
        obj.X = other.X + X;
        obj.Y = other.Y + Y;
        return obj;
   }
    Point operator-(const Point& other)
    {
        Point obj;
        obj.X = other.X - X;
        obj.Y = other.Y - Y;
        return obj;
    }

};


int main()
{
    Point p1(1, 2);
    cout << "p1= " << p1.getX() << " ' " << p1.getY() << endl;
    Point p2(3, 4);
    cout << "p2= " << p2.getX() << " ' " << p2.getY() << endl;
    double d = p1.distanceTo(p2);
    cout << "distance= " << d << endl;
    Point p3 = p1 + p2;
    cout << "p3= " << p3.getX() << " ' " << p3.getY() << endl;
    Point p4 = p1 - p2;
    cout << "p4= " << p4.getX() << " ' " << p4.getY() << endl;
}

