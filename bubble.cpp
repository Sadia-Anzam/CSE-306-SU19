#include<iostream>
#include<fstream>
using namespace std;
int main(){
     int size1,i,j,assume,k,l;
    ifstream input;
    input.open("input.txt");
    input>>size1;
    int *arrayy=new int [size1];
    for(int k=0;k<size1;k++){
        input>>arrayy[k];
    }

     for(i=0; i<size1; i++)
    {
        for(j=0; j<(size1-i-1); j++)
            if(arrayy[j]>arrayy[j+1])
            {
                assume=arrayy[j];
                arrayy[j]=arrayy[j+1];
                arrayy[j+1]=assume;
            }
    }

    ofstream output;
    output.open("output.txt");
    for(l=0;l<size1;l++){
        output<<" "<<arrayy[l];
    }


    delete[]arrayy;



    return 0;


}
