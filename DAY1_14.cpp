class Solution {
public:
   
    int maxVowels(string s, int k) {
        int arr[26]={};
        int ans=0;
        for(int i=0;s[i];i++)
        {
            if(i<k)
            {
                //if(s[i]=='a' || s[i]=='e' ||s[i]=='o' || s[i]=='i' || s[i]=='u')
                arr[s[i]-'a']++;
            }
            else
            {
                
                arr[s[i]-'a']++;
               arr[s[i-k]-'a']--;
            }
            int sum=0;
        sum+=arr['a'-'a'];
        sum+=arr['e'-'a'];
        sum+=arr['i'-'a'];
        sum+=arr['o'-'a'];
        sum+=arr['u'-'a'];
            ans=max(ans,sum);
        }
        return ans;
    }
};
