#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Enter value for element at [" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
    for(int z=0 ; z<4 ; z++){
        for(int i=0 ; i<4 ; i++){
            cout<<matrix[z][i]<<" ";
        }
        cout<<endl;
    }
    for(int z=0 ; z<4 ; z++){
        vector<pair<int,int>> column(4);
        vector<pair<int,int>> row(4);
        for(int i=0 ; i<4 ; i++){
            column[i].first=i;
            column[i].second=matrix[i][z];
        }
        for(int i=0 ; i<4 ; i++){
            row[i].first=i;
            row[i].second=matrix[z][i];
        }
        int columnsum=0;
        int rowsum=0;
        for(int i=0 ; i<4 ; i++){
            columnsum+=column[i].second;
            rowsum+=row[i].second;
        }
        cout<<endl;
        cout<<"columsum="<<columnsum<<"rowsum="<<rowsum<<endl;
        vector<pair<int,int>>shortcolumn;
        vector<pair<int,int>>shortrow;
        for(int i=0 ; i<4 ; i++){
            if(column[i].second){
            shortcolumn.push_back(column[i]);
            } else {
                continue;
            }
        }
        for(int i=0 ; i<4 ; i++){
            if(row[i].second){
            shortrow.push_back(row[i]);
            } else {
                continue;
            }
        }
        if(columnsum&&rowsum){
            for(int i=0 ; i<columnsum ; i++){
                for(int j=0 ; j<rowsum ; j++){
                    matrix[shortcolumn[i].first][shortrow[j].first]=1;
                }
            }
        }
    }
    cout<<"The matrix is : "<<endl;
    for(int z=0 ; z<4 ; z++){
        for(int i=0 ; i<4 ; i++){
            cout<<matrix[z][i]<<" ";
        }
        cout<<endl;
    }
}