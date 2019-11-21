//STATUS : TEMPO LIMITE EXCEDIDO

#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;

    cin >> n;

    int casa[n];
    for (int i = 0; i < n; i++)
    {
        cin >> casa[i];


    }
    
    cin >> k;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if ((casa[i] + casa[j]) == k)
    //         {
    //             cout << casa[i] << " " << casa[j] << endl;

    //             return 0;
    //         }
    //     }
    // }

    return 0;
}