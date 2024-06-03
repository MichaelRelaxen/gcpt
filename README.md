# Black Label Timer Mod
[This mod](<https://github.com/MichaelRelaxen/gcpt>) times RaC2 black label runs in a hardware-independent way. It removes black (loading) screens, and automatically does long load removal and normalisation. 

To use it, load the mod (details below) and the mod should automatically reset your timer when you load a fresh save file on aranos 1. After killing the protopet on yeedil, the timer should freeze; time warp to before killing the protopet to see the final time of your run with extra loading times removed. 
Additionally, you can use the combo `L1+L2+R1+R2` to toggle the display of the timer. It's on by default but you can turn it off if it's distracting. 

## Installation
The mod comes as a .pnach file which modifies the game's code. 

To run it on emulator (PCSX2) you can put the `.pnach` file into the cheats directory, then enable cheats.

To run the mod on console with Disc:
1. Download [ps2rdmod](https://www.psx-place.com/threads/ps2rdmod-by-pelvicthrustman.19168/).
2. Download the [.pnach file](https://github.com/MichaelRelaxen/gcpt/releases/latest/download/38996035.pnach) and put it inside the PNACH folder that comes with ps2rdmod.
3. Put the files on a flash drive and plug it into your PS2.
4. Run the `ps2rd.elf` using uLaunchELF via FreeMcBoot or Fortuna memory card.

## Known Issues
- Some graphical bugs with the timer are present during autosaves, pauses, cutscenes etc.
- If you use progressive scan you'll need to play a cinematic from the menu to get the timer to display.
We're looking for people to test this!! Please report any issues you find!

## Build Instructions
To build, install [docker](https://docker.com/)
```
docker pull ps2dev/ps2dev:v1.2.0
docker run -it --rm -v "$PWD\:/src" ps2dev/ps2dev:v1.2.0
cd src
cd gcpt
./docker-init.sh
```

Then build:
```
make clean && make
```

NOTE: The docker-init script is known to fail due to inconsistent line endings when your git is configured to convert line endings (windows). If this is the case you can either replace all line endings in the file with LF or just run each command in the script manually.


## Credits
[deadlocked-cheats](https://github.com/Dnawrkshp/deadlocked-cheats) contributors
