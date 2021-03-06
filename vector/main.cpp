#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    vector< vector<int> > matrix(2, vector<int>(3)) ;
    int m, n ;
    int r1=matrix.size();
    int r2=matrix[0].size()-1;
    int i=0;
    cout<<r1<<","<<r2<<endl;
    matrix[0][0]=1;   
    matrix[0][1]=2;
    matrix[0][2]=3;
    matrix[1][0]=4;
    matrix[1][1]=5;
    matrix[1][2]=6;    
    int target=4;


    for(i=0;i<r1;i++)
    {
        cout<< matrix[i][0]<<","<<matrix[i][r2]<<","<<target<<endl;
        if(matrix[i][0]<=target&&matrix[i][r2]>=target)
        {
            int mid,height,low;
            low=0;
            height=r2;
            while(low<=height)
            {
                mid=(low+height)/2;
                cout<< mid<<","<<low<<","<<height<<endl;
                if(matrix[i][mid]<target)
                {
                    low=mid+1;
                }
                else if(matrix[i][mid]>target)
                {
                    height=mid-1;
                }
                else
                {
                    cout<<"success"<<endl;
                    return 0;
                }           
            }
            cout<<"error1"<<endl;
            break;
        }
    }
    cout<<"error2"<<endl;
    return 0;
}