# Add-matrix-operations-for-Open-CV-Mini-Wasm-Plugin

**FIRST PART**

Follow these steps one by one in your terminal (command prompt). Here's a clarification of each step:

1. Clone the Repository:
   Open your terminal and execute these commands:
   ```bash
   git clone https://github.com/WasmEdge/WasmEdge.git
   cd WasmEdge
   ```

2. Install Dependencies:
   Make sure you have CMake and Ninja installed on your system.

3. Configure the Build:
   In the terminal:
   ```bash
   mkdir build && cd build
   cmake -GNinja ..
   ```

4. Build WasmEdge:
   Continue in the terminal:
   ```bash
   ninja
   ```

5. Install WasmEdge:
   After the build is complete:
   ```bash
   sudo ninja install
   ```

Each step is a separate command that you should run in your terminal. These commands are used to build and install WasmEdge with its plugins from the source code repository.


**SECOND PART**

Compile the Program:
In your terminal, navigate to the project directory and compile the program using g++ (assuming your source file is named "image_filter.cpp"):

g++ -o image_filter image_filter.cpp `pkg-config opencv4 --cflags --libs`

Run the Program:
After compiling successfully, you can run the program:

./image_filter

This program loads an image named "input.jpg", applies a Gaussian blur using OpenCV, and displays both the original and filtered images.

Remember to replace "input.jpg" with the path to your own image file. 
