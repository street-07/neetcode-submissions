public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
        
        int k=nums1.Length,p=nums2.Length;
        int[] arr= new int[m+n];
        int l=0,r=0,ans=0,j=0,h=0;
        while(l<m){
            arr[h++]=nums1[l++];
        }

        while(r<n){
            arr[h++]=nums2[r++];
        }

        Array.Sort(arr);

        
int a=0;
        for(int i=0;i<m+n;i++){
            nums1[i]=arr[i];
        }
    }
}