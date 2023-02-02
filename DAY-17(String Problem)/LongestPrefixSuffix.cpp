class Solution{
  public:		
	int lps(string s) {
	    
	     string ans="";

     vector<int>v(s.size(),0);

     int i=0,j=1;

     while(j<s.size()){

         if(s[i]==s[j]){

             v[j]=i+1;

             i++;

             j++;

         }

         else if(i){

             i=v[i-1];

         }

         else{

             j++;

         }

     }

     ans=s.substr(0,i);

     return ans.size();

 }

};