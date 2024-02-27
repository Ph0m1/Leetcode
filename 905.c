int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    char*l=nums;
    char*r =nums+numsSize;
    while(l<r){
        while(*l%2){
            l++;
        }
        while(!*r%2){
            r--;
        }
        char t=*l;
        *l=*r;
        *r=t;
    }
    return nums;
}