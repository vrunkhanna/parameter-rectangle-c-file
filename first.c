// Question 1. write a program to calculate perimeter of rectangle.Take sides, a & b, from the user.



#include<stdio.h>
int main() {
    int l; // defining a length with l variable.
    printf("enter the one side  of rectangle : ", l); // telling user what to do.
    scanf("%d", &l); // taking  the value from user and assigning that to l.

    int w; // difining a width  with w variable
    printf("enter the second side of rectangle : ", w); // telling user what to do.
    scanf("%d", &w);  //  taking input from user and assigning for  w.

    int P = 2*l+2*w;  //assigning a new variable which have the formula of  perimeter of rectangle (P).
    printf("the perimeter of given side is : %d ", P); // showing a perimeter  of values which takes from user.



    return 0;
}