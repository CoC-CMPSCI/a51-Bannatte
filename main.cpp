#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variable n for the exponent input
    int n;
    cout << "Enter integer n: ";
    cin >> n;
    
    // Initialize output
    double output = 1.0;

    if (n > 0) {
        // Positive exponent: multiply by 2, n times
        for (int i = 0; i < n; ++i) {
            output *= 2;
        }
    } else if (n < 0) {
        // Negative exponent: divide by 2, |n| times
        for (int i = 0; i < -n; ++i) {
            output /= 2;
        }
    }

    cout << setprecision(5) << fixed;
    cout << "2 to the power of " << n << " is " << output << endl;

    return 0;
}
