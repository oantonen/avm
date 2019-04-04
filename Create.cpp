#include "Create.hpp"

IOperand const *(Create_Number::*Create_Number::func_arr[])(std::string const & value) const = {
	&Create_Number::createInt8,
	&Create_Number::createInt16,
	&Create_Number::createInt32,
	&Create_Number::createFloat,
	&Create_Number::createDouble
};

IOperand const * createOperand( eOperandType type, std::string const & value ) const
{
	IOperand *obj = func_arr[type](value);
	return obj;
}

IOperand const * Create::createInt8( std::string const & value ) const
{
	return (new Number<char>(value, Int8, 0));
}
