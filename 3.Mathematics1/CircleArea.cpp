#include <iostream>
#define PI 3.1415926535897932

using namespace std;
/*
    Circle Area :
        Euclidean Geometry = PI * r ^ 2
        Taxi Cab Geometry = 2 * r ^2
*/
int main() {
    double r;

    cin >> r;
    
    cout << fixed; //before "2" -> after "2.00000"
    // print 6 decimal places
    cout.precision(6); 
    cout << PI * r * r << "\n"; 
    cout << 2 * r * r;

    return 0;
}