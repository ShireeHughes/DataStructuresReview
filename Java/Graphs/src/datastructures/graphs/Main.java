/*
 * Author: Shiree Hughes
 * Date Created: May 13, 2020
 * Last Modified: May 13, 2020
 * 
 * This class utilizes Search interface
 */

package datastructures.graphs;

public class Main {

	public static void main(String[] args) {
		Node root = new Node(1);
		Node shared = new Node(5);
		Node notInTree = new Node(10);
		Search dfs = new DepthFirstSearch();
		Search bfs = new BreadthFirstSearch();
		
		//create tree
		root.addChild(new Node(2));
		root.addChild(new Node(3));
		root.addChild(new Node(7));

		root.getChild(0).addChild(shared);
		root.getChild(2).addChild(new Node(8));
		root.getChild(2).getChild(0).addChild(new Node(9));
		root.getChild(2).getChild(0).getChild(0).addChild(shared);
		
		System.out.println("\nDepthFirstSearch");
		dfs.printTree(root);
		System.out.println();
		
		dfs.reset(root);
		System.out.println("5 is in Graph?: " + dfs.findValue(root, 5));
		
		dfs.reset(root);
		if(dfs.findPath(root, shared)) {
			System.out.println("There is a path from " + root.getVal() + " to " + shared.getVal());
		} else {
			System.out.println("There is NOT a path from " + root.getVal() + " to " + shared.getVal());			
		}

		dfs.reset(root);
		if(dfs.findPath(root, notInTree)) {
			System.out.println("There is a path from " + root.getVal() + " to " + notInTree.getVal());
		} else {
			System.out.println("There is NOT a path from " + root.getVal() + " to " + notInTree.getVal());			
		}
		
		System.out.println("\nBreadthFirstSearch");
		bfs.reset(root);
		bfs.printTree(root);
		System.out.println();
		
		bfs.reset(root);
		System.out.println("5 is in Graph?: " + bfs.findValue(root, 5));
		
		bfs.reset(root);
		if(bfs.findPath(root, shared)) {
			System.out.println("There is a path from " + root.getVal() + " to " + shared.getVal());
		} else {
			System.out.println("There is NOT a path from " + root.getVal() + " to " + shared.getVal());			
		}

		bfs.reset(root);
		if(bfs.findPath(root, notInTree)) {
			System.out.println("There is a path from " + root.getVal() + " to " + notInTree.getVal());
		} else {
			System.out.println("There is NOT a path from " + root.getVal() + " to " + notInTree.getVal());			
		}

	}

}
