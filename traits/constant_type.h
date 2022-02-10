#ifdef SYONE_LIB
#ifndef CONSTANT_TYPE
#define CONSTANT_TYPE
namespace syone
{
	template<typename T,T x>struct Value{T val=x;}
	using Truetype=Value<bool,true>;
	using Falsetype=Value<bool,false>;
}
#endif
#endif
