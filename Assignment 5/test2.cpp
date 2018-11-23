#include <iostream>
#include <vector>
struct Vector
{
    std::vector<std::vector<int>> arr;
    void operator=(const Vector &x)
    {
        for(int i = 0; i < x.arr.size(); i++)
            for(int j = 0; j < x.arr[0].size(); j++)
                arr[i][j] = x.arr[i][j];
    }
    bool operator==(const Vector &x)
    {
        for(int i = 0; i < x.arr.size(); i++)
            for(int j = 0; j < x.arr[0].size(); j++)
                if(arr[i][j] != x.arr[i][j])
                    return false;
        return true;
    }
};
int main()
{
    Vector c1, d1;
    c1.arr = {{1, 2, 3}, {4, 5, 6}};
    d1.arr = {{4, 5, 6}, {1, 2, 3}};
    std::cout << (c1 == d1) << '\n';
    d1 = c1;
    std::cout << (c1 == d1) << '\n';
}