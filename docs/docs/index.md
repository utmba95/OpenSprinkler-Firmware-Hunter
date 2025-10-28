# OpenSprinkler Firmware and Documentation

This Github repository contains the firmware source code and documentation for OpenSprinkler.

* For product details, visit [https://opensprinkler.com](https://opensprinkler.com).
* For firmware release notes, visit the [OpenSprinkler Firmware Releases](https://github.com/OpenSprinkler/OpenSprinkler-Firmware/releases) page on GitHub.

---

## Compile the Firmware for OpenSprinkler v3.x and v2.3

The firmware compilation instructions below are for OpenSprinkler **v3.x and v2.3** only.
<br>For RPi and Linux-based OpenSprinkler (OSPi), follow the [instructions are here](https://openthings.freshdesk.com/support/solutions/articles/5000631599-installing-and-updating-the-unified-firmware-on-ospi).

### Environment Setup
1.  Download and unzip (or git clone) this (`OpenSprinkler-Firmware`) repository.
2.  Install the latest LTS version of Node.js from [https://nodejs.org/](https://nodejs.org/) if you don't already have it.
3.  In your terminal, navigate to the `OpenSprinkler-Firmware` folder (the source code folder) and run `npm install html-minifier-terser`.
4.  Install Visual Studio Code (VS Code) from [https://code.visualstudio.com/](https://code.visualstudio.com/), if you don't already have it.
5.  Launch VS Code and install the **PlatformIO** extension.

### Building the Firmware
1.  In VS Code, click `File -> Open Folder` and select the `OpenSprinkler-Firmware` folder.
2.  PlatformIO will recognize the `platformio.ini` file in that folder, which contains all the libraries and settings needed to compile the firmware.
3.  Click the **PlatformIO: Build** button (with the checkmark icon ✓) in the blue status bar at the bottom of the screen to build the firmware.
4.  The default build environment is for OpenSprinkler v3.x (`env:os3x_esp8266`). To build for OpenSprinkler v2.3, switch to `env:os23_atmega1284p`.

---

## Firmware Update Instructions

OpenSprinkler firmware supports OTA (over-the-air) updates, allowing you to upload the firmware directly through the web UI.

### Update Steps
1.  [Download a firmware file](#list-of-opengarage-firmwares) (e.g. `og_x.x.x.bin` where `x.x.x` is the firmware version).
2.  Before starting, close the Blynk and OpenGarage mobile apps to prevent them from interfering with the update process.
3.  Open your OpenGarage's homepage, click `Firmware Update` at the bottom of the page.
    - *If your OpenGarage is in WiFi AP (Access Point) mode, the update page is available at `http://192.168.4.1/update`.*
4.  Select the firmware file your downloaded, enter your device key, and click `Submit`.
5.  Wait for the process to finish. If the upload fails, you can try again. If the device hangs, unplug and replug the power, then try again.

### Troubleshooting
* **Firmware Corruption**: If the firmware upload fails and the device no longer boots, you'll need to re-flash the firmware using a [USB-serial programmer](https://opensprinkler.com/product/usb-programmer/).
* **Factory Reset Warning**: Upgrading across major revisions (e.g. from 2.2.0 to 2.2.1) will **erase all setings** due to changes in the flash memory layout. Be sure to export your configurations to a file before proceeding.

### List of OpenSprinkler Firmwares

The release notes of each firmware can be found on [github](https://github.com/OpenSprinkler/OpenSprinkler-Firmware/releases).

| Download | Documentation |
|:------- |:---------------|
| [**`1.2.4.bin`**](assets/bins/og_1.2.4.bin) | [[Manual](1.2.4/manual.md)], [[API](1.2.4/api.md)] |
| [`1.2.3.bin`](assets/bins/og_1.2.3.bin) | [Docs](archive.md) |
| [`1.2.1.bin`](assets/bins/og_1.2.1.bin) | |
| [`1.2.0.bin`](assets/bins/og_1.2.0.bin) | [Archive](archive.md) |
| [`1.1.3.bin`](assets/bins/og_1.1.3.bin) | |
| [`1.1.2.bin`](assets/bins/og_1.1.2.bin) | [Archive](archive.md) |
| [`1.1.1.bin`](assets/bins/og_1.1.1.bin) | |
| [`1.1.0.bin`](assets/bins/og_1.1.0.bin) | |
| [`1.0.9.bin`](assets/bins/og_1.0.9.bin) | [Archive](archive.md) |
| [`1.0.8.bin`](assets/bins/og_1.0.8.bin) | |
| [`1.0.7.bin`](assets/bins/og_1.0.7.bin) | [Archive](archive.md) |
| [`1.0.6.bin`](assets/bins/og_1.0.6.bin) | [Archive](archive.md) |
| [`1.0.5.bin`](assets/bins/og_1.0.5.bin) | [Archive](archive.md) |
| [`1.0.4.bin`](assets/bins/og_1.0.4.bin) | [Archive](archive.md) |
| [`1.0.3.bin`](assets/bins/og_1.0.3.bin) | |



---
