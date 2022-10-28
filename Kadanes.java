package day1_arrays;

import java.util.Iterator;

public class Kadanes {
    public int maxSubArray(int[] nums) {
	int maxSumSoFar = Integer.MIN_VALUE;
	int sum = 0;

	for (int i = 0; i < nums.length; i++) {
	    sum += nums[i];
	    maxSumSoFar = Math.max(maxSumSoFar, Math.max(nums[i], sum));
	    if (sum < 0) {
		sum = 0;
	    }
	}
	return maxSumSoFar;

    }

}
