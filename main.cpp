#include <iostream>
#include <vector>

using namespace std;

 class SolutionHeight{
 public:
 	int maximalNetworkRank(int n, vector<vector<int>>& roads){
 		vector<int> degree(n,0);
 		vector<vector<bool>> connected(n,vector<bool>(n,false));
 		for(auto& x: roads){
 			int i=x[0];
 			int j=x[1];
 			degree[i]++;
 			degree[j]++;
 			connected[i][j]=true;
 			connected[j][i]=true;
 		}
 		int ans=INT_MIN;
 		for(int i=0; i<n; i++){
 			for(int j=i+1; j<n; i++){
 				int i_rank=degree[i];
 				int j_rank=degree[j];
 				int total=i_rank+j_rank;
 				if(connected[i][j]){
 					total--;
 				}
 				ans=max(ans,total);
 			}
 		}
 		return ans;
 	}
 };

 int main(){
 	return 0;
 }