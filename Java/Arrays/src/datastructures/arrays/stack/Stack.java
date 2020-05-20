package datastructures.arrays.stack;

import java.util.ArrayList;

public class Stack {
	private ArrayList<Integer> stack;
	
	public Stack() {
		stack = new ArrayList<Integer>();
	}
	
	public void push(int val) {
		stack.add(val);
	}
	
	public int pop() {
		return stack.remove(stack.size()-1);
	}
	
	public int peek() {
		return stack.get(stack.size()-1);
	}
	
	public boolean isEmpty() {
		return stack.size() > 0;
	}
	
}
