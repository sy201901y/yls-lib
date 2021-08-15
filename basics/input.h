#ifdef SYONE_LIB
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
