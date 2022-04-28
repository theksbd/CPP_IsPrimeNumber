#include <iostream>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n & 1 == 0) // even number
        return false;
    for (long long i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // n = 10, 107, 1003, 12345, 138978, 2147483647, 6620830889
    clock_t start_time, end_time;
    start_time = clock();
    isPrime(6620830889) ? cout << "Prime\n" : cout << "Not Prime\n";
    end_time = clock();
    double duration = double(end_time - start_time) / double(CLOCKS_PER_SEC);
    cout << fixed;
    cout << "Duration : " << setprecision(5) << duration << " (s)\n";
    return 0;
}
