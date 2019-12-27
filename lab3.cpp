#include <iostream>

using namespace std;
int main ()
{
    float R = 6;
    float sum = 0;
    while (R <= 19){sum = sum +(1/R);
        R++;
    }
    cout << sum;
    return 0;
}
