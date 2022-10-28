package day1_arrays;

public class Sort012 {
    public void sortColors(int[] nums) {
	int low = 0, mid = 0, high = nums.length - 1;
	for (int i = 0; i < nums.length; i++) {
	    if (nums[mid] == 0) {
		swap(low, mid, nums);
		low++;
		mid++;
	    }
	    if (nums[mid] == 1) {
		mid++;
	    }
	    if (nums[mid] == 2) {
		swap(high, mid, nums);
		high--;
	    }
	}
    }

    private void swap(int low, int mid, int[] nums) {
	int temp = nums[low];
	nums[low] = nums[mid];
	nums[mid] = temp;
    }

}
