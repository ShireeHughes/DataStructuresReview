package datastructures.arrays.sorted;

public class RotatedSortedArray {
	private int DEFAULT = 10;
	private int[] array;	
	
	public RotatedSortedArray(int[] array) {
		this.array = array;		
	}
	
	public RotatedSortedArray() {
		array = new int[DEFAULT];
	}
	
	public void rotate(int n) {
		int[] temp = new int[array.length];
		int ndx = n % array.length;
		for(int i=0; i<array.length; i++) {
			temp[i] = array[n];
			n = (n+1) % array.length;
			
		}
		array = temp;
	}
	
	public int rotated() {
		int left = 0;
		int right = array.length-1;
		
		while(left <= right && right >= left) {
			if(array[left] > array[left+1]) {
				return array.length - (left+1);
			}
			if(array[right] < array[right-1]) {
				return array.length - right;
			}
			left++;
			right--;
		}
		return 0;
	}
	
	public String toString() {
		String str = "";
		for(int i=0; i<array.length; i++) {
			str += array[i] + " ";
		}
		return str;
	}
}
