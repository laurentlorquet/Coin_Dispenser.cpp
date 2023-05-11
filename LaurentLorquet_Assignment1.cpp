// Assigment 1 
// The purpose of this program is to run a coin dispenser
// Author: Laurent Lorquet
// Date: 09/05/2022 20:57:08
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

// integers (q) represents quarters, (c) for cents, (d) for dimes, (n) for nickels, (p) for pennies
// cash represents total value in dollars and cents
double cash;
int q, c, d, n, p;
cout << "Please enter the value in dollars and cents (x.xx): $ \n";
cin >> cash;

if (cash > 0){
// Total cash into cents
c = cash * 100;

// First larger coin, quarters (q) followed by remaining cents (c)
q = c / 25;
c = c % 25;

// Second is dimes (d) followed by remaining cents (c)
d = c / 10;
c = c % 10;

// Lastly comes nicles followed by remaining pennies (p)
n = c / 5;
p = c % 5;
}
else {
    cout << "Cash can't be less than 0";
    return 0;
}

// Displaying the original dollar amount along with coin designations and their respective number
cout << "Your change is the following: \n";
cout << q << " quarters \n";
cout << d << " dime \n";
cout << n << " nickels \n";
cout << p << " pennies \n";

return 0;
}