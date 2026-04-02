# 💧 Water Intake Reminder

A lightweight, efficient C++ application designed to help you stay hydrated by sending customizable reminders to drink water throughout your day.

## 🚀 Features

  * **Customizable Intervals:** Set exactly how often you want to be reminded (e.g., every 45 minutes, every hour).
  * **Daily Goal Tracking:** Input your daily water intake goal and track your progress as you log your drinks.
  * **Lightweight:** Written in pure C++, ensuring minimal CPU and memory usage while running in the background.
  * **Cross-Platform** *(Adjust if applicable)*: Runs seamlessly on Windows, macOS, and Linux.

## 🛠️ Prerequisites

Before you begin, ensure you have the following installed on your system:

  * A C++ compiler (supporting C++11 or higher, e.g., GCC, Clang, or MSVC)
  * [CMake](https://cmake.org/) (Version 3.10 or higher)

## 📦 Building and Installation

Follow these steps to compile the project from the source code:

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/yourusername/water-intake-reminder.git
    cd water-intake-reminder
    ```

2.  **Create a build directory:**

    ```bash
    mkdir build
    cd build
    ```

3.  **Generate build files and compile:**

    ```bash
    cmake ..
    cmake --build .
    ```

## 💻 Usage

Once compiled, you can run the executable directly from your terminal.

**Basic Run (Default settings):**

```bash
./WaterReminder
```

**Custom Run (Example with arguments):**
You can pass arguments to set your preferred reminder interval (in minutes) and daily goal (in milliliters).

```bash
./WaterReminder --interval 60 --goal 2500
```

### Configuration

*(Optional: If your app uses a config file, describe it here)*
You can also modify the `config.json` (or `.ini`) file located in the root directory to permanently save your preferences.

## 🤝 Contributing

Contributions, issues, and feature requests are welcome\! Feel free to check the [issues page](https://www.google.com/search?q=https://github.com/yourusername/water-intake-reminder/issues) if you want to contribute.

1.  Fork the project.
2.  Create your feature branch (`git checkout -b feature/AmazingFeature`).
3.  Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4.  Push to the branch (`git push origin feature/AmazingFeature`).
5.  Open a Pull Request.

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information.

-----

*If you find this project helpful, please consider giving it a ⭐ on GitHub\!*
