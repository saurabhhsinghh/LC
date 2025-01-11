/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var length=nums.length;
    var sum=(length*(length+1))/2;
    var s=0;
    for(var i=0;i<length;i++)
    {
        s=s+nums[i];
    }
    return sum-s;
};