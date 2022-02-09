#ifdef SYONE_LIB
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define int long long
#define pq<T> priority_queue<T,vector<T>,less<T> >
#define qp<T> priority_queue<T,vector<T>,greater<T> >
#define Madoka(x) memset(x,0,sizeof(x))
#define Madmad(x,y) memcpy(x,y,sizeof(x))
#define Madoka_neg_inf(x) memset(x,128,sizeof(x))
#define Madoka_neg_one(x) memset(x,255,sizeof(x))
#define Madoka_inf(x) memset(x,127,sizeof(x))
#define Madoka_add_inf(x) memset(x,63,sizeof(x))
#define pos_inf 0x7fffffff
#define pos_set_inf 0x7f7f7f7f
#define add_inf 0x3fffffff
#define add_set_inf 0x3f3f3f3f
#define neg_inf 0x80000000
#define neg_set_inf 0x80808080
#define For(i,l,r) for(int i=l;i<=r;i++)
#define roF(i,l,r) for(int i=r;i>=l;i--)
#ifndef ONLINE_JUDGE
#include "basics/input.h"
#else
#ifndef READ
#define READ
#include<cstdio>
#include<cctype>
namespace syone{
namespace read
{
	template<typename T>T getIntegral()
	{
		int X=0; bool flag=1; char ch=getchar();
		while(ch<'0'||ch>'9') {if(ch=='-') flag=0; ch=getchar();}
		while(ch>='0'&&ch<='9') {X=(X<<1)+(X<<3)+ch-'0'; ch=getchar();}
		if(flag) return X;
		return -X;
	}
	char getChar()
	{
		char ch;
		do{ch=getchar();}while(ch<=' ');
		return ch;
	}
}
namespace readwithfread
{
#define getchar()(p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
	char buf[1<<21],*p1=buf,*p2=buf;
	template<typename T>T getIntegral()
	{
		int X=0; bool flag=1; char ch=getchar();
		while(ch<'0'||ch>'9') {if(ch=='-') flag=0; ch=getchar();}
		while(ch>='0'&&ch<='9') {X=(X<<1)+(X<<3)+ch-'0'; ch=getchar();}
		if(flag) return X;
		return -X;
	}
	char getChar()
	{
		char ch;
		do{ch=getchar();}while(ch<=' ');
		return ch;
	}
#undef getchar()
}
}
#endif
#endif
#endif
#endif
