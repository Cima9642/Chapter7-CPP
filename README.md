# Chapter 7 C++ COSC 1336

## Car Class
Write a class named car that has the following member variables:

* **yearModel.** An int that holds the car's year model.
* **make.** A string that holds the make of the car.
* **speed.** An int that holds the car's current speed.

In addition, the class should have the following constructor and other member functions.

* **Constructor.** The constructor should accept the car's year model and make as arguments. These variables. The constructor should also assign 0 to the speed member variables.
* **Accessor.** Appropriate accessor functions to get the values stored in an object's yearModel, make, and speed member variables.
* **accelerate.** The accelerate function should add 5 to the speed member variable each time it is called.
* **brake.** The brake function should subtract 5 from the speed member variable each time it is called.

Demonstrate the class in a program that creates a Car object, and then calls the accelerate function five times. After each call to the accelerate function, get the current speed of the car and display it. Then, call the brake function five times. After each call the brake function, get the current speed of the car and display it.

![Book Excerpt](chapter7.png)
