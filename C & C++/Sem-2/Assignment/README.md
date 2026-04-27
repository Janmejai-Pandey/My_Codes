# Smart Parking Management System

A C++ console application that simulates a **Smart Parking Management System** for a mall or commercial complex. The system handles vehicle entries, exits, ticket generation, billing, and exception handling using core Object-Oriented Programming (OOP) and Standard Template Library (STL) concepts.

---

## 📋 Table of Contents
- [Features](#-features)
- [Concepts Demonstrated](#-concepts-demonstrated)
- [Requirements](#-requirements)
- [Compilation Instructions](#-compilation-instructions)
- [Running the Program](#-running-the-program)
- [Sample Output](#-sample-output)
- [How It Works](#-how-it-works)
- [Author](#-author)

---

## 🚀 Features

- **Vehicle Queue Management** – Vehicles are added to an entry queue and processed in FIFO order.
- **Slot Allocation** – Automatically assigns vehicles to available slots based on size (SMALL, MEDIUM, LARGE).
- **Ticket Generation** – Generates a unique ticket ID for every parked vehicle.
- **Billing System** – Calculates parking fees based on vehicle type and duration.
- **Overstay Fine** – Adds an extra ₹200 fine if duration exceeds 24 hours.
- **Recent Exits Tracking** – Maintains a stack of recently exited vehicles.
- **Exception Handling** – Custom exceptions for unavailable slots and invalid tickets.

---

## 🧠 Concepts Demonstrated

| Concept | Implementation |
|----------|----------------|
| **Classes & Objects** | `Vehicle`, `ParkingSlot`, `Ticket`, `ParkingSystem` |
| **Encapsulation** | Private members with public getter/setter methods |
| **Enumerations** | `SlotSize` enum class |
| **STL Containers** | `vector`, `list`, `queue`, `stack`, `unordered_map` |
| **Templates** | Generic `sortRecords()` and `search()` functions |
| **Exception Handling** | Custom `ParkingException` class with try/catch blocks |
| **Lambda Functions** | Used in `find_if()` for vehicle search |
| **File/Time Utilities** | `<ctime>` for timestamps, `srand()` for ticket IDs |

---

## 🛠 Requirements

- **C++ Compiler:** g++ (MinGW for Windows) or Clang or MSVC
- **C++ Standard:** C++11 or higher
- **Operating System:** Windows / Linux / macOS

---

## ⚙️ Compilation Instructions

### 🔹 Using g++ (Linux / macOS / Windows with MinGW)

Open a terminal in the project directory and run:

```bash
g++ -o parking parking.cpp
```

---

## ▶️ Running the Program

### On Linux / macOS:
```bash
./parking
```

### On Windows:
```bash
parking.exe
```

The program runs automatically with a predefined set of test vehicles in `main()`. No user input is required.

---

## 📺 Sample Output

```
Vehicle ABC-123 added to queue.
Vehicle XYZ-789 added to queue.
Vehicle BIG-000 added to queue.
Vehicle SMALL-111 added to queue.

--- Processing Entries ---
Vehicle ABC-123 parked in slot 1
Ticket Issued: TKT-ABC-123-457
Vehicle XYZ-789 parked in slot 9
Ticket Issued: TKT-XYZ-789-128
Vehicle BIG-000 parked in slot 10
Ticket Issued: TKT-BIG-000-902
Vehicle SMALL-111 parked in slot 2
Ticket Issued: TKT-SMALL-111-345

--- Processing Exits ---
Vehicle ABC-123 exiting. Total Bill: ₹100
Caught in Main: Error: Invalid or already used ticket ID!

--- Recent Exits ---
ABC-123
```

> 💡 Ticket IDs will differ each time since they are generated using `rand()`.

---

## 🔍 How It Works

### 1. **Initialization**
The `ParkingSystem` constructor initializes:
- 5 SMALL slots (IDs 1–5)
- 3 MEDIUM slots (IDs 6–8)
- 2 LARGE slots (IDs 9–10)

### 2. **Vehicle Entry**
- Vehicles are added to the entry queue using `addVehicleToQueue()`.
- `processEntry()` dequeues each vehicle and assigns it to a matching free slot.
- A `Ticket` is generated and stored in `activeTickets`.

### 3. **Vehicle Exit**
- `processExit(ticketId, durationHours)` calculates the bill:
  - **SMALL:** ₹20/hour
  - **MEDIUM:** ₹50/hour
  - **LARGE:** ₹100/hour
- If duration > 24 hours, ₹200 fine is added.
- The slot is freed and the vehicle’s plate number is pushed onto the `recentExits` stack.

### 4. **Exception Handling**
- **Type 1:** No suitable slot available.
- **Type 2:** Invalid or already used ticket.
- Exceptions are caught both internally and in `main()`.

---

## 👨‍💻 Author

**Smart Parking Management System**  
Developed by Janmejai Pandey as an academic mini-project to demonstrate **OOP, STL, Templates, and Exception Handling** in C++.
