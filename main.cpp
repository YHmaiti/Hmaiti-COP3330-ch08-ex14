/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yohan Hmaiti
 */

// Question given:
/*
Can we declare a non-reference function argument const (e.g., void
f(const int);)? What might that mean? Why might we want to do that?
Why don’t people do that often? Try it; write a couple of small programs
to see what works.
*/

// Answer:
// Yes we can declare a non-reference function argument const.
// That means that the argument will not be able to be updated in general within the function
// we can do this in order to keep the argument safe from any changes and not able to be updated.
// We can also use this to aim at preventing any mistake that can lead to modifying something you didn't want to modify.
// Furthermore, people do not do this often as it depends mainly on the purpose of the function,
// sometimes the arguments/parameters of a function will need to change within the function usually.
// Also, people do not usually do this as constants are usually declared global and accessible by all the functons in a more
// efficient way rather than having to pass it as argument.

// ---------------------visualization through a program:----------------------

// include the header file that contains all the needed imports/libraries
#include "std_lib_facilities.h"

// use a standard namespace 
using namespace std;

// in this program we will visualize how we can work with constants as arguments to the functions
// in this program, we will mainly use arguments that are integer constants as suggested by the assignment

// function that calculates the product of two numbers and returns it to the caller
int multiply(const int n1, const int n2) {
    return (n1 * n2);
}

// calculate the power of a number to the power of 2 and then return it to the caller
int square(const int n) {
    return pow(n, 2);
}

// calculate the power of a number to the power of 3 and then return it to the caller
int cube(const int n) {
    return pow(n, 3);
}

// function that calculates the sum of two numbers and returns it to the caller
int add(const int n1, const int n2) {
    return (n1 + n2);
}

// function that calculates the difference and returns it to the caller
int subtract(const int n1, const int n2) {
    return (n1 - n2);
}

// driver function main
int main(void)
{

    // create variables of type int that will help execute the multiple operations available
    // and store the result, we will work with sample data of 50 and 5 stored respectively in num1 and num2
    int choice = 0;
    int num1 = 50, num2 = 5;
    int result1 = 0, result2 = 0, result3 = 0;

    // prompt the user for a number of choice
    cout << "Hello, let's start with a powers calculations warmup :D, go ahead and chose a number (Integer): ";
    cin >> choice;

    // calculate the squared number and the cubed number and output it to the console
    cout << "The entered number of choice: " << choice << " squared is -> " << square(choice) << endl;
    cout << "The entered number of chouce: " << choice << " cubed is -> " << cube(choice) << endl;
    // call the appropriate function and determine the results appropriately for the sample data 50 and 5
    result1 = add(num1, num2);
    result2 = subtract(num1, num2);
    result3 = multiply(num1, num2);

    // output the results
    cout << "Let's work with some addition, difference and multiplication of two numbers! Hmmmm let's say 50 and 5.....\n";
    cout << "The result of the sum of 50 and 5 is -> " << result1 << ".\n";
    cout << "The result of the difference between 50 and 5 is -> " << result2 << ".\n";
    cout << "The result of the multiplication between 50 and 5 is -> " << result3 << ".\n";

    // end of the main function
    return 0;
}
