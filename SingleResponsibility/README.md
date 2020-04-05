# Single Responsibility Principle

## Definition

Every class or module should have responsibility over a single part of functionality provided by the software, and that responsibility should be entirely encapsulated by the class or module.

Everything in the class or module should be related to the single purpose.

## Motivation

* Maintainability
* Loose Coupling
* Flexibility and Extensibility
* Parallel Development
* Testability 


## Without Single Responsibility UML
![Without Responsibility UML](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/withoutSingleResponsibility.png "Without Responsibility UML")

As you can see, a single interface is handling multiple responsibilities (e.g email, logging, auth).

## With Single Responsibility UML
![With Responsibility UML](https://github.com/tal95shah/SOLID_Principles/blob/master/SingleResponsibility/withSingleResponsibility.png "With Responsibility UML")

Here, seperate interfaces for seperate responsibilites.
