#include <iostream>

// You need to calculate the sum of integers located between the numbers 1 and N inclusive. 
int sum(int N)
{
    int res = 0;
    for (size_t i = 1; i <= N; ++i)
    {
        res += i;
    }
    return res;
}

int main()
{

    std::cout << sum(3) << std::endl; // 6

    return 0;
}
