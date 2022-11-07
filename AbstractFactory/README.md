# ABSTRACT FACTORY

#### GENERAL

**Creational** GoF design pattern that allows us to create variations of related objects without the
need for static definitions of their concrete types.

#### USAGE

It's mainly used as a way to restrict usage of only one variant at any give time, while also preserving
the flexibility of specifying which one during runtime.

#### STRUCTURE

![abstract-factory](AbstractFactory.svg)

[TODO] describe basic idea of this pattern

Main idea is that we have related objects (A, B, C) that have different variations (A_1|A_2, B_1|B_2, C_1|C_2)
and instead of the client creating them directly we have factories (Factory_1, Factory_2) that
create always one of the variants of related objects for him.

#### EXAMPLE

[TODO] put in context of the prototype (how and where could be used)

Lets imagine following situation in the context of our [prototype](../README.md#prototype). 
**Modeler** can work with different statistical models that all use set of some variables and 'cause
its wanted behaviour to minize the effect of extreme values we want the app to do some data binning
(sorting the data into virtual "bins" in efforts to minimize minor observations). Now because the
**modeler** will have to support binning we want take advantage of that and actually have it so he
supports binnig based of various principles. That also obviously means that we will have to enforce
that all variables used during one computation are binned the same way.

#### SOLUTION

[TODO] describe solution

One way we can achive our goals is to use **Abstract Factory**. Because if we think about it then
the set of variables represents set of related objects that'll have different variations based
on the binning principle.

#### SUMMARY

[TODO] summarize advantages of an approach using this pattern

Best thing about this approach is that it automatically guarantees strict creation of only one
variant of related objects. Also adding new variation won't require any extra work, because we
can just create correspondig objects and factory.

Probably biggest disadvantage of this approach is that opposed to adding new variant, adding new
object to set of related object could be a lot of work, because it will require change in the interface
and thereffor changes in all existing factories.
