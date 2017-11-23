
Debian
====================
This directory contains files used to package shiabitd/shiabit-qt
for Debian-based Linux systems. If you compile shiabitd/shiabit-qt yourself, there are some useful files here.

## shiabit: URI support ##


shiabit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install shiabit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your shiabit-qt binary to `/usr/bin`
and the `../../share/pixmaps/shiabit128.png` to `/usr/share/pixmaps`

shiabit-qt.protocol (KDE)

