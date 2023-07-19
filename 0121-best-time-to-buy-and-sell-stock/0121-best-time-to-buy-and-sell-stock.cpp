class Solution {
public:
    int maxProfit(vector<int>& v1) {
        int i,min,max=-1,profit=0;
     min=v1[0];
        
     for(i=0;i<v1.size();i++)
     {
         if(min>v1[i])
         {
             min=v1[i];
         }
         profit=v1[i]-min;
         if(max<profit)
         {
             max=profit;
         }
     }
        return max;
    }};