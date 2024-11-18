// Kathir_RajeshKannan_Polynomial.cpp
#include "Kathir_RajeshKannan_Polynomial.h"

// Constructor to initialize the polynomial
Polynomial::Polynomial() {}

// Destructor to clean up resources
Polynomial::~Polynomial() {}

// Function to set the coefficient of a term with a specific exponent
void Polynomial::setCoefficient(int coefficient, int exponent) {
    // Add the term to the vector of terms
    terms.push_back({coefficient, exponent});
}

// Function to get the coefficient of a term with a given exponent
int Polynomial::getCoefficient(int exponent) const {
    // Iterate over the terms to find the one with the matching exponent
    for (const auto &term : terms) {
        if (term.exponent == exponent) {
            return term.coefficient; // Return the coefficient if found
        }
    }
    return 0; // Return 0 if no matching term is found
}

// Function to print the polynomial in a readable format
void Polynomial::print() const {
    // Iterate over the terms and print each one
    for (const auto &term : terms) {
        std::cout << term.coefficient << "x^" << term.exponent << " ";
    }
    std::cout << std::endl;
}

// Overloaded addition operator to add two polynomials
Polynomial Polynomial::operator+(const Polynomial &rhs) const {
    Polynomial result;
    // Add terms from the first polynomial
    for (const auto &term : terms) {
        result.setCoefficient(term.coefficient, term.exponent);
    }
    // Add terms from the second polynomial
    for (const auto &term : rhs.terms) {
        result.setCoefficient(term.coefficient, term.exponent);
    }
    return result;
}

// Overloaded subtraction operator to subtract one polynomial from another
Polynomial Polynomial::operator-(const Polynomial &rhs) const {
    Polynomial result;
    // Add terms from the first polynomial
    for (const auto &term : terms) {
        result.setCoefficient(term.coefficient, term.exponent);
    }
    // Subtract terms from the second polynomial
    for (const auto &term : rhs.terms) {
        result.setCoefficient(-term.coefficient, term.exponent);
    }
    return result;
}

// Overloaded assignment operator to assign one polynomial to another
Polynomial& Polynomial::operator=(const Polynomial &rhs) {
    // Check for self-assignment
    if (this != &rhs) {
        terms = rhs.terms; // Copy the terms from the right-hand side
    }
    return *this;
}

// Overloaded addition assignment operator to add another polynomial to the current one
Polynomial& Polynomial::operator+=(const Polynomial &rhs) {
    *this = *this + rhs; // Use the overloaded + operator
    return *this;
}

// Overloaded subtraction assignment operator to subtract another polynomial from the current one
Polynomial& Polynomial::operator-=(const Polynomial &rhs) {
    *this = *this - rhs; // Use the overloaded - operator
    return *this;
}
