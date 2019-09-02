#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
int c=0;
void DFS(int vertex,int **graph,int source, int *explored)
{
    stack<int> dfs;
    explored[source]=1;
    dfs.push(source);
    while(!dfs.empty())
    {
        int top=dfs.top();
        dfs.pop();
        for(int i=0;i<vertex;i++)
        {
            if(graph[top][i]==1)
            {
                if (explored[i]==0)
                {
                    dfs.push(i);
                    explored[i]=1;

                }
            }
        }
        explored[top]=2;
    }
    c++;
}
void Print(int vertex,int *explored)
{
    for(int i=0;i<vertex;i++)
    {
        if(explored[i]==2)
        {
            cout<<"--"<<i;
            explored[i]=3;

        }

    }
    cout<<endl;
}

int main()
{
    int vertex,edge,i,j,start;
    ifstream Access;
    Access.open("Input.txt");
    Access>>vertex>>edge;
    cout<<vertex<<" "<<edge<<endl;

    int **graph;
    graph=new int *[vertex];
    for(i=0;i<vertex;i++)
    {
        graph[i]=new int[vertex];
    }
    cout<<"Graph : "<<endl;
    for(i=0;i<vertex;i++)
    {
        for(j=0;j<vertex;j++)
        {
            Access>>graph[i][j];
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    int *explored=new int [vertex];
    for(i=0;i<vertex;i++)
    {
        if(explored[i]==0)
        {
            DFS(vertex,graph,i,explored);
            //cout<<"Connected Components Are : ";
            //Print(vertex,explored);

        }
    }
    cout<<"Connected Components number : "<<c<<endl;

    return 0;
}

