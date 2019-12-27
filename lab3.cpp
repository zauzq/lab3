#include <iostream>

using namespace std;
int main ()
{
    float R = 2;
    float sum = 0;
    while (R <= 69){sum = sum +(1/R);
        R++;
    }
    cout << sum;
    return 0;
}
