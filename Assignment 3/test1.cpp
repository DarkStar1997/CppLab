#include <iostream>
#include <vector>
template <typename T, typename X>
int search(T start, T end, X x)
{
    for(auto i = start; i != end; i++)
        if(*i == x)
            return std::distance(start, i);
    return -1;
}
int main()
{
    int n; std::cin>>n;
    std::vector<int> arr(n);
    for(auto& i : arr)
        std::cin>>i;
    int key; std::cin>>key;
    int ind = search(arr.begin(), arr.end(), key);
    if(ind < 0)
        std::cout<<"Element not found!!!\n";
    else
        std::cout<<"Element found at position "<<ind+1<<'\n';
    std::cin>>n;
    std::vector<std::string> arr1(n);
    for(auto& i : arr1)
        std::cin>>i;
    std::string key1; std::cin>>key1;
    ind = search(arr1.begin(), arr1.end(), key1);
    if(ind < 0)
        std::cout<<"Element not found!!!\n";
    else
        std::cout<<"Element found at position "<<ind+1<<'\n';
}