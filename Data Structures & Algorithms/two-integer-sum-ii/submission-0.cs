public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        int l=0,n=numbers.Length;
        int sum=0,r=n-1;

        while(l<r){
             sum=numbers[l]+numbers[r];
            if(sum>target){
                r--;
            }
            else if(sum<target){
                l++;
            }

             else{
                    return new int[]{l+1,r+1};
                }
            
    
        }
        return new int[0];
    }
}
