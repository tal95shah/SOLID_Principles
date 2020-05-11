# Open Closed Principle

## Thought Process

Whenever you see large ifs' and switch cases, do rethink whether you need to decouple the classes or not.

## Definition

Any new functionality should be implemented by adding new classes, attributes, methods, instead of changing the current ones or existing ones.

## Implementation

* Implement new functionality on derived classes
* Allow clients to access the original class with abstract interface.

## If Not Followed

* test entire functionality
* QA needs to test entire flow
* breaks Single Responsibility Principle
* Difficult to maintain


## Without Open Closed Principle UML
![Without Open Closed Principle UML](https://github.com/tal95shah/SOLID_Principles/blob/master/OpenClosed/images/withoutOCP.png "Without Open Closed Principle UML")

#### [C++ Code of without Open Closed Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/OpenClosed/withoutOCP.cpp)<br/>

## With Open Closed Principle UML
![With Open Closed Principle UML](https://github.com/tal95shah/SOLID_Principles/blob/master/OpenClosed/images/withOCP.png "With Open Closed Principle UML")

#### [C++ Code of Open Closed Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/OpenClosed/withOCP.cpp)<br/>