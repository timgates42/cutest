# Cutest

Cutest is an acronym that can be undestood as ``C`` ``u``nit ``te``st.

This library brings a bunch of macros in order to guide the implementation of unit tests for ``C`` projects.

It brings a minimal memory leak detection system (fully working on ``Linux`` and ``Windows``).

It is possible customize the logs generated by your tests if you want to.

## How to build it?

To build ``cutest`` the [hefesto](https://github.com/rafael-santiago/hefesto.git) usage is necessary. Being
``Hefesto`` installed in your system all you need to emit on a ``shell`` inside the cutest's ``src`` subdirectory is:

``hefesto``

After a file named ``libcutest.a`` which stands for the library will be generated under the path ``src/lib``.
Now just use this file and the header ``src/cutest.h`` to develop your further ``unit tests``.

Note that the build was written based on ``GCC``. So, you need to have the ``gcc``/``mingw`` installed (and well exported)
on your system before going ahead.

Maybe you should read the [documentation](https://github.com/rafael-santiago/cutest/blob/master/doc/README.md) before starting.

### Note for Visual Studio users

If you want to build ``cutest`` under ``MSVC`` you need to use ``Forgefile-msvc.hsl`` instead of the default ``Forgefile.hsl`` script.
For this goal the build command changes a little. Being inside the cutest's ``src`` subdirectory:

``hefesto --forgefile=Forgefile-msvc.hsl --Forgefile-msvc-projects=cutest``

After run the command above a file named ``libcutest.lib`` will be generated inside ``src/lib`` path.
Note that use ``cutest`` on ``MSVC`` is a little bit tricky. It envolves composite the ``cutest`` with your current ``msvcrt.lib``
(it explains why the ``cutest.lib`` is so huge).

Another point is that this experimental build was written for ``Visual Studio 2012`` only.

If you want to generate a debug version try:

``hefesto --forgefile=Forgefile-msvc.hsl --Forgefile-msvc-projects=cutest --compile-model=debug``
