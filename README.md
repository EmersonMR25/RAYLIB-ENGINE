# RAYLIB ENGINE

A lightweight, modular game engine built on top of the Raylib framework, designed for simplicity and ease of use. This project uses modern C++ (C++17), and integrates Raylib and RayGui for rendering and GUI capabilities, respectively.

---

## Features

- **Game Engine Base**: Provides a foundation for developing games with Raylib.
- **Modular Design**: Easy to extend and integrate new features.
- **Built-in GUI**: Leverages RayGui for interface elements.
- **Cross-Platform**: Can be built and run on various operating systems.

---

## Requirements

To build and run this project, you need:

1. **Operating System**: Windows, macOS, or Linux.
2. **Development Environment**: Visual Studio (recommended).
3. **Compiler**: A compiler supporting C++17 or later.
4. **Package Manager**: VCPkg for dependency management.
5. **Dependencies**:
   - [Raylib](https://www.raylib.com/): A simple and easy-to-use library to enjoy videogames programming.
   - [RayGui](https://github.com/raysan5/raygui): A simple and easy-to-use immediate-mode GUI library.

---

## Installation Instructions

### 1. Clone the Repository
```bash
git clone https://github.com/EmersonMR25/RAYLIB-ENGINE.git
cd RAYLIB-ENGINE
```

### 2. Install Dependencies Using VCPkg

Ensure you have [VCPkg](https://github.com/microsoft/vcpkg) installed and integrated with Visual Studio. To install the required libraries, run:
```bash
vcpkg install raylib
vcpkg integrate install
```

### 3. Set Up Visual Studio

1. Open the project in Visual Studio.
2. Configure the project to use C++17:
   - Go to **Project Properties** > **C/C++** > **Language** > **C++ Language Standard** and set it to `ISO C++17 Standard (/std:c++17)`.
3. Link Raylib and RayGui:
   - Include the VCPkg installation path in **Include Directories** and **Library Directories**.
   - Add `raylib.lib` to **Linker > Input > Additional Dependencies**.

---

## Building the Project

1. Open the solution in Visual Studio.
2. Set the build configuration to `Release` or `Debug`.
3. Build the project by clicking **Build** > **Build Solution** or pressing `Ctrl + Shift + B`.

---

## Running the Project

Once the project is successfully built, you can run it directly from Visual Studio by pressing `F5` or clicking **Debug > Start Debugging**.

---

## Contributing

Contributions are welcome! If you have suggestions for improvements or find issues, feel free to open an issue or submit a pull request.

---

## License

This project is licensed under the [MIT License](LICENSE).

---

## Acknowledgments

- [Raylib](https://www.raylib.com/) for the excellent game programming library.
- [RayGui](https://github.com/raysan5/raygui) for the immediate-mode GUI toolkit.
- [VCPkg](https://github.com/microsoft/vcpkg) for simplifying dependency management.

---

## Contact

For questions or support, feel free to reach out through the GitHub repository's issue tracker.

