#include <iostream>
#include "Queue.h"

int main() {
    // Create a Queue of integers with a size of 5
    Queue<int> myQueue(5);

    // Enqueue elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);
    myQueue.enqueue(50);

    // Try to enqueue when the queue is full
    myQueue.enqueue(60);  // This should not be added

    // Check if the queue is full
    if (myQueue.isFull()) {
        std::cout << "Queue is full." << std::endl;
    }

    // Peek at the front element
    std::cout << "Front element: " << myQueue.peek() << std::endl;

    // Dequeue elements
    while (!myQueue.isEmpty()) {
        std::cout << "Dequeued: " << myQueue.dequeue() << std::endl;
    }

    // Try to dequeue when the queue is empty
    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl;  // This should print the default-constructed element (0 for int)

    // Check if the queue is empty
    if (myQueue.isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
    }

    return 0;
}
////////Code runs fine except for dequeue of 5 it gave to random possitve numbers and 3 random negative numbers in the billions
////////Return data type in Quue.h