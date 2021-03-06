#ifndef TEMPL_H
# define TEMPL_H

#include "Interface.hpp"

template <class T>
class Number : public IOperand
{
public:
	int getPrecision( void ) const; 
	eOperandType getType( void ) const;

	IOperand const * operator+( IOperand const & rhs ) const; 
	IOperand const * operator-( IOperand const & rhs ) const; 
	IOperand const * operator*( IOperand const & rhs ) const;
	IOperand const * operator/( IOperand const & rhs ) const; 
	IOperand const * operator%( IOperand const & rhs ) const; 

	std::string const & toString( void ) const;

private:

};

	template <class T>
	IOperand const * Number<T>::operator+(IOperand const & rhs) const
	{
		if (rhs.getType() <= this->getType())
		{

		}
	}


#endif