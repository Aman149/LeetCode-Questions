/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    var result = "";
    let size1= word1.length, size2 = word2.length;
    let iterator1 = 0, iterator2 = 0;
    
    while(iterator1 < size1 && iterator2 < size2) {
        result += word1[iterator1++];
        result += word2[iterator2++];
    }
    
    while(iterator1 < size1) {
        result += word1[iterator1++];
    }
    
    while(iterator2 < size2) {
        result += word2[iterator2++];
    }
    
    return result
};