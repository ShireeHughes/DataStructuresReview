/*
 * Source: https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/
 * Problem Statement: 
 * Design a Data Structure SpecialStack that supports all the stack operations like 
 * push(), pop(), isEmpty(), isFull() and an additional operation getMin() which 
 * should return minimum element from the SpecialStack. All these operations of 
 * SpecialStack must be O(1). To implement SpecialStack, you should only use standard 
 * Stack data structure and no other data structure like arrays, list, .. etc.
 */
package datastructures.arrays.stack;

import java.util.ArrayList;

public class SpecialStack extends Stack {

	private Stack secondStack;
	
	public SpecialStack() {
		super();
		secondStack = new Stack();
	}
	
	public void push(int val) {
		super.push(val);
		int currentTop = secondStack.peek();
		if(currentTop < val) {
			secondStack.push(currentTop);
		} else {
			secondStack.push(val);
		}
	}
	
	public int pop() {
		int retVal = super.pop();
		
		if (secondStack.peek() == retVal) 
			secondStack.pop();
		
		return retVal;
	}
}
