#ifdef SYONE_LIB
#ifndef IS_SAME
#define IS_SAME
#include "constant_type.h"
namespace syone
{
	template<typename T,typename U>struct issame:public Falsetype{};
	template<typename T>struct issame<T,T>:public Truetype{};
}
#endif
#endif
