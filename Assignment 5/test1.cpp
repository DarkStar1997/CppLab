#include <iostream>
#include <vector>
#include <algorithm>
struct Student
{
    std::string name; int roll;
    Student(std::string x, int y)
    {
        name = x; roll = y;
    }
};
int main()
{
    int n; std::cin>>n;
    std::vector<Student> arr(n, Student("", 0));
    for(auto& i : arr)
        std::cin >> i.name >> i.roll;
    std::sort(arr.begin(), arr.end(), [](const Student &x, const Student &y){
        if(x.name != y.name)
            return x.name < y.name;
        return x.roll < y.roll;
    });
    std::cout << "Sorted order:\nName\tRoll\n";
    for(const auto& i : arr)
        std::cout << i.name <<'\t' << i.roll << '\n';
}