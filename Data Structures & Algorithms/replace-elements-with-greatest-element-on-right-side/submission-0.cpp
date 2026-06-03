class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i=0,largest;
        for(i=0;i<arr.size()-1;i++){
            largest = arr[i+1];
            for(int j=i+1;j<arr.size();j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
            }
            arr[i]=largest;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};