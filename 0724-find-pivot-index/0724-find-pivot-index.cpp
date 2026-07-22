class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<n;i++){
            //leftsum+=nums[i-1];
            int rightsum=total-nums[i]-leftsum;
            if(leftsum==rightsum){
                return i;
            }
                //Ye last me isliye karte hain kyunki current element ko abhi left side me include nahi karna hai.
                leftsum+=nums[i];
            }
            return -1;
        }

    };












//         vector<int>prefix(n) ,suffix(n);
//         //prefix sum
//         prefix[0]=nums[0];
//         for(int i=1;i<n;i++){
//             prefix[i]=prefix[i-1]+nums[i];
//         }
//         suffix[n-1]=nums[n-1];
//         for(int i=n-2;i>=0;i--){
//             suffix[i]=suffix[i+1]+nums[i];
//         }
//         for(int i=0;i<n;i++){
//             // int left  = (i == 0) ? 0 : prefix[i-1];
//             // int right = (i == n-1) ? 0 : suffix[i+1];
            

//     int left,right;

//     if(i==0)
//         left=0;
//     else
//         left=prefix[i-1];

//     if(i==n-1)
//         right=0;
//     else
//         right=suffix[i+1];

//     if(left==right)
//         return i;


//         }
//         return -1;
        
//     }
// };