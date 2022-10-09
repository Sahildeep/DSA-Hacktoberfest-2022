package com.dsa.d_stack;

import java.util.Stack;

public class LargestAreaHistogram {

	private static int largestAreaHistogram(int[] arr) {

		Stack<Integer> stack = new Stack<>();
		int[] rsmall = new int[arr.length];
		int[] lsmall = new int[arr.length];

		rsmall[arr.length - 1] = arr.length;
		stack.push(arr.length - 1);
		for (int i = arr.length - 2; i >= 0; i--) {
			while (!stack.isEmpty() && arr[i] < arr[stack.peek()]) {
				stack.pop();
			}

			if (stack.isEmpty()) {
				rsmall[i] = arr.length;
			} else {
				rsmall[i] = stack.peek();
			}
			stack.push(i);
		}

		while (!stack.isEmpty()) {
			stack.pop();
		}

		stack.push(0);
		lsmall[0] = -1;
		for (int i = 1; i < arr.length; i++) {
			while (!stack.isEmpty() && arr[i] < arr[stack.peek()]) {
				stack.pop();
			}

			if (stack.isEmpty()) {
				lsmall[i] = -1;
			} else {
				lsmall[i] = stack.peek();
			}
			stack.push(i);
		}

		int maxArea = 0;
		int area = 0;
		for (int i = 0; i < arr.length; i++) {
			area = arr[i] * (rsmall[i] - lsmall[i] - 1);
			maxArea = Math.max(area, maxArea);
		}

		return maxArea;
	}

	public static void main(String[] args) {
		int[] arr = new int[] { 6, 5, 4, 3, 2, 4, 5, 4 };
		System.out.println("Largest area histogram: " + largestAreaHistogram(arr));
	}

}
