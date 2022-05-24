 int *findTwoElement(int *arr, int n) {
        // code here
        int a[n+1]={0};
        int twice,missing;
        for(int i=0;i<n;i++)
        a[arr[i]]++;
        
        for(int i=1;i<n+1;i++)
        {
            if(a[i]==0)
            missing=a[i];
            
            if(a[i]==2)
            twice=a[i];
        }
        
        int ans[2];
        ans[0]=twice;
        ans[1]=missing;
        
        return ans;
        
        
