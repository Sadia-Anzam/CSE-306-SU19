#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{

    int arrayy[10],assume;
    ifstream file1;

    file1.open ("first_ten.txt");


    clock_t start=clock();

    for (int i=1; i<10; i++)
    {
        assume=arrayy[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy[j]>assume)
        {
            arrayy[j+1]=arrayy[j];
            j=j-1;
        }
        arrayy[j+1]=assume;
    }
    clock_t endt=clock();
    double timelapse=double (endt-start)/CLOCKS_PER_SEC;
    cout<<"Taken time for 10 numbers:"<<timelapse;
    file1.close();

    ofstream ioutput;
    ioutput.open("insertion_10.txt");
    for(int l=0; l<10; l++)
    {
        ioutput<<arrayy[l]<<endl;
    }

    ioutput.close();






    int arrayy2[100],assume2;
    ifstream file2;

    file2.open ("first_hundread.txt");


    clock_t start2=clock();

    for (int i=1; i<100; i++)
    {
        assume2=arrayy2[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy2[j]>assume2)
        {
            arrayy2[j+1]=arrayy2[j];
            j=j-1;
        }
        arrayy2[j+1]=assume2;
    }
    clock_t end2=clock();
    double time2=double (end2-start2)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 100 numbers:"<<time2;
    file2.close();

    ofstream ioutput2;
    ioutput2.open("insertion_100.txt");
    for(int l=0; l<100; l++)
    {
        ioutput2<<arrayy2[l]<<endl;
    }

    ioutput2.close();





    int arrayy3[1000],assume3;
    ifstream file3;

    file3.open ("first_thousand.txt");


    clock_t start3=clock();

    for (int i=1; i<1000; i++)
    {
        assume3=arrayy3[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy3[j]>assume3)
        {
            arrayy3[j+1]=arrayy3[j];
            j=j-1;
        }
        arrayy3[j+1]=assume3;
    }
    clock_t end3=clock();
    double time3=double (end3-start3)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 1K numbers:"<<time3;
    file3.close();

    ofstream ioutput3;
    ioutput3.open("insertion_1k.txt");
    for(int l=0; l<1000; l++)
    {
        ioutput3<<arrayy3[l]<<endl;
    }

    ioutput3.close();






    int arrayy4[10000],assume4;
    ifstream file4;

    file4.open ("first_10k.txt");


    clock_t start4=clock();

    for (int i=1; i<10000; i++)
    {
        assume4=arrayy4[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy4[j]>assume4)
        {
            arrayy4[j+1]=arrayy4[j];
            j=j-1;
        }
        arrayy4[j+1]=assume4;
    }
    clock_t end4=clock();
    double time4=double (end4-start4)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 10K numbers:"<<time4;
    file4.close();

    ofstream ioutput4;
    ioutput4.open("insertion_10k.txt");
    for(int l=0; l<10000; l++)
    {
        ioutput4<<arrayy4[l]<<endl;
    }

    ioutput4.close();







    int arrayy5[100000],assume5;
    ifstream file5;

    file5.open ("first_100k.txt");


    clock_t start5=clock();

    for (int i=1; i<100000; i++)
    {
        assume5=arrayy5[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy5[j]>assume5)
        {
            arrayy5[j+1]=arrayy5[j];
            j=j-1;
        }
        arrayy5[j+1]=assume5;
    }
    clock_t end5=clock();
    double time5=double (end5-start5)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 100K numbers:"<<time5;
    file5.close();

    ofstream ioutput5;
    ioutput5.open("insertion_100k.txt");
    for(int l=0; l<100000; l++)
    {
        ioutput5<<arrayy5[l]<<endl;
    }

    ioutput5.close();




    /*int arrayy6[1000000],assume6;
    ifstream file6;

    file6.open ("first_1m.txt");


    clock_t start6=clock();

      for (int i=1; i<1000000; i++)
    {
        assume6=arrayy6[i];
        int j;
        j=i-1;
        while(j>=0&&arrayy6[j]>assume6)
        {
            arrayy6[j+1]=arrayy6[j];
            j=j-1;
        }
        arrayy6[j+1]=assume6;
    }
    clock_t end6=clock();
    double time6=double (end6-start6)/CLOCKS_PER_SEC;
    cout<<endl<<"Taken time for 1M numbers:"<<time6;
    file6.close();

    ofstream ioutput6;
    ioutput6.open("insertion_1m.txt");
    for(int l=0; l<100000; l++)
    {
        ioutput6<<arrayy6[l]<<endl;
    }

    ioutput6.close();*/



    return 0;

}


