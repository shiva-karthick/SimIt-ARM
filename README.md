# SimIt-ARM

Thanks 🤗🤗🤗 to the original author who is [weiqin04](https://sourceforge.net/u/weiqin04/profile/) from [simit-arm](https://sourceforge.net/projects/simit-arm/)
This version of SimIt-ARM is made to run for modern x86_64 systems. I am happy to takeover from this author who has written this wonderful piece of software.

SimIt-ARM 3.0 currently contains a functional simulator for the
ARM v5 architecture. It supports both user-level simulation and
system-level simulation.

To install, untar the source by

```bash
tar xzvf SimIt-ARM-3.0.tar.gz
cd SimIt-ARM-3.0
```

then, pick an installation director <prefix>. The default <prefix> is the build/
directory under the SimIt-ARM-3.0 directory

```bash
./configure --prefix=<prefix> ( or simply ./configure )
make
make install
```

The <prefix>/bin directory will contain 1 file:
ema - ARM instruction set simulator

After installation, suppose that you are still under
the SimIt-ARM-3.0 directory, you can test the simulator by doing
the following:

```bash
cd test
<prefix>/bin/ema wc ../configure
```

wc is the UNIX utility word count. The above command interprets the
cross-compiled wc program to count the words in the configure file.
You can also test system-level simulation by doing the following:

```bash
<prefix>/bin/ema -s sa1100.cfg
```

The above program will boot the "vmlinux" image, a Linux 2.4.19 kernel
configured for the SA1100 processor. The configuration file "sa1100.cfg"
specifies some architecture information of the system to simulate.
The file and the related binary images can be downloaded from Simit-ARM
website.
