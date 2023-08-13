# Add-matrix-operations-for-Open-CV-Mini-Wasm-Plugin

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
