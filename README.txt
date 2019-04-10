Project: OpenCV

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

-Open GL
    Open GL is a great graphics library. I believe some elements exist in other packages they use, but it looks 
    like they use open gl for image rendering and windows

 There are some python packages listed in the instilation, but I believe that is
 to make OpenCV portable.

 I believe OpenCV uses their own test system. It is very messy but provides a lot of data. 
There is a directory for each package. Each package stores its individual test data there. 
This allows each package to be tested indipendently. 







