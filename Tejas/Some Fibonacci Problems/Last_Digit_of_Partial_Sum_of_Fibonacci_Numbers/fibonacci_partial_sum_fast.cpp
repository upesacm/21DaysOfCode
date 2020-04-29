#include <iostream>
#include <vector>
using namespace std;

int fibonacci_mod_small(int n, int m)
{
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % m;
    }

    return fib[n];
}

int pisano_period_length(int m)
{
    if (m == 1)
    {
        return 0;
    }
    int first = -1;
    int second = -1;
    int i = 2;
    while (1)
    {
        second = fibonacci_mod_small(i, m);
        if (second == 1 && first == 0)
        {
            return i - 1;
        }
        first = second;
        i += 1;
    }
}

long long fibonacci_huge_fast(long long n, long long m)
{
    int pisano_length = pisano_period_length(m);
    long long remain;
    do
    {
        remain = n % pisano_length;
        n = remain;
    } while (remain >= pisano_length);

    return fibonacci_mod_small(n, m);
}

int fibonacci_sum_fast(long long from, long long to)
{
    return ((fibonacci_huge_fast(to + 2, 10) - 1) - (fibonacci_huge_fast(from + 1, 10) - 1));
}

int main()
{
    long long r1, r2;
    cin >> r1 >> r2;
    int sum = fibonacci_sum_fast(r1, r2);
    if(sum<0)
    	sum = sum + 10;
    else
    	sum = sum;
    int value = sum;
    cout << value;
}
