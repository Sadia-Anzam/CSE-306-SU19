#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int row,column;
    ifstream input;
    input.open("input.txt");
    input>>row>>column;



    int **arr;
    arr=new int *[row];
    for (int i=0; i<row; i++)
    {
        arr[i]=new int [column];
    }

    for(int j=0; j<row; j++)
    {
        for(int k=0; k<column; k++)
        {
            input>>arr[j][k];
        }
    }

    ofstream output;
    output.open("output.txt");
    output<<endl<<"Output : \n";
    for(int k=0; k<column; k++)
    {
        for(int j=0; j<row; j++)
        {
            output<<" "<<arr[j][k];


        }
        output<<endl;
    }
    return 0;
}
