/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function (nums, k) {
    const len = nums.length;
    for (let i = 0; i < len; i++) {
        const n = nums[i];
        const len = k + i + 1;
        for (let j = i + 1; j < len; j++) {
            if (n === nums[j]) return true;
        }
    }
    return false;
};

console.log(containsNearbyDuplicate([1, 2, 3, 0, 2], 3));