# LAZY LOAD

#### GENERAL

**Creational** design pattern that allows us to delay object creation until such time when it's actually needed.

#### USAGE

It's mostly used in web applications to reduce initial loading time. Generally though, it's essential in any situation
where object creation is extremely costly but its usage rather rare.

#### STRUCTURE

TL;DR behaviour - the object that implements lazy loading sets all his values (or the most expensive ones at least) to
null by default and in its methods the first thing is to always check whether the needed values are set. If they aren't
then it fills them with real values during the first method call.

NOTE: mentioned approach is called **lazy initialization** which is probably the most common one, but there are three
other - **virtual proxy**, **value holder** and **ghost**

#### EXAMPLE

Let's imagine following situation in the context of aforementioned [prototype](../README.md#prototype). The **scraper**
which is responsible for acquiring data from the web (i.e. running several web crawlers), should also backup every website (i.e. HTML)
it downloads to an external DWH (data warehouse). To save resources each crawler should only connect to the DWH when
and if it has something to backup.

#### SOLUTION

One way to meet the set criteria is to use **Lazy Initialization** in an object that wraps DWH connection. Basically
the connection class will wrap some sort of connector (third-party networking code) which will be set to null by default
and only filled with real object when the backup process is triggered with some actual data.

Dummy implementation of this [example/solution](src) and [how to use it](main.cpp) is part of this directory.

#### SUMMARY

Main advantage of this approach is that if the web crawler completely fails and doesn't have anything to backup, it
won't create any unnecessary connection to DWH.

Slight disadvantage and thing to keep in mind is that the first method invocation on an object which implement lazy loading
can be much slower as it has to create/acquire all the necessary data (in this case establish the connection to DWH).
