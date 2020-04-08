# Single Responsibility Principle

## Definition

Derived types must be completely substitutable for their base types.

## Implementation Guidelines

* No new exceptions can be thrown by the derived type
* Clients should not know which specific derived type they are calling
* New derived types just extend without replacing the functionality of parent type.


## Without Single Responsibility UML
![Without Responsibility UML](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/images/withoutSingleResponsibility.png "Without Responsibility UML")

#### [C++ Code of without Single Responsibility Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/withoutSingleResponsibility.cpp)<br/>
As you can see, a single interface is handling multiple responsibilities (e.g email, logging, auth).

## With Single Responsibility UML
![With Responsibility UML](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/images/withSingleResponsibility.png "With Responsibility UML")

#### [C++ Code of Single Responsibility Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/withSingleResponsibility.cpp)<br/>

Here, seperate interfaces for seperate responsibilites.
