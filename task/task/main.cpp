#include <iostream>

// ��������� ��������� ����� ����� �����, ������������� ����� ������� 1 � N ������������. 
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
