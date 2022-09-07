class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        if(n == 0) 
        {
            return s;
        } 
        stack<string> st;
        string ans;
        
//         if(s[0]==" ") 
//         {
//             s[0]++;
//         }
//         else if(s[n-1]==" ")
//         {
//             s[n-1]--;
//         }
        
        for(int i=0;i<n;i++)
        {
            string temp; 
            if(s[i]==' ') continue; //skip spaces
            while(i<n && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            st.push(temp);
        }
        
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
            if(!st.empty()) 
                ans += " ";
        }
        return ans;
    }
};