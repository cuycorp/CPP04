# CPP04

## Topics: 
### Subtyping polymorphism
Declaring an object as a pointer of a type od derived class, but calling constructor different to the class of the pointer
    

### Shallow & deep copies
https://www.youtube.com/watch?v=Ldv5i14UhTA
- deep copies for dynamically allocated data
- for classes that have pointer attributes, copy constructor has to reassign the pointer
    
### Virtual function

- Is added before function declaration when you expect derived classes to override a method.
- You’ll be using pointers or references to the base class

### Interface classes: 
- A class that only has abstract behaviours and doesnt have attributes

### Abstract classes : 
https://www.youtube.com/watch?v=wE0_F4LpGVc 
- Virtual enables dynamic binding at runtime(flexibility to be called by different classes)
- can abstract classes have the default methods