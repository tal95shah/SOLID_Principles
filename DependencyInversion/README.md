# Dependency Inversion Principle

## Thought process

Ask yourself, whether you are directly interacting with the low-level module or not? If yes, then create an abstraction.

For example, If you have a store of items and you directly interact with the MongoDB driver in your store. You are violating DIP. This is because your MongoDB driver functions could change very frequently, and your client could demand some other database than MongoDB. We want to ensure loose coupling. So you create an abstraction layer between store and Database driver.

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

