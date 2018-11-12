#ifndef TEMPL_H
# define TEMPL_H

#include "interface.hpp"

template <class T>
class Number : public IOperand
{
	IOperand const * operator+(IOperand const & rhs) const;

}

#endif