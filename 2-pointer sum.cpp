public class Solution {
    public int[] twoSum(int[] nums, int target) {
        // copy and sort the original array;
        int[] sorted = new int[nums.length];
        System.arraycopy(nums, 0, sorted, 0, nums.length);
        Arrays.sort(sorted);
         
        int first = 0;
        int second = nums.length-1;
         
        while (first &amp;amp;amp;lt; second){
            if (sorted[first] + sorted[second] &amp;amp;amp;lt; target){
                first ++;
                continue;  
            }else if (sorted[first] + sorted[second] &amp;amp;amp;gt; target){
                second --;
                continue;
            }else{
                break;
            }
        }
        // find the indexs for sorted[first] and sorted[second]
        int index1 = -1;// so that we knwo whether it has to be copyed or not
        int index2 = -1;
        for (int i = 0; i &amp;amp;amp;lt; nums.length; i++){
            if (nums[i] == sorted[first] || nums[i] == sorted[second]){
                if (index1 == -1){
                    index1 = i+1;
                }else{
                    index2 = i+1;
                }
            }
        }
        // remeber to sort the result. 
        int[] res = {index1, index2};
        Arrays.sort(res);
        return res;
    }
}
