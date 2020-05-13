/*
 * Author: Shiree Hughes
 * Date Created: May 13, 2020
 * Last Modified: May 13, 2020
 * 
 * This class implements a basic node for a graph
 */

package datastructures.graphs;

import java.util.ArrayList;

public class Node {
	protected ArrayList<Node> children;
	protected int value;
	protected Boolean visited;

	public Node() {
		children = new ArrayList<Node>();
		visited = false;
	} 

	public Node(int value) {
		this.value = value;
		children = new ArrayList<Node>();
		visited = false;
	} 

	public void addChild(Node n) {
		children.add(n);
	}

	public int removeChild(Node n) {
		int ndx = children.indexOf(n);
		if(ndx != -1) {
			children.remove(ndx);
		}
		return ndx;
	}

	public int getNumChildren() {
		return children.size();
	}

	public Node getChild(int n) {
		return children.get(n);
	}

	public int getVal() {
		return value;
	}

	public Boolean isVisited() {
		return visited;
	}
	
	public void visit() {
		visited = true;
	}
	
	public void unvisit() {
		visited = false;
	}
}
