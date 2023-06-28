/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    var leftSum = 0;
    var higheshAlt = 0;
    
    for(let i=0; i<gain.length; i++) {
        leftSum += gain[i];
        higheshAlt = Math.max(higheshAlt, leftSum);
    }
    return higheshAlt;
};