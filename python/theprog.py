def print_board(board):
    print("\n")
    print(f" {board[0]} | {board[1]} | {board[2]} ")
    print("---+---+---")
    print(f" {board[3]} | {board[4]} | {board[5]} ")
    print("---+---+---")
    print(f" {board[6]} | {board[7]} | {board[8]} ")
    print("\n")

def check_win(board, player):
    win_combinations = [
        [0,1,2], [3,4,5], [6,7,8],  # rows
        [0,3,6], [1,4,7], [2,5,8],  # columns
        [0,4,8], [2,4,6]            # diagonals
    ]
    return any(all(board[pos] == player for pos in combo) for combo in win_combinations)

def is_draw(board):
    return all(cell in ["X", "O"] for cell in board)

def tic_tac_toe():
    board = [str(i+1) for i in range(9)]  # Board from 1 to 9
    current_player = "X"

    print("🎮 Welcome to Tic-Tac-Toe!")
    print("Player 1 is X, Player 2 is O")

    while True:
        print_board(board)
        move = input(f"Player {current_player}, choose your move (1-9): ")

        if not move.isdigit() or int(move) not in range(1, 10):
            print("❌ Invalid input. Please enter a number between 1 and 9.")
            continue

        move = int(move) - 1

        if board[move] in ["X", "O"]:
            print("❌ That spot is already taken. Try again.")
            continue

        board[move] = current_player

        if check_win(board, current_player):
            print_board(board)
            print(f"🏆 Player {current_player} wins!")
            break
        elif is_draw(board):
            print_board(board)
            print("🤝 It's a draw!")
            break

        # Switch player1
        
        current_player = "O" if current_player == "X" else "X"

if __name__ == "__main__":
    tic_tac_toe()

