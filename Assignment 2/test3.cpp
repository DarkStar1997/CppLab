#include <iostream>
template <typename T>
class Complex
{
    T real, img;
public:
    Complex() : real(0), img(0) {}
    Complex(const T &x) : real(x), img(x) {}
    Complex(const T &x, const T &y) : real(x), img(y) {}
    static Complex add(const Complex &x, const Complex &y)
    {
        return Complex(x.real + y.real, x.img + y.img);
    }
    void display()
    {
        std::cout<<real<<" + "<<img<<"j\n";
    }
};
int main()
{
    int x, y; std::cin>>x>>y;
    Complex<int> a(x, y);
    std::cin>>x>>y;
    Complex<int> b(x, y);
    std::cout<<"a = "; a.display();
    std::cout<<"b = "; b.display();
    auto c = Complex<int>::add(a, b);
    std::cout<<"c = "; c.display();
}