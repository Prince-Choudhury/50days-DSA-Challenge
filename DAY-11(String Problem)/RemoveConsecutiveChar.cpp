class Solution{
    public:
    string removeConsecutiveChar(string S)
    {
        
         for(int i=1;i<S.size();i++)

        {

            while(S[i]==S[i-1])

                S.erase(S.begin()+i-1);

        }

        return S;
    }
};

.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveChar(s)<<endl;
    }
}
