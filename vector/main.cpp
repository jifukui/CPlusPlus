#include<iostream>
#include<vector>

using namespace std ;

int main()
{
    vector< vector<int> > matrix(2, vector<int>(3)) ;
    int m, n ;
    int r1=matrix.size();
    int r2=matrix[0].size();
    cout<<r1<<","<<r2<<endl;
    matrix[0][0]=1;   
    matrix[0][1]=2;
    matrix[0][2]=3;
    matrix[1][0]=4;
    matrix[1][1]=5;
    matrix[1][2]=6;    



    for(i;i<r1;i++)
    {
            
        if(matrix[i][0]<=target&&matrix[i][r2]>=target)
        {
            int mid,height,low;
            low=0;
            height=r2;
            while(low<=height)
            {
                mid=(low+height)/2;
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
                    count<<"success"<<endl;
                }           
            }
            count<<"error"<<endl;
        }
    }
    count<<"error"<<endl;
    return 0;
}