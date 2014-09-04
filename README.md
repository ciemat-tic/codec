#CODEC

##Intro
This is the source repository of CODEC project.

Note that this is developer-oriented documentation. In order to download the code and obtain user-oriented documentation, you can do it [here](https://ciemat-tic.github.io/CODEC/)

##Disclaimer
Full license of open-MPI is located in README_OMPI file



##Required tools  for CODEC developers

###Tools

Right now, the recommended tools are

1. [GitHub](https://github.com/ciemat-tic/CODEC) for source repository

2. [Waffle](https://waffle.io/ciemat-tic/codec) for a high level vision of the ticket status in a AGILE-Scrum approach

3. [SmartGIT] (http://www.syntevo.com/smartgit) as local GIT GUI

4. [Sublime Text] (http://www.sublimetext.com) as source code editor

###GitHub

First, register! Don't forget to choose a photo avatar.  This will be your identification all around the project.

Then, ask to join "ciemat-tic" organization, and you'll be able to collaborate on this project.

Aaaand that's pretty much everything.

###Starting with GIT

In this project we are going to follow the Workflow Feature Branch for the collaborative edition of the code. The basic idea is that we are going to make a branch for every new feature, and when it is well tested we will merge it with the main one.

A reference can be obtained [here](./doc/2\_Feature\_Branch\_Workflow.pdf) . If too complex, [this](./doc/1\_centralized\_workflow.pdf) can be employed as a starting point.


This comes down to:

0. Install **git** package from your favorite package manager

1. Make a local copy
```bash
git clone https://github.com/ciemat-tic/CODEC.git
```

2. Make a branch of your desired functionality
```bash
git checkout -b documentation master
```
   Switched to a new branch 'documentation'

3. Work on it. Ej, add some files
```bash
mkdir doc 
   (add files on doc)
git add doc
git status <- check status
git commit <- join all changes and consider them as a "unit"
   git commit -a  <- to commit all changes at once
```

4. Upload to central server as a new branch
```bash
git push -u origin documentation  
```
   -u: create branch with history and blabla
   -origin: target repository. Origin = the original one.
   -documentation: branch to upload

   after this, future uploads of the same branch only need “git push”

5. Please regard that this can all controlled with *SmartGIT*. However, it is best to do it by hand to understand it before employing a GUI.


###Starting with Sublime

1. Download and install it

2. Open the project folder

3. Save it as a project

aaaand that's pretty much everything to start working with it.


##Working in CODEC


###Introduction to AGILE-SCRUM methodology

**TODO**



###Introdudction to openMPI

**TODO**

There are some recommended videos, watch them


###Compiling openMPI

- Obtain source. Read the GIT section for reference.

- Needed dependences
    official info: http://www.open-mpi.org/svn/building.php
    in my case: sudo yum install m4 autoconf automake libtool flex libtool-ltdl-devel libtool-ltdl

- Compile
```bash
./autogen.pl
./configure –prefix=$HOME/openmpi-install
make
make install
```

###Testing your code

There is a great package called **MTT-MPI TESTING TOOL** devoted to perform automatic tests, so you can check that you didn't break anything. It is straightforward to use.

- Install
```bash
git clone http://github.com/open-mpi/mtt
```

**TO DO**
