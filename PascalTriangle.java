package day1_arrays;

import java.util.ArrayList;
import java.util.List;

public class PascalTriangle {

    public List<List<Integer>> generate(int numRows) {
	List<List<Integer>> listlist = new ArrayList<>();
	List<Integer> list;
	for (int i = 0; i < numRows; i++) {
	    list = new ArrayList<>();
	    for (int j = 0; j <= i; j++) {
		if (j == 0 || j == i) {
		    list.add(1);
		} else {
		    list.add(listlist.get(i - 1).get(j - 1) + listlist.get(i - 1).get(j));
		}

	    }
	    listlist.add(list);
	}
	return listlist;

    }
}
