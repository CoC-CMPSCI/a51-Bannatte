// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // TODO: declare variable n for the exponent input
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    
    // TODO: read n from standard input
    double output = 1.0;
    if (n > 0) {
        for (int i = 0; i < n; ++i) {
            result *= 2;
        }
    } else if (n < 0) {
        for (int i = 0; i < -n; ++i) {
            result /= 2;
        }
    } else {
        continue;
    }

    // TODO: compute 2 to the power of n using a loop (no cmath pow)
    // For positive n: multiply result by 2, n times
    // For negative n: divide result by 2, |n| times

    cout << setprecision(5) << fixed;
    cout << "2 to the power of " << n << " is equal too " << output << endl;

    return 0;

}
