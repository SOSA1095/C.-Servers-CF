#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int servers,task,time[100],start,numbers,totaltime,aux=0,servers2;
    cin >> servers >> task;
    servers2=servers;
    memset(time,0,sizeof(time));
    for(int iA=0; iA<task;iA++){
        cin >>start >> numbers >> totaltime;
        for(int iB=0;iB<servers2;iB++){
            if(time[iB]<=start && time[iB]!=0){
                time[iB]=0;
                servers++;
            }
        }
        //cout << servers << endl;
        if(numbers<=servers){
            for(int iB=0; iB<servers2 && numbers!=0;iB++){
                if(time[iB]==0){
                    numbers--;
                    servers--;
                    time[iB]=start+totaltime;
                    aux+=iB+1;
                }
            }
            cout << aux << endl;
            aux =0;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
