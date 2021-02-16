## cpptemplate
A template for C and CPP projects.

# Description

This is a skeleton that you can use for your own projects skipping part related to crafting makefiles and downloading/building necessary dependencies.

The project contains a makefile + example project which allows you building an application written in C or/and C++, builing the app with address sanitizer if needed, building unit tests.
One of the iteresting feature is boostrap.sh. It simply downloads sources of your dependecies, extracts & builds that. The dependencies will be kept locally so you can easily debug any issues and wallk through source codes. There is no need to run this script as a superuser.
Check out examples in bootstrap directory - you'll quickly figure out what's going on.
