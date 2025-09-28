class Queue: 
    def __init__(self): 
        self.items = [] 

    def is_empty(self): 
        return len(self.items) == 0 
    
    def enqueue(self, item): 
        self.items.append(item) 

    def front(self): 
        if not self.is_empty(): 
            return self.items[0] 
        else: 
            return "Queue is empty" 
        
    def rear(self): 
        if not self.is_empty(): 
            return self.items[-1] 
        else: 
            return "Queue is empty" 
        
    def size(self): 
        return len(self.items) 
    

if __name__ == "__main__": 
    antrean = Queue() 

antrean.enqueue("Pasien 1") 
antrean.enqueue("Pasien 2") 
antrean.enqueue("Pasien 3") 
print("Terdapat urutan antrean pasien:", antrean.size()) 
print("Pasien yang pertama dilayani yaitu:", antrean.front()) 
print("Pasien yang urutannya paling belakang:", antrean.rear())