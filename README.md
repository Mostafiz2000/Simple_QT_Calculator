# Simple_QT_Calculator

A lightweight, cross-platform calculator app developed with C++ and Qt, now featuring CI/CD automation.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Installation & Build](#installation--build)
- [CI/CD Pipeline](#cicd-pipeline)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Overview
**Simple_QT_Calculator** is a modern calculator built using Qt (C++), offering a clean, intuitive UI for performing basic arithmetic operations. The project is designed for cross-platform compatibility—Linux, Windows, and macOS—and includes a GitHub Actions-powered CI/CD setup for automated builds and testing.

---

## Features
-  Clean, responsive GUI intuitive for all users
-  Supports basic arithmetic: addition, subtraction, multiplication, and division
-  Robust error handling (e.g., divide by zero, invalid inputs)
-  Cross-platform support via Qt framework
-  Automated CI/CD with GitHub Actions for streamlined build and test workflows
---

## Requirements
- Qt 5.12 or later (adjust version as necessary)
- C++17 compliant compiler
- qmake or CMake (whichever your project uses)
- Git (for cloning the repository)

---

## Installation & Build

```bash
# Clone the repository
git clone https://github.com/Mostafiz2000/Simple_QT_Calculator.git
cd Simple_QT_Calculator

# Build the project
qmake
make

# Run the application
./Simple_QT_Calculator
