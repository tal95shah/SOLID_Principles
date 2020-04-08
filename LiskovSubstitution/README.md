# Single Responsibility Principle

## Definition

Derived types must be completely substitutable for their base types.

## Implementation Guidelines

* No new exceptions can be thrown by the derived type
* Clients should not know which specific derived type they are calling
* New derived types just extend without replacing the functionality of parent type.


## Without Liskov Substitution UML
![Without Liskov Substitution UML](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/images/withoutLSP.png "Without Liskov Substitution UML")

#### [C++ Code of without Liskov Substitution Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/withoutLSP.cpp)<br/>


## With Liskov Substitution UML
![With Liskov Substitution UML](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/images/withLSP.png "With Liskov Substitution UML")

#### [C++ Code of Liskov Substitution Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/withLSP.cpp)<br/>

