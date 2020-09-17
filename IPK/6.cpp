#include <bits/stdc++.h>
#include<cstring>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {

    vector<char> v1;
    vector<char> v2;
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    string fres="NO";
    for(int i=0;i<s1.length();i++){
        if(m1.count(s1[i])==0){
            m1[s1[i]]=1;
            v1.push_back(s1[i]);
        }

    }
    for(int i=0;i<s2.length();i++){
        if(m2.count(s2[i])==0){
            m2[s2[i]]=1;
            v2.push_back(s2[i]);
        }

    }

    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                fres="YES";
                return fres;
            }
        }
    }

    return fres;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
