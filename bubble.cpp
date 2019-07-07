#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{

    int arrayy[10],assume;
    ifstream myfile1;

    myfile1.open ("first_ten.txt");


    clock_t start=clock();

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<(10-i-1); j++)
            if(arrayy[j]>arrayy[j+1])
            {
                assume=arrayy[j];
                arrayy[j]=arrayy[j+1];
                arrayy[j+1]=assume;
            }
    }
    clock_t endt=clock();
    double timelapse=double (endt-start)/CLOCKS_PER_SEC;
    cout<<"Taken time for 10 numbers:"<<timelapse;
    myfile1.close();

    ofstream output;
    output.open("bubble_10.txt");
    for(int l=0; l<10; l++)
    {
        output<<arrayy[l]<<endl;
    }

    output.close();






    int arrayy2[100],assume2;
    ifstream myfile2;

    myfile2.open ("first_hundread.txt");


    clock_t start2=clock();

    for(int i=0; i<100; i++)
    {
        for(int j=0; j<(100-i-1); j++)
            if(arrayy2[j]>arrayy2[j+1])
            {
                assume2=arrayy2[j];
                arrayy2[j]=arrayy2[j+1];
                arrayy2[j+1]=assume2;
            }
    }
    clock_t end2=clock();
    double time2=double (end2-start2)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 100 numbers:"<<time2;
    myfile2.close();

    ofstream output2;
    output2.open("bubble_100.txt");
    for(int l=0; l<100; l++)
    {
        output2<<arrayy2[l]<<endl;
    }

    output2.close();





    int arrayy3[1000],assume3;
    ifstream myfile3;

    myfile3.open ("first_thousand.txt");


    clock_t start3=clock();

    for(int i=0; i<1000; i++)
    {
        for(int j=0; j<(1000-i-1); j++)
            if(arrayy3[j]>arrayy3[j+1])
            {
                assume3=arrayy3[j];
                arrayy3[j]=arrayy3[j+1];
                arrayy3[j+1]=assume3;
            }
    }
    clock_t end3=clock();
    double time3=double (end3-start3)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 1K numbers:"<<time3;
    myfile3.close();

    ofstream output3;
    output3.open("bubble_1k.txt");
    for(int l=0; l<1000; l++)
    {
        output3<<arrayy3[l]<<endl;
    }

    output3.close();






    int arrayy4[10000],assume4;
    ifstream myfile4;

    myfile4.open ("first_10k.txt");


    clock_t start4=clock();

    for(int i=0; i<10000; i++)
    {
        for(int j=0; j<(10000-i-1); j++)
            if(arrayy4[j]>arrayy4[j+1])
            {
                assume4=arrayy4[j];
                arrayy4[j]=arrayy4[j+1];
                arrayy4[j+1]=assume4;
            }
    }
    clock_t end4=clock();
    double time4=double (end4-start4)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 10K numbers:"<<time4;
    myfile4.close();

    ofstream output4;
    output4.open("bubble_10k.txt");
    for(int l=0; l<10000; l++)
    {
        output4<<arrayy4[l]<<endl;
    }

    output4.close();







    int arrayy5[100000],assume5;
    ifstream myfile5;

    myfile5.open ("first_100k.txt");


    clock_t start5=clock();

    for(int i=0; i<100000; i++)
    {
        for(int j=0; j<(100000-i-1); j++)
            if(arrayy5[j]>arrayy5[j+1])
            {
                assume5=arrayy5[j];
                arrayy5[j]=arrayy5[j+1];
                arrayy5[j+1]=assume5;
            }
    }
    clock_t end5=clock();
    double time5=double (end5-start5)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 100K numbers:"<<time5;
    myfile5.close();

    ofstream output5;
    output5.open("bubble_100k.txt");
    for(int l=0; l<100000; l++)
    {
        output5<<arrayy5[l]<<endl;
    }

    output5.close();



    /*int arrayy6[1000000],assume6;
    ifstream myfile6;

    myfile6.open ("first_1m.txt");


    clock_t start6=clock();

    for(int i=0; i<1000000; i++)
    {
        for(int j=0; j<(1000000-i-1); j++)
            if(arrayy6[j]>arrayy6[j+1])
            {
                assume6=arrayy6[j];
                arrayy6[j]=arrayy6[j+1];
                arrayy6[j+1]=assume6;
            }
    }
    clock_t end6=clock();
    double time6=double (end6-start6)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 100K numbers:"<<time6;
    myfile6.close();

    ofstream output6;
    output6.open("bubble_1M.txt");
    for(int l=0; l<1000000; l++)
    {
        output6<<arrayy6[l]<<endl;
    }

    output6.close();*/



    return 0;

}


