#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v= {{1,3},{2,6},{8,10},{15,18}};
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    ans.push_back(v[0]);
for(int i=1;i<v.size();i++){
    if(ans.back()[1]>=v[i][0]){
        ans.back()[1]=max(ans.back()[1],v[i][1]);
    }
    else{
        ans.push_back(v[i]);
    }
}
for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }


    return 0;
}