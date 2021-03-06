

/*Question-
    Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
 

Constraints:

-10^9 <= nums1[i], nums2[i] <= 10^9
nums1.length == m + n
nums2.length == n
*/

/* Intuition - Start with end of nums1 and try to fill 0's in descending order and suppose nums1 ends before nums2 i.e j is still there after loop just simply copy remaining nums2 in nums1*/ 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=m-1,j=n-1;
        int k=m+n-1;
        while(nums1[k]==0 && i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                nums1[i]=0;
                k--;
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
                
        }
        for(j;j>=0;j--)
        {
            nums1[k]=nums2[j];
            k--;
        }
        
        
                                                                    
                                                                      
    }

};
