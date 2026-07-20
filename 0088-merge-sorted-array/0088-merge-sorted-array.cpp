class Solution {
public:
    void merge(vector<int>&A, int m, vector<int>&B , int n) {
        int idx=m+n-1;
        int i=m-1;
        int j=n-1;
       

        while(i>=0&&j>=0){
            if(A[i]>B[j]){
                A[idx] = A[i];
                i--;
            }
            else{
                A[idx] = B[j];
                j--;
            }

            idx--;
        }

        // agar array b  ke elements bach gaye or i<0 ho tab 
        while(j >= 0){
            A[idx] = B[j];
            j--;
            idx--;
        }

            }
        
        
    };
