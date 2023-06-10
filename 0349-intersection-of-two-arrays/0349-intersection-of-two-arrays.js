/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    var output = [];
    var hashmap = new Map();
    
    for(let i=0; i<nums1.length; i++) {
        hashmap.set(nums1[i], i);
    }

    for(let i=0; i<nums2.length; i++) {
        if(hashmap.has(nums2[i])) {
            output.push(nums2[i]);
            hashmap.delete(nums2[i]);
        }
    }
    return output;
};