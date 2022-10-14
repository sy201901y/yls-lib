#ifdef SYONE_LIB
#ifndef READ
#define READ
#include<cstdio>
#include<cctype>
namespace syone{
	static char buf[1000000],*p1=buf,*p2=buf,obuf[1000000],*p3=obuf;
	#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
	#define putchar(x) (p3-obuf<1000000)?(*p3++=x):(fwrite(obuf,p3-obuf,1,stdout),p3=obuf,*p3++=x)
	#define cin BAD_INPUT_WAY
	#define cout BAD_OUTPUT_WAY
	template<typename item=int>inline void read( item ref x){x=0; int f=1; char c=getchar();while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();x*=f;}
	template<typename item=int,typename... items>inline void read(item ref x,items ref ... args){read(x);read(args...);}
	static char cc[20];
	template<typename item=int>inline void print_helper( item x){  int len=0;if(x<0)x=-x,putchar('-');while(x)cc[len++]=x%10+'0',x/=10;while(len--)putchar(cc[len]);}
	template<typename item=int>inline void print( item x){(x)?(print_helper(x),0):(putchar('0'));}
	template<typename item=int,typename... items>inline void print(item x,items ... args){print(x);print(args...);}
	struct IO_HELPER{~IO_HELPER(){fwrite(obuf,p3-obuf,1,stdout);}}some_io;
}
#endif
#endif
