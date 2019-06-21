#include<iostream>
using namespace std;

int main()
{
    int array_two[3][2];
    int j,i,k,l;
    cout<<"Enter the values of array:";

    for(k=0; k<3; k++)
    {
        for(l=0; l<2; l++)
        {
            cin>>array_two[k][l];
        }
    }
    cout<<"\n2D array = ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<"\t"<<array_two[i][j];
        }
    }
    cout<<endl;
    return 0;
}

