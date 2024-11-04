// CMSC 330 Advanced Programming Languages
// Project 2 
// Vadym Kharchenko
// October 3, 2024

// This file contains the class definition of the Plus class, which is a subclass of SubExpression,
// which in turn is a subclass of the Expression. Because both of its functions are one line functions, 
// they are implemented as inline functions. Its constructor initializes the left and right subexpressions
// it inherits from SubExpression by calling the constructor of the SubExpression class. Because
// it is an indirect subclass of Expression it must implement the evaluate function, which it does
// by returning the sum of the values of the two subexpressions.

class Unary: public SubExpression {
public:
    Unary(Expressions* left, Expressions* right1, Expressions* right2): SubExpression(left, right1, right2) {
    }
    float evaluate()  {
        if (left->evaluate() == 0) { return right2->evaluate(); }
        else { return right1->evaluate(); }
    }
};