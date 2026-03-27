# Project Name: ARM Utility

A brief description of what this program does and why it is useful for FreeBSD on ARM.

## Prerequisites
* FreeBSD 13.0 or later recommended.
* Standard BSD build tools (installed by default).
* If cross-compiling from amd64: `qemu-user-static` (optional but helpful).

## Building the Project
This project uses the native FreeBSD BSD Make system.

### Native Build (On an ARM board)
To build directly on your ARM device:
```bash
make
