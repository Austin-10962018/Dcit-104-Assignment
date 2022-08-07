#include <iostream>

using namespace std;

int main() {
    // Listing all integers to be used
    // givennum is the number to be input
    int num, i, givennum, sum = 0;

    // Enter the end number of the sum of prime numbers
    cout << "Find sum of prime numbers upto : ";
    cin >> givennum;

    for(num = 2; num <= givennum; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        // Adding of number when prime
        if(i != num) {
            sum += num;            
        }
    }

    cout << endl << "Sum of all prime numbers upto " <<givennum << " : " << sum;

    return 0;
    // Austin Atsu wrote this code
    //ID: 10962018
}