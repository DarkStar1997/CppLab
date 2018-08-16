#include <vector>
#include <iostream>
template <typename T>
class Stack
{
    std::vector<T> data;
public:
    void push(const T &x)
    {
        std::cout<<"Pushing "<<x<<'\n';
        data.push_back(x);
    }
    void pop()
    {
        if(data.empty())
            std::cout<<"Stack is empty!!! Nothing to pop.\n";
        else
        {
            std::cout<<"Popping "<<data.back()<<'\n';
            data.pop_back();
        }
    }
    void display()
    {
        std::cout<<"Current Stack: ";
        for(auto i = data.rbegin(); i != data.rend(); i++)
            std::cout<<*i<<' ';
        std::cout<<'\n';
    }
};
int main()
{
    Stack<int> obj;
    obj.push(2);
    obj.push(5);
    obj.pop();
    obj.display();
    obj.pop();
    obj.pop();
}