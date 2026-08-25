int missingNumber(int* nums, int numsSize) {
   int xor = 0;
   for (int i = 0;i < numsSize; i++)
   {
    xor ^= nums[i] ^ i;
   } 
   return xor ^ numsSize;
}
