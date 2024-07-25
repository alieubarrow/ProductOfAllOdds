//Header files
#include <iostream>
using namespace std;

int main() {

        int productsOfAllOdds = 1;

        //For loop goes through 1 - 15 and computes product of all odd integers
        for (int i = 1; i <= 15; i++) {
                if (i % 2 != 0) {
                        productsOfAllOdds *= i;
                }
        }

        cout << "The product of all odd integers between 1 and 15 is: " << productsOfAllOdds << endl;

        return 0;
}
