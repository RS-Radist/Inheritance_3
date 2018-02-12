
//Используя понятие множественного наследования, разработайте класс "Окружность, вписанная в квадрат".
#include <iostream>

class Square
{
    int side;
protected:
    Square(int _side): side(_side)
    {}
};

class Circle
{
    int radius;
protected:
    Circle(int _radius): radius(_radius) { }
};

class CircleInSquare: public Circle, public Square
{
public:
    CircleInSquare(int side): Square(side), Circle(side/2) { }
};

int main()
{
    CircleInSquare(10);
}