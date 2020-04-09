# Dependency Inversion Principle

## Definition

The interaction between high level and low level modules should be thought of as an abstract interaction between them.

## Motivation

* If a class functionality is likely to change in future, introduce an abstraction layer between high level and low level classes.

## Implementation Guidelines

* High level classes -> Abstraction layer -> Low level classes


## Without Liskov Substitution UML
![Without Liskov Substitution UML](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/images/withoutLSP.png "Without Liskov Substitution UML")

#### [C++ Code of without Liskov Substitution Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/withoutLSP.cpp)<br/>


## With Liskov Substitution UML
![With Liskov Substitution UML](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/images/withLSP.png "With Liskov Substitution UML")

#### [C++ Code of Liskov Substitution Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/LiskovSubstitution/withLSP.cpp)<br/>

