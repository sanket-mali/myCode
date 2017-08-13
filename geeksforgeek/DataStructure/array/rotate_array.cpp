//@Sanket Kumar Mali 
//Data structure practice geeks for geeks
//array
#include<iostream>
using namespace std;
void print(int a[],int n);
//rotate arr a of size n by d space
//straight approach shift onece each element d time
//[1, 2, 3, 4, 5] rotate by d=2 place
//[2, 3, 4, 5, 1]  ==>   [3, 4, 5, 1, 2]
//time complexity O(n*d)
//space complexity O(1)
void rotate1(int a[],int n,int d)
{
    int temp;
    for(int j=1;j<=d;j++)//loop run d time and each time array will shift to left by one place
    {
        temp=a[0];//store first element before shifting
        for(int i=0;i<n;i++)
        {
            a[i]=a[i+1];//shift the array to left
        }
        a[n-1]=temp;//add the firts element at the end of the array 
    }
    
}
//second approach using a second array 
//store the first d element and add it at the end of the array
//[1, 2, 3, 4, 5] rotate by d=2
//new array [1, 2] and add it at the end of  [3, 4, 5]
//time complexity O(n)
//space complexity O(d)
void rotate2(int a[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(int i=0;i<=n-d;i++)
    {
        a[i]=a[i+2];
    }
    int j=0;
    for(int i=n-d;i<n;i++)
    {
        a[i]=temp[j];
        j++;
    }
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    {
        return gcd(b,a%b);
    }
}
//devide the array in gcd(d,n) number of set
//In each set store first element shift left add the first element at proper place
void rotate3(int a[],int n,int d)
{
    int j,k,temp;
    for(int i=0;i<gcd(n,d);i++)
    {
        temp=a[i];
        j=i;
        while(1)
        {
            k=j+d;
            if(k>=n)//in case all the element shift
            k=k-n;
            if(k==i)
            break;
            a[j]=a[k];
            j=k;
        }
        a[j]=temp;
    }
}
void reverse(int a[],int n)
{
    int temp,i=0,j=n-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
void rotate4(int a[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    reverse(a,n);
    reverse(temp,d);
    for(int i=n-1;i>=d;i--)
    {
        a[i]=a[i-d];
    }
    int j=0;
    for(int i=0;i<d;i++)
    {
        a[i]=temp[j];
        j++;
    }
    reverse(a,n);
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n,d;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array element:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"shift by:";
    cin>>d;
    cout<<"original: ";
    print(arr,n);
    rotate1(arr,n,d);
    cout<<"after rotation1: ";
    print(arr,n);
    cout<<"after rotation2: ";
    rotate2(arr,n,d);
    print(arr,n);
    cout<<"after rotation3: ";
    rotate3(arr,n,d);
    print(arr,n);
    rotate4(arr,n,d);
    cout<<"after rotation4: ";
    print(arr,n);
    return 0;
}