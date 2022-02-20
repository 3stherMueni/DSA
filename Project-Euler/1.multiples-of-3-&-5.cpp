// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>
#include <iostream>
using namespace std;

//function to get multiples of a number
int multiple(int num1,int num2, int n){//the number we are finding multiple is num1 & num2 and the numbers we are chacking are below n
    int sum = 0;
    for (int i= 1; i < n; i++){
        if((i%num1) == 0 || (i%num2) == 0 ){ //check if the number is a multiple of 3 or 5
            sum += i;
        }
    }
    return sum;
    cout << "Sum is " << sum;
}


int main()
{
    cout << "Sum is " << multiple(3,5,1000);

}
