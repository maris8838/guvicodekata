  #include<iostream>
        using namespace std;
        int main(){
            int n, start, count, total=0;
            cin>>n>>start>>count;
                for( int i = 0; i<n; i++){
                    total = total + start;
                    start = start + count;
                    }
            cout<<total;
            return 0;
        }
