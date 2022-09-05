class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
//         stack<int> st;
//         unordered_map<int,int> ans;
//         vector<int> out;
//         st.push(nums2[0]);
        
//         for(int i=0;i<nums2.size();i++)
//         {
//             if(nums2[i]<nums2[i+1])
//             {
//                 ans[nums2[i]] = nums2[i+1];
//                 st.pop();
//                 st.push(nums2[i+1]);
//             }
//             else{
//                 st.push(nums2[i+1]);
//             }
//         }
        
//         for (int num : nums1) {
//             if (ans.count(num))
//                 out.push_back(ans[num]);
//             else
//                 out.push_back(-1);
//         }
//         return out;
         vector<int> res(nums1.size(), -1); //to be returned, initialize it with -1.
         stack<int> st;
         unordered_map<int, int> umap;
        
        for(int i=0; i<nums2.size(); i++)
        {
            int element = nums2[i];
            
            while(!st.empty() && element > st.top())
            {
                //NGE of st.top() is element
				
                umap[st.top()] = element;
                st.pop();
            }
            
            st.push(element);
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
            int ele = nums1[i];
            
            if(umap.find(ele) != umap.end())
            {
                int nge = umap[ele];
                res[i] = nge; //push NGE of desired element
            }
                
        }
        
        return res;
    }
};