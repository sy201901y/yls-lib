#ifdef SYONE_LIB
#ifndef CONSTANT_TYPE
#define CONSTANT_TYPE
namespace syone
{
	template<typename T,T x>struct Value{using ValueType=T;T value=x;}
	using Truetype=Value<bool,true>;
	using Falsetype=Value<bool,false>;
}
#endif
#endif
