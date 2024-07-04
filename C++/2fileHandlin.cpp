#include<iostream>
#include<cstddef>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout1, fout2;
    fout1.open("/Users/simrankri1734gmail.com/Desktop/iNeuron Class/c++folder/STL/abc.txt");   //append mode open 
    
    if(!fout1 && !fout2)
    {
        cout<<"File not created"<<endl;
    }
    else
    {
        string line;
        cout<<"File created successfully"<<endl;
       
       cout<<"Enter your data"<<endl;

       while(fout1)
       {
        getline(cin,line);

        if(line == "-1")
        break;
        
        fout1<<line;
        fout1<<"\n";
       }
}
fout1.close();   //fore file closing
 return 0;
}