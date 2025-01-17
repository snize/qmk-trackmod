# southern_cross_tb


*A modified version of the southern_cross keyboard project with added functionality for trackball support.*

![Modified Schematic](https://pbs.twimg.com/media/GhfVbzVacAAVlGg?format=png&name=large)

* Keyboard Maintainer: [snize](https://github.com/snize) (based on the original work by [swan_match](https://github.com/swanmatch/qmk_firmware))
* Hardware Supported: *The PCBs, controllers supported with additional trackball support.*
* Hardware Availability: 
  * [SouthernCross](https://royal-keyboard-works.square.site/product/SouthernCross/18)
  * [PMW3360 breakout board \- SUMI（墨）](https://github.com/snize/BOB-PMW3360-SUMI?tab=readme-ov-file)

Make example for this keyboard (after setting up your build environment):

    make southern_cross_tb:default

Flashing example for this keyboard:

    make southern_cross_tb:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

---

## Changes from the original southern_cross project

1. Added trackball support using the PMW3610 optical sensor.
2. Updated firmware configuration to support enhanced features.

---

## Licensing

This project is based on the southern_cross keyboard, originally developed by [swan_match](https://github.com/swanmatch). It is distributed under the terms of the GNU General Public License (GPL), version 2 or later. For more details, see [http://www.gnu.org/licenses/](http://www.gnu.org/licenses/).
