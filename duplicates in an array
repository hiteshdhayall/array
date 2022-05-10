class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        vector<int> v;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1])
            v.push_back(arr[i]);
            while(arr[i]==arr[i+1])
            i++;
        }
        if(v.empty())
        v.push_back(-1);
        
        return v;
    }
};
