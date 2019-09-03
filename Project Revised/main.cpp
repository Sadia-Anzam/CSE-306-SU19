#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stack>
using namespace std;

void DFS(int vertex, int **graph, int source, int *visited)
{
    stack<int>dfs_stack;
    visited[source] = 1;
    dfs_stack.push(source);
    while(!dfs_stack.empty())
    {
        int top = dfs_stack.top();
        dfs_stack.pop();
        for(int i = 0; i<vertex; i++)
        {
            if(graph[top][i] ==1 && visited[i] == 0)
            {
                dfs_stack.push(i);
                visited[i] = 1;
            }
        }
        visited[top] =2;
    }
}
int main()
{
    ifstream Access;
    Access.open("Input.txt");
    char p;
    Access>>p;
    int data = p-64;
    int **Graph = new int *[data];
    for(int i=0; i<data; i++)
    {
        Graph[i] = new int [data];
    }

    for(int i=0; i<data; i++)
    {
        for(int j=0; j<data; j++)
        {
            Graph[i][j] = 0;
        }
    }
    char ch1, ch2;
    while(!Access.eof())
    {
        Access>>ch1;
        Access>>ch2;

        Graph[ch1-65][ch2-65] =1;
        Graph[ch2-65][ch1-65] =1;
    }
    cout<<"The Graph is : \n"<<endl;
    for(int i=0; i<data; i++)
    {
        for(int j=0; j<data; j++)
        {
            cout<<Graph[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;

    int *visited = new int[data];
    int counter=0;

    for(int i=0; i<data; i++)
    {
        if(visited[i] == 0)
        {
            DFS(data, Graph, i, visited);
            counter++;
        }
    }

    cout<<"Maximum sub-graph number is : "<<counter<<endl;
}
