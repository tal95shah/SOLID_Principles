# Dependency Inversion Principle

## Definition

The interaction between high level and low level modules should be thought of as an abstract interaction between them.

## Motivation

* If a class functionality is likely to change in future, introduce an abstraction layer between high level and low level classes.

## Implementation Guidelines

* High level classes -> Abstraction layer -> Low level classes


## Without Dependency Inversion UML
![Without Dependency Inversion UML](https://github.com/tal95shah/SOLID_Principles/blob/master/DependencyInversion/images/withoutDIP.png "Without Dependency Inversion UML")

#### [C++ Code of without Dependency Inversion Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/DependencyInversion/withoutDIP.cpp)<br/>


## With Dependency Inversion UML
![With Dependency Inversion UML](https://github.com/tal95shah/SOLID_Principles/blob/master/DependencyInversion/images/withDIP.png "With Dependency Inversion UML")

#### [C++ Code of Dependency Inversion Principle](https://github.com/tal95shah/SOLID_Principles/blob/master/DependencyInversion/withDIP.cpp)<br/>

