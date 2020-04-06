# Open Closed Principle

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