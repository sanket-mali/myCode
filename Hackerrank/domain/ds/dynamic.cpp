#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,lastanswer=0,check,x,y,temp,temp1,size,k;
    
    cin>>n;
    cin>>q;
	int j[n];
    for(int i=0;i<n;i++)
        j[i]=0;
    int *point;
	point=new int[n];
    //cout<<n<<" "<<q;
    for(int i=0;i<q;i++)
    {
        cin>>check;
        cin>>x;
        cin>>y;
        temp=(x^lastanswer)%n;
	//cout<<j[0]<<endl;
        if(check==1)
        {
		i=j[temp]++;
		cout<<i<<endl;
            //point[temp][j[temp]++]=y;
		
        }
        else
        {
            //size=sizeof(point[temp])/sizeof(point[0][0]);
            //temp1=y%size;
            //lastanswer=point[temp][temp1];
            //cout<<lastanswer<<endl;
        }
    }
    return 0;
}

