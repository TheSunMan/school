#include <iostream>

using namespace std;

int main()
{
    int product, sum;
    int one = 0;
    int two = 0;

    cout << "product: ";
    cin >> product;
    cout << "sum: ";
    cin >> sum;

    int max = product + sum;
    int low = max * -1;

    for (int first = low; first < max; first++)
        for (int second = low; second < max; second++)
            if((first + second == sum) && (first * second == product))
            {
                one = first;
                two = second;
                break;
            }

    cout << "terms: " << one << " " << two;
    cout << endl << endl;
    main();
}
