#include <iostream>
template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    std::string a, b;
    std::cin>>a>>b;
    std::cout<<"Values before swapping: a="<<a<<" b="<<b<<'\n';
    swap(a, b);
    std::cout<<"Values before swapping: a="<<a<<" b="<<b<<'\n';
}