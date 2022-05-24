	// Your code here
    	sort(a,a+n);
    	sort(b,b+n);
    	int max=1;
    	int req=1;
    	
    	int i=1;
    	int j=0;
    	while(i<n && j<n){
    	    if(a[i]<=b[j]){
    	    max++;
    	    i++;
    	    }
    	    else{
    	    max--;
    	    j++;}
    	    
    	    if(max>req)
    	    req=max;
    	    
    	    
    	    
    	}
    	
    return req;	
