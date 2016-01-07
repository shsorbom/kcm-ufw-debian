# Introduction

This is a KDE control center module to configure and control the Uncomplicated
Firewall, as shipped with Kubuntu 15.10. The following features are supported:

1. Enable/disable firewall
2. Configure firewall default settings
3. Add, edit, and remove rules
4. Re-order rules via drag'n'drop
5. Creation, and basic manipulation, of firewall profiles
6. Import/export of firewall profiles
7. Setting of some IP tables modules

**NOTE:** The following features have regressed in the kf5 build:
- Firewall Profile Handling
- Firewall event logging

Normal functionality will return soon.

# Components

The code is split into 3 main parts:

1. GUI - this is the main control module
2. KAuth helper - kcm_ufw_helper. This a simpe C++ application that receives
   instructions (via KAuth) from the control module - it then invokes the
   appropriate commands on the python helper.
3. UFW interface - kcm_ufw_helper.py. This performs all the actions upon UFW.
   Its written in Python to take advantage of UFW's python API.

# Build Dependencies
On Debian and Ubuntu systems, the following packages must be installed:
- ufw
- python-ufw
- extra-cmake-modules,
- kio-dev,
- libkf5auth-dev,
- libkf5configwidgets-dev,
- libkf5coreaddons-dev,
- libkf5crash-dev,
- libkf5i18n-dev,
- libkf5service-dev,
- libkf5widgetsaddons-dev,
- pkg-kde-tools,
- qtbase5-dev,

These packages names may vary on other GNU/Linux distributions.

# Installation

To build and install:

## New Instructions (KF5)
``` 
mkdir build
cd build
sudo cmake ../CMakeLists.txt -DKDE_INSTALL_USE_QT_SYS_PATHS=ON -DCMAKE_INSTALL_PREFIX:PATH=/usr
sudo make install
kbuildsycoca5

```
## Old Instructions (KDE 4)
1. mkdir build
2. cd build
3. cmake .. -DCMAKE_INSTALL_PREFIX=\`kde4-config --prefix\`
4. make
5. sudo make install

# Errata
The following options may be passed to CMake:

```
-DUFW_TRANSLATIONS=<list of translations to install>
```                
   Builds and installs the selected translations. Supported values are
   en, es, fr, lt, and all. Entries should be separated with a semicolon
   (";") e.g. `-DUFW_TRANSLATIONS="es;fr;lt"`
   Default: all

---
For those wishing to build against kf5, the kf5 port is on the `working_changes` branch
