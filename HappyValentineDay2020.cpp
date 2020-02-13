#include<bits/stdc++.h>
#include "windows.h"
#include <stdlib.h>
using namespace std;
int main(){
    while(1){
        string st="_____Happy Valentine Day 2020____ ";
        int i=0;
        string st2="",st3="";
        int found=0;
        while(st[i]!='\0'){
            st2="";
            for(int p=0;p<i;p++){
                st2+=" ";
            }
            st2+=st[i];
            int j=0;
            while(j<8){
                if(i>0){
                    if(found==0){
                        st3+=st[i-1];
                    }
                }
                if(j==0){
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    found=1;
                }
                if(j==1){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                }
                if(j==2){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                }
                if(j==3){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                }
                if(j==4){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                }
                if(j==5){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                }
                if(j==6){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    cout<<"\n\t\t\t\t";
                }
                if(j==7){
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t";
                    cout<<"\n\t\t\t\t"<<st2;
                    found=0;
                }

                cout<<"\n\t\t\t\t"<<st3<<endl;
                //Sleep(1);
                if(j==7 && st[i+1]=='\0'){

                }else{
                    system("CLS");
                }
                j++;

            }
            i++;
        }
        string st4="                ____Ovi_Baidya(ovibaidya72)____";
        int m=0;
        cout<<"\n\t\t\t\t";
        while(st4[m]!='\0'){

            cout<<st4[m];
            Sleep(500);
            m++;
        }
    }
    return 0;
}
