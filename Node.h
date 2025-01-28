template <typename T>
struct Node {
    T data;          
    Node* next;  
    Node(T val) : data(val), next(nullptr) {}  // Constructor to initialize node with data
    
};
