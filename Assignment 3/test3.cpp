#include <iostream>
#include <vector>
template <typename T>
struct Matrix
{
    std::vector<std::vector<T>> data;
    Matrix(int rows, int cols) : data(rows, std::vector<T>(cols)) {}
    Matrix<T> operator+(const Matrix &a)
    {
        int m = a.data.size(), n = a.data[0].size();
        Matrix ans(m, n);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                ans.data[i][j] = data[i][j] + a.data[i][j];
        return ans;
    }
    Matrix<T> operator-(const Matrix &a)
    {
        int m = a.data.size(), n = a.data[0].size();
        Matrix ans(m, n);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                ans.data[i][j] = data[i][j] - a.data[i][j];
        return ans;
    }
    Matrix<T> operator*(const Matrix &a)
    {
        int m = data.size(), n = data[0].size(), o = a.data[0].size();
        Matrix<T> ans(m, o);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < o; j++)
                for(int k = 0; k < n; k++)
                    ans.data[i][j] += data[i][k] * a.data[k][j];
        return ans;
    }
};
int main()
{
    int n; std::cin>>n;
    Matrix<int> a(n, n), b(n, n), c(n, n), d(n, n);
    std::cout<<"Enter a:\n";
    for(auto& i : a.data)
        for(auto& j : i)
            std::cin>>j;
    std::cout<<"Enter b:\n";
    for(auto& i : b.data)
        for(auto& j : i)
            std::cin>>j;
    std::cout<<"Enter c:\n";
    for(auto& i : c.data)
        for(auto& j : i)
            std::cin>>j;
    d = a + b * c;
    std::cout<<"Result of the expression is:\n";
    for(const auto& i : d.data)
    {
        for(const auto& j : i)
            std::cout<<j<<' ';
        std::cout<<'\n';
    }
}