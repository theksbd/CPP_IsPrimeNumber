#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime (int n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0 && n != 2)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main()
{
    cout << IsPrime(9);

    return 0;
}
