class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    { 
        vector<int> v;
        // Your code here
        int i=0,j=0;
        long long sum=0;
        
        for( i=0;i<n;i++){
            if(sum==s)
            break;
            sum+=a[i];
            if(sum>s){
                while(sum>s){
                    sum-=a[j];
                    j++;
                }
            
            }
            
           
            
        }
         if(sum==s){
                 v.push_back(j+1);
                v.push_back(i);
               
            
            }
            else
            v.push_back(-1);
            
        return v;
    }
};

