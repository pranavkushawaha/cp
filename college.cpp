#include<bits/stdc++.h>
using namespace std;

int main(){
    int c,n;
    cin>>c>>n;
    unordered_map<string, int>capacity;
    vector<vector<string>>student_detail;
    priority_queue<pair<double,int>>pq;
    for(int i=1; i<=c; i++){
        int t;cin>>t;
        string st = "C-";
        st += to_string(i);
        capacity[st]=t;
    }

    for(int j=0; j<n; j++){
        string s;
        cin>>s;
        vector<string> student;
        string word="";
        for (auto x : s)
        {
            if (x == ',')
            {
                student.push_back(word);
                word = "";
            }
            else {
                word = word + x;
            }
        }
        student.push_back(word);
        student_detail.push_back(student);
    }

    for(int i=0; i<n; i++){
        double temp= stod(student_detail[i][1]);
        pq.push({temp,-i});
    }
    while(!pq.empty()){
        pair<double,int> tp= pq.top();
        pq.pop();
        tp.second = abs(tp.second);
        string res="";
        res+=student_detail[tp.second][0];
        res+=" ";
        if(capacity[student_detail[tp.second][2]]>0){
            cout<<res;
            cout<<student_detail[tp.second][2]<<endl;
            capacity[student_detail[tp.second][2]]--;
        }else if(capacity[student_detail[tp.second][3]]>0){
            cout<<res;
            cout<<student_detail[tp.second][3]<<endl;
            capacity[student_detail[tp.second][3]]--;
        }else if(capacity[student_detail[tp.second][4]]>0){
            cout<<res;
            cout<<student_detail[tp.second][4]<<endl;
            capacity[student_detail[tp.second][4]]--;
        }
    }

    return 0;
}

