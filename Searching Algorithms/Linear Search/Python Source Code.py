import numpy as np 

print("Enter `-1` to stop asking for more elements")

array = np.empty(shape = (1))

while True:
    
    element = input("Enter the element")
    
    if element == -1:
        
        array = np.hstack([array , np.array(element)])
    
    else :
        
        break

target = input("Enter the target value : ")

def linear_search(array , target):

    for index , element in enumerate(array):
        
        if element == target:
            
            return index
        
        else :
            
            return "Element not found in the array"
