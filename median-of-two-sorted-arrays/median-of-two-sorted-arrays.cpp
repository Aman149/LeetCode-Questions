class Solution {
    typedef decltype(vector<int>().cbegin()) random_it;

    int kth(random_it it_a, int size_a, random_it it_b, int size_b,
            int offset) {      // offset is 1-based
        if (size_a < size_b) { // size_a always >= size_b
            return kth(it_b, size_b, it_a, size_a, offset);
        }
        if (size_b == 0) { // obvious case
            return *(it_a + (offset - 1));
        }
        if (offset == 1) { // cannot reduce more
            return min(*it_a, *it_b);
        }

        // 'n' prefix indicates it is 1-based
        int nguess_b = min(size_b, offset / 2);
        // in oder to fit the offset, guess_a has to be that
        int nguess_a = offset - nguess_b;
        // we can safely say that vecotr_b part is definetly ahead of kth elem
        // since part a is bigger than part b
        if (*(it_a + (nguess_a - 1)) > *(it_b + (nguess_b - 1))) {
            // remove part b and change offset
            return kth(it_a, size_a, it_b + nguess_b, size_b - nguess_b,
                       offset - nguess_b);
        }
        // similarly, remove part a
        return kth(it_a + nguess_a, size_a - nguess_a, it_b, size_b,
                   offset - nguess_a);
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int target = (nums1.size() + nums2.size()) / 2;
        int a = kth(nums1.cbegin(), nums1.size(), nums2.cbegin(), nums2.size(),
                    target + 1);
        if ((nums1.size() + nums2.size()) % 2 == 0) {
            int b = kth(nums1.cbegin(), nums1.size(), nums2.cbegin(),
                        nums2.size(), target);
            return (a + b) / 2.0;
        }
        return a;
    }
};





















