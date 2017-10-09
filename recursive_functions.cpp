//
//  recursive_functions.cpp
//  hw2
//
//  Created by Joel Johnson on 4/24/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//
#include <iostream>
using namespace std;
#include "recursive_functions.h"
void printNums(int n){ // prints numbers from n to 0
    if (n == 0){
        cout << "0" << endl;
    }
    else{
        cout << n << " ";
        printNums(n -1);
    }
}

void printNumsReverse(int n){ // prints numbers from 0 to n
    if (n == 0){
        cout << "0 ";
    }
    else{
        printNumsReverse(n-1);
        cout << n << " ";
    }
}

int power(int basenum, int exp){ // returns basenum^exp
    if (exp == 0){
        return 1;
    }
    else{
        return basenum*power(basenum, exp-1);
    }
}

bool isPrime(int num, int divisor){//determines if number is prime
    if (divisor == num -1 ) {
        return num % divisor == 0;
    }
    else{
        return (num % divisor == 0 || isPrime(num,divisor+1));
    }
}