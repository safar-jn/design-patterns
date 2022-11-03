# DESIGN PATTERNS

This project aims to educate junior developers in one fairly useful portion of application design, i.e. **design patterns**.
It describes a context of fictional software [prototype](#prototype) within which individual patterns are explained.
All examples then stand completely independent of each other but still reflect particular parts of the prototype. 

**CREATIONAL**
- [pattertn_template](./pattern_template)

**STRUCTURAL**
- [pattertn_template](./pattern_template)

**BEHAVIORAL**
- [pattertn_template](./pattern_template)

**CONCURRENT**
- [pattertn_template](./pattern_template)

---

# PROTOTYPE

[TODO] generic description of what, why and how

Let us imaagine there is an unnamed bank.
Main purpose of any bank to give out various types of loans, while assertaining some sort of a guarantee
that they will give out loans to people who can actually repay them back.
In this day and age biggest banks actually use several publically known information about any given
client as indicatiors whether they'll be able to afford repayments.

Our prototype shall be an application, which is part of a so called "scoring process" of a client,
that's called with each loan request and its main purpose is to scrape public data about said client
and based on them calculate probability about how probable it is that the client in question won't
be able to make payments (i.e. he will bankrupt or smthing).
NOTE that in real-world examples such application/probablity is only one of dozens such indicators
and because of it using mainly public data, actually doestn hold such a high importance in the
grand scheme of things.

### ARCHITECTURE

![prototype-architecture](./prototype-architecture.svg)

[TODO] high-level description of individual components

App uses microservice architecure beacause high scalability, fast and relatively easy DR aka fault tolerance
almost zero downtime during release of a new version.

- **REQUEST HANDLER** is a microservice responsible for handling communication with clients
- **SCRAPER** is microservice responsible for crawling through a set of websites and downloading all relevant info about given client
- **TRANSFORMER** is a microservice responsible for assigning individual values in the scraped data some numerical values
- **MODELER** is a microservice responsible for calculating final score usign some mathematical models

### DATA FLOW

App accepts new request in request handler service and checks whether there is already recently
calculated score for given client in DB. If yes it returns it otherwise it creates in-progress
entry in the DB and sends the request along to scraper which is then responsible for searching 
the web and finding public data. Everything it finds is then passed along to transformer which 
transforms the data into numerical values which are then passed to modeler which uses them to 
calculate some final score using statistic models. This score is finally returned to req handler 
which stores it in the DB and returns it to the original client.

### THIRD-PARTY COMPONENTS 

These platforms are merely meant to be used as examples and can be swapped out for others that provide the same functions.

- **OpenShift** Container Platform is RedHat's on-premise cloud for hosting application, built around Linux containers orchestrated by Kubernetes.
- **Kafka** is a distributed event streaming platform by Apache, used mainly as a high-performance data pipeline.
