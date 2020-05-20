package datastructures.arrays.sorted;

public class Main {

	public static void main(String[] args) {
		int[] array = {1,2,3,4,5};
		RotatedSortedArray rsa = new RotatedSortedArray(array);
		
		System.out.println("Rotated: " +rsa.rotated());
		rsa.rotate(2);
		System.out.println("New Array: " + rsa.toString());
		System.out.println("Rotated: " +rsa.rotated());
		rsa.rotate(1);
		System.out.println("New Array: " + rsa.toString());
		System.out.println("Rotated: " +rsa.rotated());
	}

}
