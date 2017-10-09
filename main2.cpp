//
//  main.cpp
//  hw2
//
//  Created by Joel Johnson on 4/24/15.
//  Copyright (c) 2015 Joel Johnson. All rights reserved.
//

#include <iostream>

using namespace std;

#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "recursive_functions.h"

int main(int argc, char *argv[]) {
    
    // Question 1
    double tbase, tlength, rlength, rwidth, radius; // initializes variables use to compute areas of shapes
    
    cout << "Please enter the triangle's base: ";
    cin >> tbase; //triangle base
    if (tbase <= 0){
        cout << "Please enter a positive number: ";
        cin >> tbase;
    }
    cout << "Please enter the length of the triangle: ";
    cin >> tlength; //triangle length
    if (tlength <= 0){
        cout << "Please enter a positive number: ";
        cin >> tlength;
    }
    cout << "Please enter the length of the rectangle: ";
    cin >> rlength; //rectangle length
    if (rlength <= 0){
        cout << "Please enter a positive number: ";
        cin >> rlength ;
    }
    cout << "Please enter the width of the rectangle: ";
    cin >> rwidth; //rectangle width
    if (rwidth <= 0){
        cout << "Please enter a positive number: ";
        cin >> rwidth;
    }
    cout << "Please enter circle's radius: ";
    cin >> radius; // circle's radius
    if (radius <= 0){
        cout << "Please enter a positive number: ";
        cin >> radius;
    }
    cout << endl;
    cout << "Area of triangle is " << areaoftriangle(tbase, tlength) << endl;//prints area of triangle
    cout << "Area of rectangle is " << areaofrectangle(rlength, rwidth) << endl;//prints area of rectangle
    cout << "Area of circle is " << areaofcircle(radius) << endl;//prints area of circle
    cout << endl;
    
    //Question 2
    int rnum, guess;// initializes variables for question 2
    rnum = rand() % 100 + 1;
    //cout << rnum << endl;
    cout << "Please enter a number between 0 – 100 inclusive: ";
    cin >> guess;//wait for user input
    while (guess != rnum){//when the guess is correct the loop will be exited
        if (guess > 100 || guess < 0){ //error message shows if number not in range
            cout << "Invalid range, try again: ";
            cin >> guess;
        }
        else if (guess < rnum){
            cout << "Too small, try again: ";
            cin >> guess;
        }
        else{
            cout << "Too large, try again: ";
            cin >> guess;
        }
    }
    cout << "That’s correct! The number is " << rnum << ".\n";
    cout << endl;
    
    //Question 3
    int num, basenum, exp, primer, divisor = 2;
    cout << "Please enter a positive number: ";
    cin >> num;
    printNums(num);//prints numbers on single line
    printNumsReverse(num);//prints numbers on single line in reverse order
    cout << endl << endl;
    //part b
    cout << "Please enter a base number: ";
    cin >> basenum;
    cout << "Please enter an exponent : ";
    cin >> exp;
    cout << "power("<< basenum<< ", "<<exp<< ") = "<<power(basenum, exp)<<endl; //prints the output of power function
    cout << endl;
    //part c
    cout << "Please enter a positive number: "<<endl;
    cin >> primer;
    if (isPrime(primer, divisor) == false){//determines whether number is prime
        cout << "The number is  prime"<< endl;
    }
    else{
        cout << "The number is not prime"<< endl;
    }
    cout << endl;
    
    //Question 4
    int num1, num2, num3, num4, correct = 0, wrong = 0;
    cout <<"Welcome to our math quiz program! Please enter the answers"
    << " to the following questions:"<<endl;
    cout << "5! = ";// the answer is 120
    cin >> num1;
    if (num1 == 120){
        correct += 1;
    }
    else{
        wrong += 1;
    }
    cout << "(2^2^(2^2)) = "; // the answer is 65536
    cin >> num2;
    if (num2 == 65536){
        correct += 1;
    }
    else{
        wrong += 1;
    }
    cout << "3*(4+8)/((4*2)	/(5	– 1)) = ";// the answer is 18
    cin >> num3;
    if (num3 == 18){
        correct += 1;
    }
    else{
        wrong += 1;
    }
    cout << "2^6 = ";// the answer is 64
    cin >> num4;
    if (num4 == 64){
        correct += 1;
    }
    else{
        wrong += 1;
    }
    cout << endl;
    cout << "Number of correct answers: " << correct << endl;
    cout << "Number of incorrect answers: " << wrong << endl;
    cout << "Quiz percentage: " << correct*100/4 << "%"<< endl;//shows score
    return 0;
}
