package datastructuresreview.heaps;

import java.util.ArrayList;

public abstract class Heap {
	ArrayList<Integer> heap;
	
	public Heap() {
		heap = new ArrayList<Integer>();
	}
	
	public void insert(Integer n) {
		heap.add(n);
		heapifyUp();
	}
	
	public Integer removeTop() {
		Integer retVal = heap.get(0);
		Integer newTop = heap.get(heap.size()-1);
		
		heap.remove(0);
		heap.remove(heap.size()-1);
		
		heap.add(0, newTop);
		heapifyDown();
		
		return retVal;
	}
	
	public Integer remove() {
		return -1;
	}

	public Integer peek() { return heap.get(0); }
	//public void replace(Integer remove, Integer insert);
	//public void merge(Heap h1, Heap h2);
	public boolean isEmpty() { return heap.isEmpty(); }
	public int size() {return heap.size(); }
	public void print() {
		for(int i=0; i<heap.size(); i++) {
			System.out.print(heap.get(i) + " ");
		}
		System.out.println();
	}
	
	protected void swap(int a, int b) {
		Integer temp = heap.get(a);
		heap.set(a, heap.get(b));
		heap.set(b, temp);
	}

	
	protected int getLeftChildNdx(int index) { return (index*2)+1; }
	protected int getRightChildNdx(int index) { return (index*2)+2; }
	protected int getParentNdx(int index) { return (index-1)/2; }	

	protected boolean hasParent(int index) { return index > 0; }
	protected boolean hasLeftChild(int index) { return ( getLeftChildNdx(index) < (heap.size()-1) ); }
	protected boolean hasRightChild(int index) { return ( getRightChildNdx(index) < (heap.size()-1) ); }

	protected Integer leftChild(int ndx) { return heap.get(getLeftChildNdx(ndx)); }
	protected Integer rightChild(int ndx) { return heap.get(getRightChildNdx(ndx)); }
	protected Integer parent(int ndx) { return heap.get(getParentNdx(ndx)); }
	
	protected abstract void heapifyDown();
	protected abstract void heapifyUp();
	
}
