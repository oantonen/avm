#ifndef CREATE_H
# define CREATE_H

#include <iostream>
#include "Interface.hpp"

class Create_Number
{
public:
	Create_Number();
	Create_Number(const & Create_Number);
	const Create_Number& operator=(const Create_Number&);
	IOperand const * createOperand( eOperandType type, std::string const & value ) const;
	~Create_Number();

private:
	IOperand const * createInt8( std::string const & value ) const;
	IOperand const * createInt16( std::string const & value ) const;
	IOperand const * createInt32( std::string const & value ) const;
	IOperand const * createFloat( std::string const & value ) const;
	IOperand const * createDouble( std::string const & value ) const;

	static IOperand const *(Create::*func_arr[])(std::string const & value);

};

#endif