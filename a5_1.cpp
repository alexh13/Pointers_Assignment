/*
 Alex Hughes
 CS 110B
 2/26/19
 Professor Dave
 Assignment 5.1

 This assignment is multiple simple tasks with pointers. Good practice to familiarize myself with logic behind pointers.

*/

#include <iostream>


// Function for checking if value is a negative
void noNegatives(int* x) {
    *x = (*x < 0) ? 0 : *x;
}


void swap(int * value1, int * value2, int temp) {
    temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}


int main() {

    void noNegatives(int* x);
    void swap(int * value1, int * value2, int temp);

// 1. Create two integer variables named x and y.
    int x, y;


// 2. Create an int pointer named p1.
    int* p1 = nullptr;


// 3. Store the address of x in p1.
    p1 = &x;


// 4. Use only p1 (not x) to set the value of x to 99.
    *p1 = 99;


// 5. Using cout and x (not p1), display the value of x.
    std::cout << "x contains: " << x << std::endl;


// 6. Using cout and the pointer p1 (not x), display the value of x.
    std::cout << "x contains: " << *p1 << std::endl;


// 7. Store the address of y into p1.
    p1 = &y;


// 8. Use only p1 (not y) to set the value of y to -300.
    *p1 = -300; // y = -300


// 9. Create two new variables: an int named temp, and an int pointer named p2. Make p2
//    point to x.
    int temp =  0;
    int* p2 = nullptr;

    p2 = &x; // x = 99


// 10. Use only temp, p1, and p2 (not x or y) to swap the values in x and y. (This will take
//     a few statements.   Don't use a swap function.)
    temp = *p2; // temp = 99
    *p2 = *p1; // p2 = x = -300
    *p1 = temp; // p1 = y = 99


// 11. Write a function with the following signature: void noNegatives(int *x). The function
//     should accept the address of an int variable. If the value of this integer is
//     negative then it should set it to zero.
//     Place the prototype for this function above the main function, and the definition
//     below main().



// 12. Invoke the function twice: once with the address of x as the argument, and once with
//     the address of y.  Use x or y for the argument (not p1 or p2).

    noNegatives(p1); // returns y = 99

    noNegatives(p2); // returns x = 0


// 13. Use p2 to display the values in x and y (this will require both assignment statements
//     and cout statements).  You can use x and y in assignment statements, but not in your
//     cout statement. This should produce the output
//
//     x is: 0
//     y is: 99
    *p2 = x;
    std::cout << "x is : " << *p2 << std::endl; // *p2 -> x = 0 after noNegatives function is called
    *p2 = y;
    // *p2 -> y = 99
    std::cout << "and y is: " << *p2 << std::endl; // p2 -> y = 99


    std::cout << x << std::endl;
// 14. Create an int array named 'a' with two elements. Make p2 point to the first element
//     of a.

    int a[2];

    p2 = &a[0]; // *p2 -> a[0]


// 15. Use only p2 and x (not a) to initialize the first element of a with the value of x.
    p2[0] = x;

// 16. Use only p2 and y (not a) to initialize the second element of a with the value of y.
//     Leave p2 pointing to the first element of a. Don't use pointer arithmetic.
//     Hint: don't forget that pointers and arrays are the same thing.
    p2[1] = y; // p2 -> y = 99

// 17. Using cout and p2 only, display the address of the first element in a.
    std::cout << "The address of the first element in a[] is: " << p2[0] << std::endl;

// 18. Using cout and p2 only, display the address of the second element in a. Leave p2
//     pointing to the first element of a.   Don't use pointer arithmetic.
    std::cout << "and the address of the second element in a[] is: " << p2[1] << std::endl;

// 19. Use p1, p2, and temp to swap the values in the two elements of array 'a'.
//     (first point p1 at a[0], then point p2 at a[1], then do not use "a" again. After this
//     the swapping steps should look very similar to step 10. Don't use a swap function.)
    *p1 = a[0];
    *p2 = a[1];
    temp = 0;
    temp = *p1; // temp = a[0]
    *p1 = *p2; // *p1 = a[1]
    *p2 = temp; // *p2 = a[0]



// 20. Display the values of the two elements.
//     (The first element should be 99, the second 0).
    std::cout << "The first element in a[] is:" << p1 << " and the second element in a[] is: " << p2 << std::endl;

// 21. Write a function named 'swap' that accepts two pointers to integers as arguments, and
//     then swaps the contents of the two integers. Do not use any reference parameters.
//     Place the function prototype for swap() above the main() function, and place the
//     definition of swap() below main().
// 22. Invoke your swap() function with the addresses of x and y (using the address-of
//     operator in the arguments), then print their values.  (x should be 99, y should be 0).
    //swap(*p1, *p2, temp);

// 23. Invoke your swap function with the address of the two elements in array 'a', then
//     print their values.  (a[0] should be 0, a[1] should be 99).


} /* end of function main() */