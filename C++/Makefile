#Compiler
CC = g++

#Override RM
RM = rm -rf

#Compiler flags
#  -g		adds debugging info
#  -Wall	turns on most compiler warnings
CFLAGS = -g -Wall

# -------------------
# Executables
# -------------------
STACK = myStack
QUEUE = myQueue
REVERSED_LINKED_LIST = reversedLinkedList
BINARY_TREES = binaryTree
PRETTY_PRINT = prettyPrint

# -------------------
# TARGETS
#
# - stack
# - queue
# - reversedLL
# - binary
# - prettyprint
# -------------------

stack: $(STACK)

$(STACK): StacksArraysQueues/Main.cpp
	$(CC) $(CFLAGS) -o $(STACK)  StacksArraysQueues/Main.cpp  StacksArraysQueues/myStack.cpp

queue: $(QUEUE)

$(QUEUE): StacksArraysQueues/QueueTest.cpp
	$(CC) $(CFLAGS) -o $(QUEUE)  StacksArraysQueues/QueueTest.cpp  StacksArraysQueues/myQueue.cpp LinkedLists/LinkedLists/SinglyLinkedList.cpp


reversedLL: $(REVERSED_LINKED_LIST)

$(REVERSED_LINKED_LIST): LinkedLists/LinkedLists/Main.cpp
	$(CC) $(CFLAGS) -o $(REVERSED_LINKED_LIST) LinkedLists/LinkedLists/Main.cpp LinkedLists/LinkedLists/SinglyLinkedList.cpp

binary: $(BINARY_TREES)

$(BINARY_TREES): Trees/Main.cpp
	$(CC) $(CFLAGS) -o $(BINARY_TREES) Trees/Main.cpp Trees/BinaryTree.cpp

prettyprint: $(PRETTY_PRINT)

$(PRETTY_PRINT): General/Main.cpp
	$(CC) $(CFLAGS) -o $(PRETTY_PRINT) General/Main.cpp General/Manipulators.cpp

#Run Executables
getDiameter: $(BINARY_TREES)
	./$(BINARY_TREES)

clean:
	$(RM) $(STACK) 
	$(RM) $(STACK).dSYM
	$(RM) $(QUEUE) 
	$(RM) $(QUEUE).dSYM
	$(RM) $(REVERSED_LINKED_LIST)
	$(RM) $(REVERSED_LINKED_LIST).dSYM
	$(RM) $(BINARY_TREES)
	$(RM) $(BINARY_TREES).dSYM
	$(RM) $(PRETTY_PRINT)
	$(RM) $(PRETTY_PRINT).dSYM