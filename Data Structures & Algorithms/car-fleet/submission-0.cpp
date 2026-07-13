class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
           int n= position.size();
         for(int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }  
        int fleet =0;
        sort(cars.begin(),cars.end());
         double LastFleetTime = 0;
        for( int i=n-1;i>=0;i--){
            double CurrentFleetTime = (double)(target - cars[i].first) / cars[i].second;
             if(LastFleetTime<CurrentFleetTime){
                fleet++;
                 LastFleetTime = CurrentFleetTime;
             }
             else{
                continue;
             }
        }
        return fleet;
        
    }
};
