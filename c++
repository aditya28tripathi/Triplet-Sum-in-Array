  bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        
        int ans =0;
        for(int i =0 ;i<n+2;i++){
            int l = i+1;
            int e = n-1;
            
            
            while(l<e){
                if(A[i] + A[l] + A[e] == X){
                    ans = 1;
                    break;
                }
                
                else if(A[i] + A[l] + A[e] < X)
                    l++;
                    
                    else
                    e--;
                }
                
                if(ans==1)
                break;
            }
            
            return ans;
        
    }

};
