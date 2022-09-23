#ifdef SYONE_LIB
#ifndef CONSTANT_TYPE
#define CONSTANT_TYPE
namespace syone
{
	template<typename T,T x>struct Integral_constant{using ValueType=T;T value=x;}
	using True_type=Integral_constant<bool,true>;
	using False_type=Integral_constant<bool,false>;
	template<int x>struct Integer_wrapper=Integral_constant<int,x>;
}
#endif
#endif
