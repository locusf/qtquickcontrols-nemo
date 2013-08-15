This project will be moved out to nemomobile-packages ASAP, as Nemo is not upstream.

Original README:


ABOUT

This project aims to deliver widgets/controls functionality with Qt Quick.

Some more information can be found on the following blog entries:

https://blog.qt.digia.com/blog/2011/03/10/qml-components-for-desktop/
https://blog.qt.digia.com/blog/2011/05/26/table-view-with-qt-quick/
https://blog.qt.digia.com/blog/2011/08/26/toplevel-windows-and-menus-with-qt-quick/


HELP

If you have problems or questions, feel free to ask on the QML mailing list at qt-qml@qt.nokia.com
or alternatively the Qt Developer Network: http://qt-project.org/forums/viewforum/12/
You can also contact the maintainer at: jens.bache-wiig (at) digia (dot) com


INSTALLATION

Note the MINIMUM REQUIREMENT for this project is that you have Qt 5.0. (Qt Quick 2)

The components rely on several C++ plugins in order to integrate with the desktop. To install the
components into your Qt directory, simply enter the root directory and do:

'qmake && make install'

This will compile and copy the plugins and components into your QTDIR/qml folder.
If you are compiling against a system Qt on linux, you might have to do a 'sudo make install'
in order to install the project.


USAGE

The examples should show how you can use the components. If you use code that makes use of
Window or MenuBar, you will have to start your application with the desktopviewer launcher
application. This is because it will ensure that the QMLViewer application itself does not
show and make up the main window in your application.

Again, please refer to :
https://blog.qt.digia.com/blog/2011/08/26/toplevel-windows-and-menus-with-qt-quick/

For more information on this.
