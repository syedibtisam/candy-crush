# Candy Crush Game (C++ Implementation)

## **Overview**
This project is a **C++ implementation of the Candy Crush game**, a popular tile-matching puzzle game. The objective is to swap adjacent candies to create matches of three or more identical candies in a row or column, causing them to be removed from the board and earning points for the player. The game includes **score tracking, cascading effects**, and **level progression** to provide an engaging experience.

## **Features**
### **1. Interactive Gameplay**
- Players can **swap adjacent candies** to form matches.
- Valid matches cause the candies to disappear and new candies to drop from the top.
- Special effects and cascades occur when multiple matches are formed in sequence.

### **2. Scoring System**
- Players earn points for every successful match.
- Larger matches (four or more candies) yield **higher points** and may trigger **special effects**.
- **Cascading matches** provide bonus points.

### **3. Level Progression**
- Players must achieve **target scores** to advance to the next level.
- Increasing difficulty as levels progress, with more complex board layouts.

### **4. Randomized Candy Generation**
- The board is populated with different types of candies at the start.
- When candies disappear, new ones fall randomly from the top.

### **5. Simple User Interface**
- The game is text-based and operates in a **console environment**.
- The interface displays:
  - The **current board state**
  - The **score**
  - The **moves left**
  - Messages indicating **valid or invalid moves**.

---

## **Installation and Setup**
Follow the steps below to set up and run the game on your system.

### **1. Clone the Repository**
Clone this project from GitHub using the following command:
```bash
git clone https://github.com/syedibtisam/candy-crush.git
```
Navigate into the project directory:
```bash
cd candy-crush
```

### **2. Install Dependencies**
Ensure you have a C++ compiler installed (such as `g++` or `clang`). If your system is Linux-based, install `g++` using:
```bash
sudo apt update && sudo apt install g++
```
For Windows users, **MinGW** or an equivalent compiler should be installed.

### **3. Compile the Code**
Use a `Makefile` (if provided) or manually compile the game:
```bash
g++ -o candy-crush main.cpp board.cpp game_logic.cpp
```
Alternatively, if a `Makefile` is included:
```bash
make
```

### **4. Run the Game**
Once compiled, execute the game with:
```bash
./candy-crush
```
---

## **How to Play**
1. **Game Start**: The game initializes with a grid of candies.
2. **Making Moves**:
   - Swap **adjacent candies** by entering the row and column numbers.
   - The swap must result in a valid match (at least three in a row or column).
   - Invalid moves will be rejected.
3. **Earning Points**:
   - Matches of **three candies** yield **basic points**.
   - Matches of **four or more** give **extra points** and create **special candies**.
   - **Chain reactions (cascades)** occur when new candies falling into place form additional matches.
4. **Winning and Losing**:
   - Players **advance levels** by reaching the **target score** within a set number of moves.
   - If no moves are left before reaching the target, the game **ends**.

---

## **Project Structure**
The project consists of multiple source files handling different aspects of the game:

```
/candy-crush
│── src/
│   ├── main.cpp          # Entry point of the game
│   ├── board.cpp         # Manages the game board
│   ├── game_logic.cpp    # Handles match detection & scoring
│   ├── ui.cpp            # Handles console-based UI
│── include/
│   ├── board.h           # Header for board management
│   ├── game_logic.h      # Header for game logic functions
│── assets/               # Stores assets like icons (if applicable)
│── README.md             # Documentation (this file)
│── Makefile              # Compilation script
│── LICENSE               # License information
```

### **Key Components**
- `board.cpp` - Generates and updates the board.
- `game_logic.cpp` - Implements the game rules, checking for valid swaps and matches.
- `ui.cpp` - Manages the display and user input.

---

## **Customization**
You can modify the game to:
- Change **grid size** (default is usually 8x8).
- Add **new types of candies** with special effects.
- Introduce **time limits** or **bonus rounds**.
- Implement **a GUI version** with graphics.

---

## **Contributing**
Contributions are welcome! Follow these steps to contribute:
1. **Fork the repository** on GitHub.
2. **Create a new branch** for your feature or bug fix.
3. **Commit your changes** and push to your fork.
4. **Submit a pull request** for review.

---

## **License**
This project is licensed under the **MIT License**. Feel free to use, modify, and distribute the code.

---

## **Acknowledgements**
This project was inspired by the classic **Candy Crush Saga** game. It is a **personal implementation** built for educational purposes and is not affiliated with the official game.

---

