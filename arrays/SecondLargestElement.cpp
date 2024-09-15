class Solution {
  public:

    int print2largest(vector<int> &arr) {
        int max=arr[0];
        int second_max=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>second_max&& arr[i]!=max){
                second_max=arr[i];
            }
        
        }
        
    return second_max;
    }
};