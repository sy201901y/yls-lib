#ifdef SYONE_LIB
#ifndef TYPE_TRAITS_H
#define TYPE_TRAITS_H
#include "constant_type.h"
using size_t=unsigned;
namespace syone
{
  //is_array
  template<typename T>class is_array:false_type{};
  template<typename T>class is_array<T[]>:true_type{};
  template<typename T,size_t N>class is_array<T[N]>:true_type{};
}
#endif
#endif
