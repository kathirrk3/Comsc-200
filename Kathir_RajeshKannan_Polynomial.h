// Kathir_RajeshKannan_Polynomial.h
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <vector>

// Define the Polynomial class to represent a polynomial expression
class Polynomial {
public:
    // Constructor to initialize the polynomial
    Polynomial();

    // Destructor to clean up resources if necessary
    ~Polynomial();

    // Function to set the coefficient for a specific term with the given exponent
    void setCoefficient(int coefficient, int exponent);

    // Function to get the coefficient of a term with a specified exponent
    int getCoefficient(int exponent) const;

    // Function to print the polynomial in a readable format
    void print() const;

    // Overloaded addition operator to add two polynomials and return the result
    Polynomial operator+(const Polynomial &rhs) const;

    // Overloaded subtraction operator to subtract one polynomial from another
    Polynomial operator-(const Polynomial &rhs) const;

    // Overloaded assignment operator to assign one polynomial to another
    Polynomial& operator=(const Polynomial &rhs);

    // Overloaded addition assignment operator to add another polynomial to the current one
    Polynomial& operator+=(const Polynomial &rhs);

    // Overloaded subtraction assignment operator to subtract another polynomial from the current one
    Polynomial& operator-=(const Polynomial &rhs);

private:
    // Struct to represent a term in the polynomial, consisting of a coefficient and an exponent
    struct Term {
        int coefficient;
        int exponent;
    };

    // Vector to store all terms of the polynomial
    std::vector<Term> terms;
};

#endif // POLYNOMIAL_H
