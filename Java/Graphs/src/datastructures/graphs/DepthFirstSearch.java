/*
 * Author: Shiree Hughes
 * Date Created: May 13, 2020
 * Last Modified: May 13, 2020
 * 
 * This class implements datastructures.graphs.Search and contains 5 public functions:
 * 1. DepthFristSearch() - constructor
 * 2. boolean findPath(Node start, Node end)
 *    - determines if a path exists from start to end using depth first search
 * 3. boolean findValue(Node start, int val)
 *    - determines if a node with val exists in the graph using depth first search
 * 4. void printTree(Node start)
 * 	  - prints the contents of the tree using depth first search from node start
 * 5. void reset(Node start)
 * 	  - resets the nodes in the tree by clearing the visited flag and removing items 
 *      from the queue
 */

package datastructures.graphs;

public class DepthFirstSearch implements Search{	
	
	public DepthFirstSearch() {
	}

	public void reset(Node start) {
		if(start.isVisited() && start.getNumChildren()==0) {
			start.unvisit();
			return;
		}
		if(start.isVisited()) {
			start.unvisit();
			for(int i=0; i<start.getNumChildren(); i++) {				
				reset(start.getChild(i));
			}	
		}
	}
	
	public boolean findPath(Node start, Node end) {
		if(start == end)
			return true;
		
		if(!start.isVisited()) {
			start.visit();
			for(int i=0; i<start.getNumChildren(); i++) {
				if(start.getChild(i).equals(end)) {
					return true;
				}
				if(findPath(start.getChild(i),end))
					return true;
			}
		}
		return false;
	}
	
	public boolean findValue(Node start, int val) {
		if(!start.isVisited()) {
			start.visit();
			for(int i=0; i<start.getNumChildren(); i++) {
				if(start.getChild(i).getVal() == val) {
					return true;
				}
				if(findValue(start.getChild(i), val))
					return true;
			}			
		}
		return false;
	}

	@Override
	public void printTree(Node start) {
		if(!start.isVisited() && start.getNumChildren()==0) {
			start.visit();
			System.out.print(start.getVal() + " ");
			return;
		}
		if(!start.isVisited()) {
			start.visit();
			for(int i=0; i<start.getNumChildren(); i++) {				
				printTree(start.getChild(i));
			}	
			System.out.print(start.getVal() + " ");
		}
	}

}
