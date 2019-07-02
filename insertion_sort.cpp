#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int size1,i,j,assume,k,l;
    ifstream input;
    input.open("input.txt");
    input>>size1;
    int *arrayy=new int [size1];
    for(int k=0; k<size1; k++)
    {
        input>>arrayy[k];
    }

    for (i=1; i<size1; i++)
    {
        assume=arrayy[i];
        j=i-1;
        while(j>=0&&arrayy[j]>assume)
        {
            arrayy[j+1]=arrayy[j];
            j=j-1;
        }
        arrayy[j+1]=assume;
    }

    input.close();


    ofstream output;
    output.open("output.txt");
    for(l=0; l<size1; l++)
    {
        output<<" "<<arrayy[l];
    }

    output.close();


    delete[]arrayy;



    return 0;


}

