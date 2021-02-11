## cpptemplate
A template for C and CPP projects.

# Description

This is a skeleton that you can use for your own project skiping part related to crafting makefiles and downloading/building necessary dependencies.

The project contains a makefile + example project which allows building application written in C or/and C++, builing the app with address sanitizer if needed, building unit tests.
One of the iteresting feature is boostrap.sh. It simply download sources of your dependecies, extracts & builds. The dependencies will be kept locally and there is no need to run this script as a superuser.
