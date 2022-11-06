# DESIGN PATTERNS

This project aspires to educate junior developers in one fairly useful portion of application design, i.e. 
**design patterns**. It describes a context of fictional software [prototype](#prototype) within which individual 
patterns are explained. All examples then stand completely independent of each other but still reflect particular 
parts of the prototype. 

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

#### BACKSTORY

Let's imagine there is an unnamed bank. Main purpose of any bank is to give out loans. But if you think about it, banks
can't actually hand out money at random. They need the people to repay them, otherwise they'd go out of business pretty
damn fast. In this day and age, the biggest banks use devious apps to acquire public information about potential clients, 
which are then used as indicators of ones repayment capacity.

#### GENERAL

Our prototype shall be an app, which is a part of a so-called "scoring process", that is triggered with each loan request.
Main purpose of this app will be scraping client's public data and based on them calculating a score (i.e. probability), 
that exhibits client's repayment ability.

NOTE: In real-world examples, such a score would be only one of dozens different indicators, and thanks to its nature 
and reliance on public information, it wouldn't really hold such a high importance in the grand scheme of things.

### ARCHITECTURE

![prototype-architecture](./prototype-architecture.svg)

The prototype is designed using microservice architecture mainly 'cause of its extremely high fault tolerance and 
exceptionally fast DRs (Disaster Recovery). Besides all that, this architecture is also highly scalable and excels in 
"on the fly" version releases with almost zero downtime. 

There are 4 main services:

- **REQUEST HANDLER** is a service responsible for handling communication with other systems (exposes API for requests)
- **SCRAPER** is a service responsible for crawling through a set of websites and collecting relevant info about given client
- **TRANSFORMER** is a service responsible for going through the scraped data and transforming them into numerical values
- **MODELER** is a service responsible for fitting the transformed data into some statistical model and running calculations

Besides these services, the app has an internal **database** used for storing final results and is connected to an 
external **data warehouse** where it logs every last piece of scraped information for audit purposes.

### DATA FLOW

[TODO] rewrite

App accepts new request in request handler service and checks whether there is already recently
calculated score for given client in DB. If yes it returns it otherwise it creates in-progress
entry in the DB and sends the request along to scraper which is then responsible for searching 
the web and finding public data. Everything it finds is then passed along to transformer which 
transforms the data into numerical values which are then passed to modeler which uses them to 
calculate some final score using statistic models. This score is finally returned to req handler 
which stores it in the DB and returns it to the original client.

### THIRD-PARTY COMPONENTS 

Following platforms are merely used as examples and can be swapped out for others with analogical functions.

- **OpenShift** Container Platform is RedHat's on-premise cloud for hosting application, built around Linux containers orchestrated by Kubernetes.
- **Kafka** is a distributed event streaming platform by Apache, used mainly as a high-performance data pipeline.
