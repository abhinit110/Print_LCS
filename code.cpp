string findLCS(int n, int m,string &text1, string &text2){
	
        int dp[n+1][m+1];
        //return length(text1,text2,n,m);
        for(int i=0;i<n+1;i++)
        dp[i][0]=0;
        for(int i=0;i<m+1;i++)
        dp[0][i]=0;
        for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
        {
            if(text1[i-1]==text2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
	
        string w="";
        while(n>0 && m>0)
			{
        if (text1[n-1]==text2[m-1] ) {
            w = text1[n - 1]+w;
			n-=1;
			m-=1;
        } else if (dp[n][m] == dp[n - 1][m])
            n-=1;
        else
		    m-=1;
			}
			//cout<<w<<endl;
	    return w;
			
}
