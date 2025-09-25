# 🛠️ Solution Build & Error Notification System

This project is a C++ and Qt-based desktop application developed in Visual Studio. It automates the build process of `.sln` (solution) files according to a predefined schedule and order, and sends error notifications via email when build failures occur. All setting will be saved after closing the app.

## 🚀 Features

- 🔄 Scheduled and ordered build execution for multiple solution files  
- 📧 Automatic email alerts on build errors  
- 🧱 Modular architecture following **SOLID principles**  
- 🧠 Uses **Command Pattern** for build execution and **Observer Pattern** for error reporting  
- 🖥️ Built with **C++**, **Qt**, and **Visual Studio**

## 📦 Technologies Used

- C++15 
- Qt Framework  
- Visual Studio  
- SMTP (for email notifications)  
- Design Patterns: Command, Observer  
- SOLID Principles




## 📬 Email Notification Setup

All email settings (SMTP server, sender, recipient, credentials) can be configured **directly within the application interface**.  

Once entered, the information is securely saved and reused for future build sessions—no need to re-enter each time. This allows seamless error reporting via email whenever a build fails.

## 📌 Notes

- Make sure Qt is properly installed and added to your system path  
- Tested on Windows 10/11  
- Future plans include GUI scheduling and multi-threaded build execution

## 📄 License

This project is licensed under the MIT License.
