/*
 * Author: Shiree Hughes
 * Date Created: May 13, 2020
 * Last Modified: May 13, 2020
 * 
 * This interface contains 4 public functions:
 * 1. boolean findPath(Node start, Node end)
 *    - determines if a path exists from start to end
 * 2. boolean findValue(Node start, int val)
 *    - determines if a node with val exists in the graph
 * 3. void printTree(Node start)
 * 	  - prints the contents of the tree starting from node start
 * 4. void reset(Node start)
 * 	  - resets the nodes in the tree by clearing the visited flag 
 *      and removing items from the queue
 */

package datastructures.graphs;

public interface Search {

	public boolean findPath(Node start, Node end);
	public boolean findValue(Node start, int val);
	public void printTree(Node start);
	public void reset(Node start);
}
