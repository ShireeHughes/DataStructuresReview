package datastructuresreview.heaps;

public class Main {

	public static void main(String[] args) {
		Heap minHeap = new MinHeap();
		
		minHeap.insert(14);
		minHeap.insert(2);		
		System.out.println("Min Value is: " + minHeap.peek());

		minHeap.insert(7);
		minHeap.insert(1);
		minHeap.insert(10);
		System.out.println("Min Value is: " + minHeap.peek());
		
		minHeap.print();
		minHeap.removeTop();
		System.out.println("Min Value is: " + minHeap.peek());
		minHeap.print();
	}

}
