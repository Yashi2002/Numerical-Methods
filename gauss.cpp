#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,j;
    float a[100][101];
    cout<<"Enter the number of unknown variables :";
    cin>>n;
    cout <<"Enter the coefficients of varaible and argument in row wise :"<<endl;
    for (int i=0;i<n;i++)
        {for(int j=0;j<=n;j++)
            cin>>a[i][j];
        }

    cout<<"The given credential in matrix form is given below "<<endl;
    for (int i=0;i<n;i++)
            {cout<<endl;
        for(int j=0;j<=n;j++){
            cout<<a[i][j]<<"\t";
            }
            }   
    
    for(j=0;j<n;j++)
    {
        if(abs(a[j][j])<0.00005){
            cout<<"Error"<<endl;
            return 1;
        }
       for(i=0;i<n;i++)
       {
           if(i!=j){
                float temp;
                temp=a[i][j];
               for(int k=0;k<(n+1);k++)
               {
                   a[i][k]=a[i][k]-((temp*a[j][k])/a[j][j]);
               }
           }
       }
    }
    cout<<"\nThe solutions are given below :"<<endl;
    float x[100];
    for(i=0;i<n;i++)
    {
        x[i]=((a[i][n])/a[i][i]);
        cout<<x[i]<<endl;
    }
}