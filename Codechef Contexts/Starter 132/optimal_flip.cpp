int n; 
        cin >> n; 
        int a[n]; 
        for(int i=0; i<n; i++){ 
            cin >> a[i]; 
        } 
        int ans=0,f=0,fm=0,m=0; 
        for(int i=n-1; i>=0; i--){ 
            if(a[i]%2==0){ 
                ans+=(n-i); 
                f=(n-i); 
                fm=0; 
            } 
            else{ 
                ans+=f; 
                fm++; 
                m=max(m,fm); 
            } 
        } 
        m++; 
        cout<<ans+((m/2)*(m-(m/2)))<<endl;