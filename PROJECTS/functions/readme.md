    In previous chapters, you have been developing a Fraction structure for Teacher’s Pet
Software. Now you will develop a class that contains the fields and functions that a Fraction
needs. Create a Fraction class with three private data fields for whole number, numerator,
and denominator. Also create a constant static public field to hold the symbol that separates a
numerator and denominator when a Fraction is displayed—the slash. Create three public
member functions for the class, as follows:

-   An enterFractionValue()function that prompts the user to enter values for the
Fraction. Do not allow the user to enter a value of 0 for the denominator of any
Fraction; continue to prompt the user for a denominator value until a valid one is 
entered.
-   A reduceFraction()function that reduces a Fraction to proper form. For example, 
a Fraction with the value 0 2/6 would be reduced to 0 1/3 and a Fraction with the
value 4 18/4 would be reduced to 8 1/2.
-   A displayFraction()function that displays the Fraction whole number, numerator,
slash, and denominator.

## Add any other functions to the Fraction class that will be useful to you. Create a main()
## function that declares a Fraction object, and continues to get Fraction values from the
## user until the user enters a Fraction with value 0 (both the whole number and numerator
## are 0). For each Fraction entered, display the Fraction, reduce the Fraction, and display
## the Fraction again.