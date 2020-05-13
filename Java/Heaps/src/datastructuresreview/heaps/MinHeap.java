package datastructuresreview.heaps;

public class MinHeap extends Heap {

	@Override
	protected void heapifyDown() {
		int current = 0;
		int smallestChildNdx =-1;
		while(hasLeftChild(current)) {
			if(leftChild(current) < heap.get(current)) {
				smallestChildNdx = getLeftChildNdx(current);
			}
			if(hasRightChild(current) && 
			   rightChild(current) < heap.get(current)) {
				smallestChildNdx = (leftChild(current)>rightChild(current)) ? getRightChildNdx(current) : getLeftChildNdx(current);
			}
			if(smallestChildNdx == -1) {
				break;
			}
			
			swap(smallestChildNdx , current);
			current = smallestChildNdx;
		}
	}

	@Override
	protected void heapifyUp() {
		int current = heap.size()-1;
		
		while(hasParent(current)) {
			if(parent(current) > heap.get(current)) {
				swap(getParentNdx(current) , current);
				current = getParentNdx(current);
			} else {
				break;
			}
		}
	}

}
