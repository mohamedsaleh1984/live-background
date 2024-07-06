# Live Background

The purpose of this project is to create LIVE/Animated background for **LINUX/UBUNTU**

### How it works.
- Feed Video file.mp4
- Generate Images using **ffmpeg**
- Create a service to handle keep switching.

Dependencies:
Python, ffmpeg

References:
[ffmpeg](https://www.ffmpeg.org/ffmpeg.html)

### ROADBLOCK
I developed the service in a different branch, and while it is conceptually sound, it is not a viable solution due to the process bootstrap time, which is millisecond differences between each image.

### Solution  <R&D>
Disassemble the tool and incorporate the code directly into the service instead.