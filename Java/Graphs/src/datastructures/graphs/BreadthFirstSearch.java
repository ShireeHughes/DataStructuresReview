/*
 * Author: Shiree Hughes
 * Date Created: May 13, 2020
 * Last Modified: May 13, 2020
 * 
 * This class implements datastructures.graphs.Search and contains 5 public functions:
 * 1. BreadthFristSearch() - constructor
 * 2. boolean findPath(Node start, Node end)
 *    - determines if a path exists from start to end using breadth first search
 * 3. boolean findValue(Node start, int val)
 *    - determines if a node with val exists in the graph using breadth first search
 * 4. void printTree(Node start)
 * 	  - prints the contents of the tree using breadth first search from node start
 * 5. void reset(Node start)
 * 	  - resets the nodes in the tree by clearing the visited flag and removing items 
 *      from the queue
 */

package datastructures.graphs;

import java.util.ArrayList;

public class BreadthFirstSearch implements Search{
	protected ArrayList<Node> queue;
	
	public BreadthFirstSearch() {
		queue = new ArrayList<Node>();
	}
	
	@Override
	public boolean findPath(Node start, Node end) {
		if(start.equals(end)) {
			return true;
		} else if(!start.isVisited()){
			start.visit();
			for(int i=0; i<start.getNumChildren(); i++) {
				queue.add(start.getChild(i));
			}
		}
		
		while(!queue.isEmpty()) {
			Node temp = queue.get(0);
			queue.remove(0);
			if(findPath(temp,end)) {
				return true;
			} 				
		}
		return false;
	}

	@Override
	public boolean findValue(Node start, int val) {
		if(start.getVal() == val) {
			return true;
		} else if(!start.isVisited()){
			start.visit();
			for(int i=0; i<start.getNumChildren(); i++) {
				queue.add(start.getChild(i));
			}
		}
		
		while(!queue.isEmpty()) {
			Node temp = queue.get(0);
			queue.remove(0);
			if(findValue(temp,val)) {
				return true;
			} 				
		}
		return false;
	}

	@Override
	public void printTree(Node start) {
		if(!start.isVisited()) {
			start.visit();
			System.out.print(start.getVal() + " ");	
			for(int i=0; i<start.getNumChildren(); i++) {
				queue.add(start.getChild(i));
			}
		}

		while(!queue.isEmpty()) {
			Node temp = queue.get(0);
			queue.remove(0);
			printTree(temp);
		}		
	}

	@Override
	public void reset(Node start) {
		queue.clear();
		unvisitNodes(start);
		queue.clear();
	}
	
	private void unvisitNodes(Node start) {
		if(start.isVisited()) {
			start.unvisit();		
			for(int i=0; i<start.getNumChildren(); i++) {
				queue.add(start.getChild(i));
			}
		}

		while(!queue.isEmpty()) {
			Node temp = queue.get(0);
			queue.remove(0);
			unvisitNodes(temp);
		}		
	}

}
