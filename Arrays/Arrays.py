import numpy as np

# Please Enter the shape in `Tuple` for eg `shape = (2,)` or `shape = (3 , 3)`

desired_shape = tuple(input("Enter the shape of the array to be formed : "))

print("1. For making an empty array")
print("2. For making an array with all the values 0")
print("2. For making an array with all the values 1")

choice = int(input("Enter your choice"))

if choice == 1 :
# Making An Empty Array With Desired Shape
    sample_array = np.empty(shape = desired_shape)

elif choice == 2 :
# Making An Sparse Array With Desired Shape
    sample_array = np.zeors(shape = desired_shape)

elif choice == 3 :
# Making An Array with only 1 values With Desired Shape
    sample_array = np.ones(shape = desired_shape)

else :
    
    raise UserWarning("Cannot compute this choice")
