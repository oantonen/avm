#ifndef INTERFACE_H
# define INTERFACE_H

#include <iostream>

enum class eOperandType
{
	Int8, Int16, Int32,	Float, Double
};

class IOperand {

public:

virtual int getPrecision( void ) const = 0; 
virtual eOperandType getType( void ) const = 0;

virtual IOperand const * operator+( IOperand const & rhs ) const = 0; 
virtual IOperand const * operator-( IOperand const & rhs ) const = 0; 
virtual IOperand const * operator*( IOperand const & rhs ) const = 0; 
virtual IOperand const * operator/( IOperand const & rhs ) const = 0; 
virtual IOperand const * operator%( IOperand const & rhs ) const = 0; 

virtual std::string const & toString( void ) const = 0; // String representation of the instance

virtual ~IOperand( void ) {} 
};

#endif