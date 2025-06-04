#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

//	REINTERPRET CASTING is a type of C++ conversion
//	which treats a block of memory as a different
//	type without modifying the actual bit pattern

//	Reinterprets memory without converting values

//	It is a compile-time converstion, and does
//	not perform any runtime checks or data conversion

//	Hence, it is used for:
//		- Converting between unrelated pointer types
//		- Systems programming

//	Cons:
//		- No type safety (compiler won't stop you
//		  from doing something dangerous)
//		- Not for high-level application logic

