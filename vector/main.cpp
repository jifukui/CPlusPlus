#include<iostream>
#include<vector>

using namespace std ;

int main()
{
        vector< vector<int> > b(10, vector<int>(5)) ;
        //全部输出
        int m, n ;
        int r1=b.size();
        int r2=b[0].size();
        cout<<r1<<","<<r2<<endl;
        for(m=0; m<b.size(); m++)           //b.size()获取行向量的大小
        {
            for(n=0; n<b[m].size(); n++)    //获取向量中具体每个向量的大小
                cout<<b[m][n]<<" " ;
            cout<<"\n" ;
        }

        return 0;
}