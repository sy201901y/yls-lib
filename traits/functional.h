#ifdef SYONE_LIB
#ifndef FUNCTIONAL
#define FUNCTIONAL
namespace syone
{
	template<typename R,typename Args...>
	using function_t=R(*)(Args...);
}
#endif
#endif
