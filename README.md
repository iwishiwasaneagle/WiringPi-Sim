# WiringPi-Sim

Forked from [dotsha747](https://github.com/dotsha747/WiringPi-Sim) due to inactivity. I needed a few more wiringPi functions, such as `wiringPiISR`, and as such decided to revamp this repo.

## Installation

```bash
cd [YOUR DESIRED INSTALL DIR (such as /opt)]
git clone https://github.com/iwishiwasaneagle/wiringPi-sim
cd wiringPi-sim
./install.sh
```

To uninstall `cd` into `_build` and run `make uninstall`.

## Usage

The sole purpose of this library is to simulate wiringPi. As such, just use it like wiringPi. For examples on how to use, visit the [examples](./examples) folder.


## Old README

```
*** A Dummy Wiring-Pi Library ***

WiringPi is an excellent library for accessing GPIO and other hardware on the
Raspberry Pi, written by Gordon Henderson (http://wiringpi.com). When using it
I often would like to compile and test my program on my desktop ubuntu system, 
before finally porting it to the Pi. Unfortunately, there is no wiringPi library
in Ubuntu. 

I built this simple library of stubs, so I could compile my Raspberry Pi programs
on Ubuntu. The wiringPi methods are just no-op stubs, and do nothing, but it does
allow the program to compile. Only the core library functions exist at the moment.

I might expand it in the future to actually simulate the real GPIO pin behaviour,
and have some UI that can toggle simulated switches and so on. Or maybe have it
talk over the network to a Pi and interact with the real GPIO. But for now all
I need is this stub library. 8-)

wget -O- http://repo.shahada.abubakar.net/pubkey.asc | sudo apt-key add -
cd /etc/apt/sources.list.d
sudo wget http://repo.shahada.abubakar.net/repo.shahada.abubakar.net.sources.list
sudo apt-get install wiringpi-sim
```
