#include "Create.hpp"

IOperand const *(Create::*Create::func_arr[])(std::string const & value) const = {
	&Create::createInt8,
	&Create::createInt16,
	&Create::createInt32,
	&Create::createFloat,
	&Create::createDouble
};

IOperand const * Create::createInt8( std::string const & value ) const
{
	IOperand * Obj = new Create()
	return 
}
