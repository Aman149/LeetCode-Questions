var intersection = function(nums1, nums2) {
    const num1Map = {}
    for(const num of nums1){
       num1Map[num] = true
    }
    const num2Map = {}

    for(const num of nums2){
        if(num in num1Map)num2Map[num] = true
    }
    return Object.keys(num2Map)
};