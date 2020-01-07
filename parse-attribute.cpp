#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q;
    cin>>N>>Q;
    string temp;
    vector<string> attr;
    vector<string> querıes;
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        getline(cin,temp);
        attr.push_back(temp);
    }
    for(i=0;i<q;i++)
    {
        getline(cin,temp);
        querıes.push_back(temp);
    }

    map<string, string> m;
    vector<string> tag;

    for(i=0;i<n;i++)
    {
        temp=attr[i];
        attr.erase(remove(temp.begin(), temp.end(), '\"' ),temp.end());
        attr.erase(remove(temp.begin(), temp.end(), '>' ),temp.end());

        if(temp.substr(0,2)=="</")
        {
            tag.pop_back();
        }
        else
        {
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1,p1,v1;
            char ch;
            ss>>ch>>t1>>p1>>ch>>v1;
            string temp1="";
            if(tag.size()>0)
            {
                temp1=*tag.rbegin();
                temp1=temp1+"."+t1;
            }
            else
                temp1=t1;
            tag.push_back(temp1);
            m[*tag.rbegin()+"~"+p1]=v1;
            while(ss)
            {
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }

    }

for(i=0;i<q;i++){
    if (m.find(quer[i]) == m.end())
        cout << "Not Found!\n";
    else
        cout<<m[quer[i]]<<endl;
}
return 0;

}