Shiabit Core 0.12.1
=====================

Setup
---------------------
[Shiabit Core](http://shiabit.org/en/download) is the original Shiabit client and it builds the backbone of the network. However, it downloads and stores the entire history of Shiabit transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

Running
---------------------
The following are some helpful notes on how to run Shiabit on your native platform.

### Unix

You need the Qt4 run-time libraries to run Shiabit-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/shiabit-qt (GUI, 32-bit) or bin/32/shiabitd (headless, 32-bit)
- bin/64/shiabit-qt (GUI, 64-bit) or bin/64/shiabitd (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run shiabit-qt.exe.

### OS X

Drag Shiabit-Core to your applications folder, and then run Shiabit-Core.

### Need Help?

* See the documentation at the [Shiabit Wiki](https://en.shiabit.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#shiabit](http://webchat.freenode.net?channels=shiabit) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=shiabit).
* Ask for help on the [ShiabitTalk](https://shiabittalk.org/) forums, in the [Technical Support board](https://shiabittalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Shiabit on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Shiabit repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/shiabit/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [ShiabitTalk](https://shiabittalk.org/) forums, in the [Development & Technical Discussion board](https://shiabittalk.org/index.php?board=6.0).
* Discuss project-specific development on #shiabit-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=shiabit-core-dev).
* Discuss general Shiabit development on #shiabit-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=shiabit-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
