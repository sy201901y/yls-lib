#ifdef SYONE_LIB
#ifndef TYPE_TRAITS_H
#define TYPE_TRAITS_H
#include "constant_type.h"
using size_t=unsigned;
namespace syone
{
	//is_array
	template<typename T>class IsArray:FalseType{};
	template<typename T>class IsArray<T[]>:Truetype{};
	template<typename T,size_t N>class IsArray<T[N]>:TrueType{};
  
  
}
#endif
#endif
