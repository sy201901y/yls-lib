#ifndef BFS
#define BFS
#include<queue>

template<int n,int m,typename canmoveto,int N=10000,int M=10000>
class bfs
{public:
int a[N+9][M+9],mark[N+9][M+9];
struct point{int x;int y;};
int d[][2]={{0,1},{0,-1},{1,0},{-1,0}};
int cnt=1;
int paste(int x0,int y0)
{
	std::queue<point> q;
	q.push((point){x0,y0}),mark[x0][y0]=1;
	while(!q.empty())
	{
		point t=q.front();q.pop();
		int x=t.x,y=t.y;
		for(int i=0;i<=3;i++)
		{
			int x_=x+d[i][0],y_=y+d[i][1];
			if(x_<0 || x_>n+1 || y_<0 || y_>m+1)continue;
			if(mark[x_][y_]==0 && canmoveto(x,y,x_,y_))q.push((point){x_,y_}),mark[x_][y_]=1,cnt++;//cout<<x_<<' '<<y_<<endl;
		}
	}
	return cnt;
}
};
#endif
