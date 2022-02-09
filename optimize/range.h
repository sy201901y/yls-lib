#ifdef SYONE_LIB
#ifndef RANGE
#define RANGE
#ifndef ONLINE_JUDGE
#include <../traits/issame.h>
#else
namespace syone
{
	struct Truetype{bool value=true;};
	struct Falsetype{bool value=false;};
	template<typename T,typename U>struct issame:public Falsetype{};
	template<typename T>struct issame<T,T>:public Truetype{};
}
#endif
#include <vector>
#include <list>
#include<type_traits>
namespace syone
{
	template<typename Cont=std::vector<int> >
	Cont range(int max)
	{
		Cont ret=new Cont();
		for(int i=1;i<max;i++)ret.push_back(i);
		return ret;
	}
	template<typename Cont=std::vector<int>,typename numberlist=std::vector<int>,bool=issame<Cont,numberlist>::value>
	class range_helper;
	template<typename Cont,typename numberlist>
	class range_helper<Cont,numberlist,1>
	{
		Cont range(numberlist nums)
		{
			Cont ret=new Cont();
			while(!nums.empty())
			{
				int Num=nums[nums.size()-1];
				ret.push_front(Num);
			}
			return ret;
		}
	};
	template<typename Cont,typename numberlist>
	class range_helper<Cont,numberlist,0>
	{
		Cont range(numberlist nums){return nums;}
	};
	template<typename Cont=std::vector<int>,typename numberlist=std::vector<int> >
	Cont range_with_numbers(numberlist nums)
	{
		return range_helper<Cont,numberlist>::range(nums);
	}
}
#endif
#endif
