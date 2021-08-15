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
#ifdef INCLUDE_LIB
#include "algo/bfs.h"
#include "basics/input.h"
#endif
