#include<iostream>
using namespace std;

int main()
{
    int size1,size2;

    cout<<"Enter the row and column size: ";
    cin>>size1>>size2;
    int **dynamic=new int*[size1];
    for(int m=0; m<size1; m++)
    {
        dynamic[m]=new int[size2];
    }
    cout<<"\nEnter the values of array:";

    for(int k=0; k<size1; k++)
    {
        for(int l=0; l<size2; l++)
        {
            cin>>dynamic[k][l];
        }
    }
    cout<<"\n2D array = ";
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            cout<<"\t"<<dynamic[i][j];
        }
    }
    cout<<endl;
    for(int m=0; m<size1; m++)
    {
        delete[] dynamic[m];
    }
    delete[] dynamic;
    return 0;
}


