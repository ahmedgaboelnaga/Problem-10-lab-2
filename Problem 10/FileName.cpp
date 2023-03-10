#include <iostream>

using namespace std;

int main()
{
    int x, y, z, product, average;

    cout << "Enter the numbers\n";
    cin >> x >> y >> z;

    product = x * y * z;
    average = (x + y + z) / 3;

    if (product % average == 0)
    {
        cout << "The product is divisible by its average";
    }
    else
    {
        cout << "The product is not";
    }

    return 0;
}