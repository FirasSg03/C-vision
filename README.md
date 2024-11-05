# chess-vision

[![GitHub License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![C++ Version](https://img.shields.io/badge/C%2B%2B-11%2B-blue.svg)](https://isocpp.org/)

## Table of Contents
- [Description](#description)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Commands](#commands)
- [License](#license)
- [Contact](#contact)

## Description
This C++ program uses OpenCV to detect faces in an image or a video feed. It utilizes a pre-trained Haar Cascade classifier to locate faces, draws rectangles around detected faces, and displays the count of faces found on the screen.

## Installation
1. Install OpenCV by following the official OpenCV installation guide.
2. Ensure the haarcascade_frontalface_default.xml file (Haar Cascade model) is downloaded and placed in the working directory

## Usage
1. For detecting faces in an image:
  Set path to the desired image file.
  Run the program to display the image with faces highlighted.
2. For real-time face detection using a webcam (commented out in the code):
  Enable the VideoCapture section in main().
  The program will detect faces in a video stream and display them in real-time.

## Features
- Face Detection: Detects multiple faces in an image or video feed.
- Face Highlighting: Draws rectangles around detected faces.
- Face Count Display: Shows the number of faces detected on the screen

## Licence
This project is licensed under the MIT License

## Contact
Feel free to contact me at f.sghiri01@email.com.
