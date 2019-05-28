
//This is a simple knight moving problem. User inputs the knights intial location and final location. Programme iterates the knights moving
//indexes.
#include<bits/stdc++.h>

using namespace std;
queue<int>q;
pair<int,int>per[102][102];
int m,n,t,p,c,r,s;
int x1,y2;
int des1,des2;
int arr[102][102];
int per1[102][102];
int per2[102];
bool visit[102][102];
int cost[102][102];
int dx[]={2,2,1,-1,-2,-2,-1,1};
int dy[]={1,-1,-2,-2,-1,1,2,2};
void print_path(int s1,int s2,int d1,int d2)
{

    if(s1==d1 && s2==d2)
       cout << s1 << " " << s2 << endl;
    // cout << "DDD" << endl;
    else
    {
        print_path(s1,s2,per[d1][d2].first,per[d1][d2].second);
       // cout << "FFFF" << endl;
        cout << d1 << " " << d2 << endl;

    }
}
void BFS()
{
    while(!q.empty())
    {
        int i=q.front();
        q.pop();
        int j=q.front();
        q.pop();
        for(int k=0;k<8;k++)
        {
            int x=i+dx[k];
            int y=j+dy[k];
            if(x>=0 && y>=0 && x<m && y<n)
            {
                if(arr[x][y]==0 && visit[x][y]==false)
                {
                    cost[x][y]=cost[i][j]+1;
                    visit[x][y]=true;
                    per[x][y].first=i;
                    per[x][y].second=j;
                    q.push(x);
                    q.push(y);
                  //  cout << x << " " << y << endl;
                }
            }
        }
       //   cout << endl;

        if(i==des1 && j==des2)
            break;
    }
    cout <<  "The knight can move in " << cost[des1][des2] <<" moves. The path is :" << endl;
}
int main()
{
    cout << "Enter Dimensions of Grid: ";
    cin >> m>> n;

    cout << "Enter Number of Trees: ";
    cin >> t;
    cout << "Enter position of Trees: ";


    for(int i=0;i<t;i++)
    {
        cin >> r >> s;
        arr[r][s]=1;
    }
    cout << "Enter Knight's Position: ";
    cin >> x1 >> y2;
  visit[x1][y2]=true;
  cout << "Enter Home Position: ";
  cin >> des1 >> des2;
  q.push(x1);
  q.push(y2);
   BFS();

   print_path(x1,y2,des1,des2);

}


