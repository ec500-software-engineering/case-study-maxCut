Project: OpenCV

Brief intro, Open CV is a image editing library that works for C++ and python.
It is gteat for being able to quickly and efficiently process images and videos.


Technologies and platfform used:
 -Languages used.
 - C++
 - python(some features are portable to python, and thus there exists some python Code.
 Other than portability it is written in c++.

 - One thing I would consider is more heavily intigrating c#. Many games rely on game 
 engines written in c#. It would be nice if opencv had that native intigration available.



 -build is done with cmake. 


 There are a lot of packages it uses, it seems extensive to list all of them.
 The main ones to note are:
 -ffmpeg
    This one is pretty logical. Opencv is a graphics library. It makes sense to make use
    of ffmpeg image and video analysis. Since they are doing this they can build most of their tools
    on top off ffmppeg.
 -GTK
    Similarly GTK is very helpful. GTK is a more bear bones graphics library than opencv,
    but they have some excelent teqniques for image processing and displaying which opencv built upon.
 -CUDA
    CUDA is a paralelization library. It is actually just considered freeware. It makes sense that opencv 
    used this library since many graphical applications can easily be paralelized. CUDA likely is used purely
    to optimize on graphics cards.

 There are some python packages listed in the instilation, but I believe that is
 to make OpenCV portable.

 I believe OpenCV uses their own test system. It is very messy but provides a lot of data. 
There is a directory for each package. Each package stores its individual test data there. 
This allows each package to be tested indipendently. 


Software Architecture
Each branch of features is treated as an independent module (in reality opencv is really a bunch
of projects that share a name)

Most of the modules are dependent on opencv core, which controls all the opencv data structures.
as well as cuda opetimizations and conversions. It also contains some commonly used static algorithms.
and inheritance from other open source projects.

another important module is highgui. highgui is in charge of making neat windows to display output.

I won't go into too much detail since there are a large number of modules, but each module attempts to be an independent library.
They have modules for ml, 3d, photo, objdetection, python ect. all of which allow users to customize their opencv experience.


Defects
Some things that bothered me were the way they store images by default. They use a BGR system as opposed to the RGB standard.
You can convert images to RGB but it is still annoying and troublesom if you want to use opencv with other libraries. 

The way it iterates over pixels is very slow, so you need to use a series of masks in order to be efficient.

The documentation could be much better especially when stating which module a feature is in. A lot of the documentation
makes it seem like opencv is one giant module and so often times it becomes nessicary to check what module a function is in
on stack overflow. 

Demo
try running 
./build.sh
followed by
./a.out

