//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void bfs(int i,vector<vector<int>>&adj,stack<int>&st,vector<int>&vis){
	    for(int j = 0;j < adj[i].size();j++){
	        if(vis[adj[i][j]] == 0){
	            vis[adj[i][j]] = 1;
	            bfs(adj[i][j],adj,st,vis);
	        }
	    }
	    st.push(i);
	}
	
	void bfs2(int i,vector<vector<int>>&adj2,vector<int>&vis2){
	    for(int j = 0;j < adj2[i].size();j++){
	        if(vis2[adj2[i][j]] == 0){
	            vis2[adj2[i][j]] = 1;
	            bfs2(adj2[i][j],adj2,vis2);
	        }
	    }
	}
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int>st;
        vector<int>vis(V,0);
        for(int i = 0;i < V;i++){
            if(vis[i] == 0){
                vis[i] = 1;
                bfs(i,adj,st,vis);
            }
        }
        vector<vector<int>>adj2(V);
        for(int i = 0;i < V;i++){
            int u = i;
            for(int j = 0;j < adj[i].size();j++){
                int v = adj[i][j];
                adj2[v].push_back(i);
            }
        }
        vector<int>vis2(V);
        int ct = 0;
        while(!st.empty()){
            int x =st.top();
            st.pop();
            if(vis2[x] == 0){
                vis2[x] = 1;
                bfs2(x,adj2,vis2);
                ct++;
            }
        }
        return ct;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends