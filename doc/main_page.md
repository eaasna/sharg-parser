# Welcome {#mainpage}

Welcome to the documentation of the SeqAn library.
This web-site contains the API reference (documentation of our interfaces) and more elaborate Tutorials and
How-Tos.

If you are new to SeqAn, we recommend that you begin by reading \ref setup.

In contrast to the Tutorials (which are expected to be useful for all developers), the How-Tos contain more advanced
or specific guides.

\ref cookbook contains a listing of code snippets, or *recipes* that might prove helpful once you
have finished the full tutorial and you are implementing your own code.
When you are looking for some inspiration on how to perform a particular task or when you searching for something you
already know - its on the tip of your tongue - but you can't remember the syntax, take a look here.

Before you publish and/or redistribute software based on SeqAn, please read through the notes on \ref about_copyright
and \ref about_citing.
There are few requirements beyond proper attribution, but this requirement we take seriously as it is the basis of
acquiring funding for the future development and maintenance of SeqAn.

Resources outside of this web-site that might be useful:

  * The [project homepage](https://www.seqan.de) with news and application pages.
  * The [GitHub repository](https://github.com/seqan/seqan3) with issue tracker and downloads.

### Some notes on using this documentation

We use [doxygen](https://doxygen.nl) to generate our documentation.
It may not be the most beautiful system, but it works quite well in practice.
If you spot any dead links in the documentation, please open an issue at our bug-tracker (see above) or
[directly submit a pull request](\ref about_contributing) fixing the problem.

The documentation is versioned together with the library, see https://docs.seqan.de for release-specific
documentation builds.
The tutorial on \ref setup_tests contains instructions for setting up local documentation builds.

Since doxygen does not support many modern C++ features, some parts of the documentation may not describe
the interfaces completely. In particular, many *constraints* are only expressed verbally in the documentation of
an interface and not as part of that interface's code. Also *C++ concepts* are currently called "interfaces" throughout
the documentation.
