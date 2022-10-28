package day1_arrays;

public class SetMatrixsZeroes {

    public static void main(String[] args) {

    }

    public void setZeroes(int[][] matrix) {
	boolean col0 = false, row0 = false;
	for (int i = 0; i < matrix.length; i++) {
	    if (matrix[i][0] == 0) {
		col0 = true;
	    }
	}

	for (int i = 0; i < matrix[0].length; i++) {
	    if (matrix[0][i] == 0) {
		row0 = true;
	    }
	}
	for (int i = 1; i < matrix.length; i++) {
	    for (int j = 1; j < matrix[0].length; j++) {
		if (matrix[i][j] == 0) {
		    matrix[i][0] = 0;
		    matrix[0][j] = 0;
		}
	    }
	}

	for (int i = 1; i < matrix.length; i++) {
	    for (int j = 1; j < matrix[0].length; j++) {
		if (matrix[i][0] == 0 || matrix[0][j] == 0) {
		    matrix[i][j] = 0;
		}
	    }
	}
	if (col0) {
	    for (int i = 0; i < matrix.length; i++) {
		matrix[i][0] = 0;
	    }
	}
	if (row0) {
	    for (int i = 0; i < matrix[0].length; i++) {
		matrix[0][i] = 0;
	    }
	}

    }

}
