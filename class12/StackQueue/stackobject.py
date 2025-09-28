class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return "Stack is Empty"
    
    def peek(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            return "Stack is Empty"
    
    def size(self):
        return len(self.items)
    
    def display(self):
        return self.items
    
    #def insert(self, inputs):
    #   if self.is_empty():
    #        self.items = inputs
    #    else:
    #        for ins in inputs:
    #            self.push(ins)
    
stack = Stack()
stack.push(5)
stack.push(8)
stack.push(4)

#data = [9, 8, 7, 6, 5]
#stack.insert(data)

print("Stack: ", stack.items)
print("Top item: ", stack.peek())
print("Popped item: ", stack.pop())
print("Stack after pop: ", stack.display())
print("Stack size: ", stack.size())