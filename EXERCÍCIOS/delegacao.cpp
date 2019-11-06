#include <iostream>

using namespace std;

long long  mdc(long long  dividendo, long long  divisor)
{
    if ((dividendo % divisor == 0))
    {
        return divisor;
    }
    else
    {
        return mdc(divisor, (dividendo % divisor));
    }
}

int  main()
{
    long long  rival, minha;

    cin >> rival >> minha;

    long long  res = 1;

    for (long long  i = minha; i > 0; i--)
    {
        if (mdc(rival,i) == 1)
        {
            res = i;
            break;
        }
    }

    cout << res << "\n";
    return 0;
}