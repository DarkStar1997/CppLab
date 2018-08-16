#include <vector>
#include <iostream>
template <typename T>
struct space
{
    T x, y, z;
    space(const T &a, const T &b, const T &c) : x(a), y(b), z(c) {}
    space operator+(space<T> &a)
    {
        return space(x + a.x, y + a.y, z + a.z);
    }
    space operator-(space<T> &a)
    {
        return space(x - a.x, y - a.y, z - a.z);
    }
    void display()
    {
        std::cout<<"("<<x<<","<<y<<","<<z<<")\n";
    }
};
template <typename T>
std::vector<space<T>> operator+(std::vector<space<T>> &arr1, std::vector<space<T>> &arr2)
{
    std::vector<space<T>> ans(arr1.size(), space<T>(0, 0, 0));
    for(int i = 0; i < arr1.size(); i++)
        ans[i] = arr1[i] + arr2[i];
    return ans;
}
template <typename T>
std::vector<space<T>> operator-(std::vector<space<T>> &arr1, std::vector<space<T>> &arr2)
{
    std::vector<space<T>> ans(arr1.size(), space<T>(0, 0, 0));
    for(int i = 0; i < arr1.size(); i++)
        ans[i] = arr1[i] - arr2[i];
    return ans;
}
int main()
{
    std::vector<space<int>> pt1 = {space<int>(1, 2, 3), space<int>(4, 5, 6), space<int>(7, 8, 9)};
    std::vector<space<int>> pt2 = {space<int>(11, 2, 13), space<int>(43, 15, 66), space<int>(-7, 58, -19)};
    auto ans1 = pt1 + pt2;
    std::cout<<"Result after addition:\n";
    for(auto& i : ans1)
        i.display();
    auto ans2 = pt1 - pt2;
    std::cout<<"Result after subtraction:\n";
    for(auto& i : ans2)
        i.display();
}