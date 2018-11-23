#include <iostream>
class Complex
{
public:
    double real, img;
    Complex()
    {
        real = 0; img = 0;
    }
    Complex(double x)
    {
        real = x; img = 0;
    }
    Complex(double x, double y)
    {
        real = x; img = y;
    }
    Complex operator+(const Complex &b)
    {
        return Complex(real+b.real, img + b.img);
    }
};
std::ostream& operator<<(std::ostream &out, Complex a)
{
    out << a.real << " + " << a.img << "i";
    return out;
}
int main()
{
    Complex a(1, 2), b(3, 4);
    a = a + b;
    std::cout << "Ans: " << a << '\n';
}