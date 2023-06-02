#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = 0;
    int n = 0;
    float x = 0.0;
    float precision = 0.0000001;

    do {
        if (n % 2 == 0){
            x += 1.0 / (2 * n + 1);
        }
        else if (n == 0){
            x += 1.0 / (2 * n + 1);
        }
        else {
            x += -1.0 / (2 * n + 1);
        }
        float dif = (x - 3.141592 / 4);
        cout << "n = " << n << ", x = " << x << ", Diferencia = " << dif << endl;
        n++;
    }
    while (abs(x - 3.141592 / 4) > precision);

    pi = 4 * x;

    cout << "π = " << fixed << setprecision(6) << pi << endl;
    return 0;
}
